//下单界面
#ifndef INSERTORDER_H
#define INSERTORDER_H
#include"public_info.h"
#include <QWidget>
#include<QDialog>
#include<QMessageBox>
#include<QDebug>
#include<QVector>
#include <QString>
#include <memory>
#include "api/ctraderapi.h"
namespace Ui {
class InsertOrder;
}

class InsertOrder : public QDialog
{
    Q_OBJECT

public:
    explicit InsertOrder(std::shared_ptr<class CTraderApi>, std::shared_ptr<QVector<QString>>, QDialog *parent = 0);
    ~InsertOrder();/*
    void Set_IDs(QVector<QString>*);*/
public slots:
    void Insert_IDs();
private slots:
    void InstrumentID_Set(QString);
    void on_shijia_clicked();

    void on_xianjia_clicked();

    void on_touji_clicked();

    void on_taoli_clicked();

    void on_taobao_clicked();

    void on_mairu_clicked();

    void on_maichu_clicked();

    void on_kaichang_clicked();

    void on_pingchang_clicked();

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_IOC_clicked();

    void on_benri_clicked();

    void on_dangri_clicked();

    void on_xiadan_clicked();

    void on_lineEdit_4_textEdited(const QString &arg1);

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_lineEdit_5_textEdited(const QString &arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void Insert_Rsp(CUstpFtdcInputOrderField*,CUstpFtdcRspInfoField*,int,bool);


private:
    //可调用的API指针
    std::shared_ptr<class CTraderApi>TraderApi;
    //共享的合约表
    std::shared_ptr <QVector<QString>> InstrumentIDs;
    QMessageBox *notice;
    Ui::InsertOrder *ui;
    CUstpFtdcInputOrderField ord;

};

#endif // INSERTORDER_H
