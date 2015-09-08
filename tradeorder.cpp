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
    QMessageBox message(QMessageBox::Question, "撤单", "是否要进行撤单？", QMessageBox::Yes|QMessageBox::No, NULL);
    if (message.exec()==QMessageBox::Yes)
        _withDrawOrder(row);
}

void TradeOrder::_withDrawOrder(int row) {
    qDebug() << "WithDrawOrder" << endl;
}

TradeOrder::~TradeOrder()
{
    delete ui;
}

void TradeOrder::_updateOrderTable() {
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


void TradeOrder::on_pushButton_clicked()
{
    queryOrder();
    QThread::sleep(1);
    queryTrade();
}
