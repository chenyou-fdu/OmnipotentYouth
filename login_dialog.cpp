#pragma execution_character_set("utf-8")
#include "login_dialog.h"
#include "ui_login_dialog.h"

Login_dialog::Login_dialog(std::shared_ptr<CTraderApi>traderapi, std::shared_ptr<CUserApi> user, QWidget *parent) :
    TraderApi(traderapi),
    UserApi(user),
    QDialog(parent),
    ui(new Ui::Login_dialog)
{
    ui->setupUi(this);
    connect(TraderApi->Spi,SIGNAL(OnRspUserLogin(CUstpFtdcRspUserLoginField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(login_status(CUstpFtdcRspUserLoginField*,CUstpFtdcRspInfoField*,int,bool)));
    connect(UserApi->Spi,SIGNAL(OnRspUserLogin(CUstpFtdcRspUserLoginField*,CUstpFtdcRspInfoField*,int,bool)),
            this,SLOT(login_status2(CUstpFtdcRspUserLoginField*,CUstpFtdcRspInfoField*,int,bool)));
}

Login_dialog::~Login_dialog()
{
    delete ui;
}

void Login_dialog::on_lineEdit_textChanged(const QString &arg1)
{
    strcpy(g_BrokerID,arg1.toStdString().c_str());
}

void Login_dialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    strcpy(g_UserID,arg1.toStdString().c_str());
}


void Login_dialog::on_lineEdit_3_textChanged(const QString &arg1)
{
    strcpy(g_Password,arg1.toStdString().c_str());
}

void Login_dialog::on_pushButton_clicked()
{
    CUstpFtdcReqUserLoginField reqUserLogin;
    memset(&reqUserLogin,0,sizeof(CUstpFtdcReqUserLoginField));
    strcpy(reqUserLogin.BrokerID,g_BrokerID);
    strcpy(reqUserLogin.UserID, g_UserID);
    strcpy(reqUserLogin.Password, g_Password);
    strcpy(reqUserLogin.UserProductInfo,g_pProductInfo);
    //qDebug()<<QString::fromUtf8(g_Password);
    TraderApi->Api->ReqUserLogin(&reqUserLogin, g_nOrdLocalID);
    UserApi->Api->ReqUserLogin(&reqUserLogin, 0);


}

void Login_dialog::login_status(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0){


        qDebug()<<pRspInfo->ErrorID;
        QString errormsg("failed");
        login_status_change(errormsg);
        return;
    }
    g_nOrdLocalID=atoi(pRspUserLogin->MaxOrderLocalID)+1;
    qDebug()<<g_nOrdLocalID;
    QString success("successssssss");
    login_status_change(success);
    Sleep(1000);
    this->destroy();
}

void Login_dialog::login_status2(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0){
//        QString errormsg=QString::fromUtf8(pRspInfo->ErrorMsg);
        qDebug()<<QString::fromUtf8(pRspInfo->ErrorMsg);
        QString errormsg("failed2");
        login_status_change(errormsg);
        return;
    }
    g_nOrdLocalID=atoi(pRspUserLogin->MaxOrderLocalID)+1;
    QString success("success2");
    login_status_change(success);
    Sleep(1000);

}
void Login_dialog::login_status_change(QString &msg)
{
    qDebug()<<msg;
    ui->login_status->setText(msg);
}
