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
    void queryOrder();
    void queryTrade();
    void queryInfo();
private slots:
    void _showOrderInfo(QVector<QString> eachRes);
    void _showTradeInfo(QVector<QString> eachRes);
    void _DoubleClickWithdrawOrder(int row, int column);
    void _getWithdrawRes(int withDrawRes);
    void on_pushButton_clicked();
private:
    Ui::TradeOrder *ui;
    //可调用的API指针
    std::shared_ptr<class CTraderApi> TraderApi;
    QVector<QVector<QString> > ordResult;
    QVector<QVector<QString> > tradeResult;
    void _withDrawOrder(int row);
    void _updateOrderTable();
    void _updateTradeTable();
};

#endif // TRADEORDER_H
