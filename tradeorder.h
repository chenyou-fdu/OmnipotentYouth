#ifndef TRADEORDER_H
#define TRADEORDER_H

#include <QWidget>
#include "public_info.h"
#include <QVector>
#include <QString>
#include <QTableWidgetItem>
#include <memory>
#include "api/ctraderapi.h"
namespace Ui {
class TradeOrder;
}

class TradeOrder : public QWidget
{
    Q_OBJECT

public:
    explicit TradeOrder(std::shared_ptr<class CTraderApi> trader, QWidget *parent = 0);
    ~TradeOrder();
    void QueryInfo();
    void _updateOrderTable();
    void _updateTradeTable();

private slots:
    void _showOrderInfo(CUstpFtdcOrderField *pOrder, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void _showTradeInfo(CUstpFtdcTradeField *pTrade, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void _DoubleClickWithdrawOrder(int row, int column);
    void on_pushButton_clicked();

private:
    Ui::TradeOrder *ui;
    //可调用的API指针
    std::shared_ptr<class CTraderApi> TraderApi;
    //CUstpFtdcQryOrderField* pQryOrder;
    CUstpFtdcQryTradeField* pQryTrade;
    QVector<QVector<QString> > ordResult;
    QVector<QVector<QString> > tradeResult;
    QString _getStatus(char OrderStatus);
    void _queryOrder();
    void _queryTrade();
    void _withDrawOrder(int row);

};

#endif // TRADEORDER_H
