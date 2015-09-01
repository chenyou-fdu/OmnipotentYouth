#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "tradeorder.h"
#include "ui_tradeorder.h"
#include <QStringList>
#include <QStandardItemModel>
#include <QMessageBox>
#include <fstream>
using namespace std;
TradeOrder::TradeOrder(std::shared_ptr<class CTraderApi> trader, QWidget *parent) : TraderApi(trader),
    QWidget(parent),
    ui(new Ui::TradeOrder)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);hide();
//    connect(spi, SIGNAL(OnRspQryOrder(CUstpFtdcOrderField*, CUstpFtdcRspInfoField*, int, bool)),
//            this, SLOT(_showOrderInfo(CUstpFtdcOrderField*,CUstpFtdcRspInfoField*,int,bool)));
//    connect(spi, SIGNAL(OnRspQryTrade(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)),
//            this, SLOT(_showTradeInfo(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)));
//    connect(this->ui->OrderTable, SIGNAL(cellDoubleClicked(int,int)),
//            this, SLOT(_DoubleClickWithdrawOrder(int,int)));
    connect(TraderApi->Spi,SIGNAL(OnRspQryTrade(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(_showTradeInfo(CUstpFtdcTradeField*,CUstpFtdcRspInfoField*,int,bool)));
    connect(TraderApi->Spi,SIGNAL(OnRspQryOrder(CUstpFtdcOrderField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(_showOrderInfo(CUstpFtdcOrderField*,CUstpFtdcRspInfoField*,int,bool)));
    this->setParent(parent);
    pQryOrder = new CUstpFtdcQryOrderField();
    pQryTrade = new CUstpFtdcQryTradeField();
    //_queryOrder();
    //_queryTrade();
    //FOR DEBUG
    /*
    QString debugInfo = "测试文本";
    for(int i = 0; i < 5; i++) {
        QVector<QString> temp(8, debugInfo);
        tradeResult.push_back(temp);
    }
    */
}

void TradeOrder::QueryInfo(){
    //qDebug() << "QUERY" << endl;
    //_queryTrade();
    _queryOrder();
}

void TradeOrder::_queryTrade() {
    //tradeResult.clear();
    strcpy(pQryTrade->ExchangeID,"CFFEX");
    strcpy(pQryTrade->BrokerID,g_BrokerID);
    strcpy(pQryTrade->UserID,g_UserID);
    TraderApi->Api->ReqQryTrade(pQryTrade, g_nOrdLocalID++);
}

void TradeOrder::_queryOrder() {
    //ordResult.clear();
    strcpy(pQryOrder->ExchangeID, "CFFEX");
    strcpy(pQryOrder->BrokerID, g_BrokerID);
    strcpy(pQryOrder->UserID, g_UserID);
    //strcpy(pQryTrade->InvestorID, "01937646");
    TraderApi->Api->ReqQryOrder(pQryOrder, g_nOrdLocalID++);
}

//注意要把文件保存成UTF-8 BOM格式，中文才正确
void TradeOrder::_showOrderInfo(CUstpFtdcOrderField *pOrder, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    qDebug() << pOrder->OrderSysID << endl;
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0)
    {
        //qDebug() << "WRONG" << endl;
        qDebug() << pRspInfo->ErrorMsg << endl;
        return;
    }
    if(pOrder==NULL)
    {
        //printf("平没有查询到报单数据\n");
        qDebug() << "NOTHING" << endl;
        return;
    }
    QVector<QString> eachRes;
    QString OrderSysID = pOrder->OrderSysID;
    OrderSysID = OrderSysID.trimmed();
    eachRes.push_back(OrderSysID);
    eachRes.push_back(pOrder->InstrumentID);
    QString Direction;
    if(pOrder->Direction == '0') Direction = "买入";
    else Direction = "卖出";
    eachRes.push_back(Direction);
    QString OffsetFlag;
    if(pOrder->OffsetFlag == '0') OffsetFlag = "开仓";
    else OffsetFlag = "平仓";
    eachRes.push_back(OffsetFlag);
    eachRes.push_back(QString::number(pOrder->LimitPrice));
    eachRes.push_back(_getStatus(pOrder->OrderStatus));
    eachRes.push_back(QString::number(pOrder->Volume));
    eachRes.push_back(QString::number(pOrder->VolumeRemain));
    eachRes.push_back(pOrder->InsertTime);
    ordResult.push_back(eachRes);
    _updateOrderTable();
    return ;
}

void TradeOrder::_showTradeInfo(CUstpFtdcTradeField *pTrade, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0)
    {
        printf("-----------------------------\n");
        printf("查询成交失败 错误原因：%s\n",pRspInfo->ErrorMsg);
        printf("-----------------------------\n");
        return;
    }
    if(pTrade==NULL)
    {
        printf("没有查询到成交数据");
        return;
    }
    QVector<QString> eachRes;
    QString TradeID = pTrade->TradeID;
    eachRes.push_back(TradeID);
    eachRes.push_back(pTrade->InstrumentID);
    QString Direction;
    if(pTrade->Direction == '0') Direction = "买入";
    else Direction = "卖出";
    eachRes.push_back(Direction);
    QString OffsetFlag;
    if(pTrade->OffsetFlag == '0') OffsetFlag = "开仓";
    else OffsetFlag = "平仓";
    eachRes.push_back(OffsetFlag);
    eachRes.push_back(QString::number(pTrade->TradePrice));
    eachRes.push_back(QString::number(pTrade->TradeVolume));
    eachRes.push_back(pTrade->TradeTime);
    eachRes.push_back(pTrade->ExchangeID);
    tradeResult.push_back(eachRes);
    _updateTradeTable();
    return;
}

void TradeOrder::_DoubleClickWithdrawOrder(int row, int column) {
    //qDebug() << row << endl;
    QMessageBox message(QMessageBox::Question, "撤单", "是否要进行撤单？", QMessageBox::Yes|QMessageBox::No, NULL);
    if (message.exec()==QMessageBox::Yes)
        _withDrawOrder(row);
}

void TradeOrder::_withDrawOrder(int row) {
    qDebug() << "WithDrawOrder" << endl;
}

TradeOrder::~TradeOrder()
{
    delete pQryOrder;
    delete pQryTrade;
    delete ui;
}

void TradeOrder::_updateOrderTable() {
    //ui->OrderTable->clear();
    ui->OrderTable->setRowCount(ordResult.size());
    for(int i = 0; i < ordResult.size(); i++) {
        for(int j = 0; j < ordResult[i].size(); j++) {
            ui->OrderTable->setItem(i, j, new QTableWidgetItem(ordResult[i][j])); 
        }
    }
}
void TradeOrder::_updateTradeTable() {
    ui->TradeTable->setRowCount(tradeResult.size());
    for(int i = 0; i < tradeResult.size(); i++) {
        for(int j = 0; j < tradeResult[i].size(); j++) {
            ui->TradeTable->setItem(i, j, new QTableWidgetItem(tradeResult[i][j]));
        }
    }
}

QString TradeOrder::_getStatus(char OrderStatus){
    switch (OrderStatus)
    {
    case '5':
        return "撤单";
    case '4':
        return "未成交不在队列中";
    case '3':
        return "未成交还在队列中";
    case '2':
        return "部分成交不在队列中";
    case '1':
        return "部分成交还在队列中";
    case '0':
        return "成交";
    default:
        return "其他";
    }
}

void TradeOrder::on_pushButton_clicked()
{
    qDebug() << "QUERY" << endl;
    _queryOrder();
}
