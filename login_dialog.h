//登陆界面
#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <QDialog>
#include <QDebug>
#include <Windows.h>
#include <memory>
#include "public_info.h"
#include "api/ctraderapi.h"
#include "api/cuserapi.h"
namespace Ui {
class Login_dialog;
}

class Login_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Login_dialog(std::shared_ptr<CTraderApi>,std::shared_ptr<CUserApi> ,QWidget *parent = 0);
    ~Login_dialog();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_clicked();
//由回掉函数OnRspUserLogin的调用而激活
    void login_status(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    void login_status2(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
private:
    //显示登陆信息
    void login_status_change(QString &errormsg );
    Ui::Login_dialog *ui;
    //可以调用的API指针
    std::shared_ptr<CTraderApi> TraderApi;
    std::shared_ptr<CUserApi> UserApi;
};

#endif // LOGIN_DIALOG_H
