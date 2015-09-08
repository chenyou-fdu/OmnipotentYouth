#ifndef INVESTORINFO_H
#define INVESTORINFO_H

#include <QWidget>
#include <QVector>
#include <QString>
#include <memory>
#include "public_info.h"
#include "api/ctraderapi.h"
namespace Ui {
class InvestorInfo;
}

class InvestorInfo : public QWidget
{
    Q_OBJECT

public:
    explicit InvestorInfo(std::shared_ptr<class CTraderApi> trader, QWidget *parent = 0);
    void qryInfo();
    ~InvestorInfo();
private slots:
    void _showInfo(CUstpFtdcRspInvestorAccountField *pRspInvestorAccount, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void on_pushButton_clicked();

private:
    Ui::InvestorInfo *ui;
    QVector<QString> investorInfoVec;
    //可调用的API指针
    std::shared_ptr<class CTraderApi> TraderApi;
    CUstpFtdcQryInvestorAccountField* QryInvestorAcc;
};

#endif // INVESTORINFO_H
