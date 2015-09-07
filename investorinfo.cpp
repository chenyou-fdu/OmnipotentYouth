#include "investorinfo.h"
#include "ui_investorinfo.h"

InvestorInfo::InvestorInfo(std::shared_ptr<class CTraderApi> trader, QWidget *parent) : TraderApi(trader),
    QWidget(parent),
    ui(new Ui::InvestorInfo)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);hide();
    connect(TraderApi->Spi, SIGNAL(OnRspQryInvestorAccount(CUstpFtdcRspInvestorAccountField*,CUstpFtdcRspInfoField*,int,bool)),
            this, SLOT(_showInfo(CUstpFtdcRspInvestorAccountField*,CUstpFtdcRspInfoField*,int,bool)));
    QryInvestorAcc = new CUstpFtdcQryInvestorAccountField();
}

InvestorInfo::~InvestorInfo()
{
    delete ui;
}

void InvestorInfo::qryInfo() {
    strcpy(QryInvestorAcc->BrokerID,g_BrokerID);
    TraderApi->Api->ReqQryInvestorAccount(QryInvestorAcc,g_nOrdLocalID++);
    return ;
}

void InvestorInfo::_showInfo(CUstpFtdcRspInvestorAccountField *pRspInvestorAccount, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
    if (pRspInfo != NULL && pRspInfo->ErrorID != 0) {
        qDebug() << "ReqQryInvestorAccount Failed For Reason:" << pRspInfo->ErrorMsg << endl;
        return;
    }
    if (pRspInvestorAccount==NULL) {
        qDebug() << "Found No Investor Account" << endl;
        return;
    }
    this->ui->accountID_label->setText(pRspInvestorAccount->AccountID);
    this->ui->investorID_label->setText(pRspInvestorAccount->InvestorID);
    this->ui->available_label->setText(QString::number(pRspInvestorAccount->Available, 'f', 2));
    this->ui->posProfit_label->setText(QString::number(pRspInvestorAccount->PositionProfit, 'f', 2));
    this->ui->closeProfit_label->setText(QString::number(pRspInvestorAccount->CloseProfit, 'f', 2));
    this->ui->margin_label->setText(QString::number(pRspInvestorAccount->Margin, 'f', 2));
    this->ui->fee_label->setText(QString::number(pRspInvestorAccount->Fee, 'f', 2));
}

//void InvestorInfo::on_pushButton_clicked()
//{
//    qDebug() << "dasf" << endl;
//    qryInfo();
//}
