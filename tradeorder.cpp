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
    connect(TraderApi->Spi, SIGNAL(OnRspQryOrderForTab(QVector<QString>)),
            this, SLOT(_showOrderInfo(QVector<QString>)));
    connect(TraderApi->Spi, SIGNAL(OnRspQryTradeForTab(QVector<QString>)),
            this, SLOT(_showTradeInfo(QVector<QString>)));
    connect(this->ui->OrderTable, SIGNAL(cellDoubleClicked(int,int)),
                this, SLOT(_DoubleClickWithdrawOrder(int,int)));
    connect(TraderApi->Spi, SIGNAL(OnRspWithdrawOrder(int)),
            this, SLOT(_getWithdrawRes(int)));
    this->setParent(parent);
}

void TradeOrder::queryTrade() {
    CUstpFtdcQryTradeField* pQryTrade = new CUstpFtdcQryTradeField();
    strcpy(pQryTrade->ExchangeID,"CFFEX");
    strcpy(pQryTrade->BrokerID,g_BrokerID);
    strcpy(pQryTrade->UserID,g_UserID);
    TraderApi->Api->ReqQryTrade(pQryTrade, g_nOrdLocalID++);
    delete pQryTrade;
}

void TradeOrder::queryOrder() {
    CUstpFtdcQryOrderField* pQryOrder = new CUstpFtdcQryOrderField();
    strcpy(pQryOrder->ExchangeID, "CFFEX");
    strcpy(pQryOrder->BrokerID, g_BrokerID);
    strcpy(pQryOrder->UserID, g_UserID);
    TraderApi->Api->ReqQryOrder(pQryOrder, g_nOrdLocalID++);
    delete pQryOrder;
}

//注意要把文件保存成UTF-8 BOM格式，中文才正确
void TradeOrder::_showOrderInfo(QVector<QString> eachRes) {
    ordResult.push_back(eachRes);
    _updateOrderTable();
    return ;
}

void TradeOrder::_showTradeInfo(QVector<QString> eachRes)
{
    tradeResult.push_back(eachRes);
    _updateTradeTable();
    return;
}

void TradeOrder::_DoubleClickWithdrawOrder(int row, int column) {
    if(ui->OrderTable->item(row,5)->text() == "撤单") return;
    QMessageBox message(QMessageBox::Question, "撤单", "是否要进行撤单？", QMessageBox::Yes|QMessageBox::No, NULL);
    if (message.exec()==QMessageBox::Yes)
        _withDrawOrder(row);
}

void TradeOrder::_getWithdrawRes(int withDrawRes) {
    //0: error, 1: no info, 2: success
    QString msg = "";
    if(withDrawRes == 0) msg = "撤单失败";
    else if(withDrawRes == 1) msg = "没有撤单数据";
    else msg = "撤单成功";
    QMessageBox message(QMessageBox::Information, "撤单信息", msg, QMessageBox::Yes, NULL);
    if (message.exec()==QMessageBox::Yes)
        queryInfo();
    return;
}

void TradeOrder::_withDrawOrder(int row) {
    qDebug() << "WithDrawOrder" << endl;
    bool isConvertOK = false;
    int OrderID = (ui->OrderTable->item(row,0)->text()).toInt(&isConvertOK, 10);
    CUstpFtdcOrderActionField* OrderAction = new CUstpFtdcOrderActionField();
    strcpy(OrderAction->ExchangeID, "CFFEX");
    strcpy(OrderAction->BrokerID, g_BrokerID);
    strcpy(OrderAction->UserID, g_UserID);
    strcpy(OrderAction->InvestorID, "01937646");
    //convert order id(int) to const char
    sprintf(OrderAction->OrderSysID,"%12d",OrderID);
    //only valid flag?
    OrderAction->ActionFlag = USTP_FTDC_AF_Delete;
    sprintf(OrderAction->UserOrderActionLocalID, "%012d", g_nOrdLocalID++);
    TraderApi->Api->ReqOrderAction(OrderAction, g_nOrdLocalID++);
    delete OrderAction;
}

TradeOrder::~TradeOrder()
{
    delete ui;
}

void TradeOrder::_updateOrderTable() {
    ui->OrderTable->clearContents();
    ui->OrderTable->setRowCount(ordResult.size());
    for(int i = 0; i < ordResult.size(); i++) {
        for(int j = 0; j < ordResult[i].size(); j++) {
            ui->OrderTable->setItem(i, j, new QTableWidgetItem(ordResult[i][j])); 
        }
    }
}
void TradeOrder::_updateTradeTable() {
    ui->TradeTable->clearContents();
    ui->TradeTable->setRowCount(tradeResult.size());
    for(int i = 0; i < tradeResult.size(); i++) {
        for(int j = 0; j < tradeResult[i].size(); j++) {
            ui->TradeTable->setItem(i, j, new QTableWidgetItem(tradeResult[i][j]));
        }
    }
}
void TradeOrder::queryInfo() {
    ordResult.clear();
    tradeResult.clear();
    queryOrder();
    QThread::sleep(1);
    queryTrade();
}

void TradeOrder::on_pushButton_clicked()
{
    queryInfo();
}
