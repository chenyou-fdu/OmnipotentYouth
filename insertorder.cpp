#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "insertorder.h"
#include "ui_insertorder.h"

InsertOrder::InsertOrder(std::shared_ptr<class CTraderApi>trader,std::shared_ptr<QVector<QString>>IDs, QDialog *parent) :
    TraderApi(trader),
    InstrumentIDs(IDs),
    QDialog(parent),
    ui(new Ui::InsertOrder)
{
    ui->setupUi(this);
    connect(ui->heyuehao,SIGNAL(activated(QString)),this,SLOT(InstrumentID_Set(QString)));
    notice=new QMessageBox;
    //
    connect(TraderApi->Spi,SIGNAL(OnRspOrderInsert(CUstpFtdcInputOrderField*,CUstpFtdcRspInfoField*,int,bool))
            ,this,SLOT(Insert_Rsp(CUstpFtdcInputOrderField*,CUstpFtdcRspInfoField*,int,bool)));

//    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);hide();
//    this->setParent(parent);
    memset(&ord,0,sizeof(CUstpFtdcInputOrderField));
    strcpy(ord.BrokerID,g_BrokerID);
    strcpy(ord.UserID,g_UserID);
    strcpy(ord.ExchangeID,"CFFEX");
    ord.VolumeCondition='1';
    ord.ForceCloseReason='0';
}

InsertOrder::~InsertOrder()
{
    delete ui;
}

//void InsertOrder::Set_IDs(QVector<QString> *IDs)
//{
//    InstrumentIDs=IDs;
//}

void InsertOrder::InstrumentID_Set(QString arg1)
{
    strcpy(ord.InstrumentID,arg1.toStdString().c_str());
    qDebug()<<ord.InstrumentID;
}



void InsertOrder::on_shijia_clicked()
{
    ord.OrderPriceType='1';
}



void InsertOrder::on_xianjia_clicked()
{
    ord.OrderPriceType='2';
}

void InsertOrder::on_touji_clicked()
{
    ord.HedgeFlag='1';
}

void InsertOrder::on_taoli_clicked()
{
    ord.HedgeFlag='2';
}

void InsertOrder::on_taobao_clicked()
{
    ord.HedgeFlag='3';
}

void InsertOrder::on_mairu_clicked()
{
    ord.Direction='0';
}

void InsertOrder::on_maichu_clicked()
{
    ord.Direction='1';
}

void InsertOrder::on_kaichang_clicked()
{
    ord.OffsetFlag='0';
}

void InsertOrder::on_pingchang_clicked()
{
    ord.OffsetFlag='1';
}

void InsertOrder::on_lineEdit_4_textChanged(const QString &arg1)
{
    strcpy(ord.InstrumentID,arg1.toStdString().c_str());
    qDebug()<<ord.InstrumentID;
}

void InsertOrder::on_lineEdit_textChanged(const QString &arg1)
{
    strcpy(ord.InvestorID,arg1.toStdString().c_str());
    qDebug()<<ord.InvestorID;
}


void InsertOrder::on_lineEdit_3_textChanged(const QString &arg1)
{
    ord.LimitPrice=arg1.toFloat();
    qDebug()<<ord.LimitPrice;
}

void InsertOrder::on_lineEdit_5_textChanged(const QString &arg1)
{
    ord.Volume=arg1.toInt();
    qDebug()<<ord.Volume;
}



void InsertOrder::on_IOC_clicked()
{
    ord.TimeCondition='1';
    qDebug()<<ord.TimeCondition;
}

void InsertOrder::on_benri_clicked()
{
    ord.TimeCondition='2';
    qDebug()<<ord.TimeCondition;
}

void InsertOrder::on_dangri_clicked()
{
    ord.TimeCondition='3';
}

void InsertOrder::on_xiadan_clicked()
{
    sprintf(ord.UserOrderLocalID,"%012d",g_nOrdLocalID++);
    qDebug()<<TraderApi->Api->ReqOrderInsert(&ord,g_nOrdLocalID++);

}

void InsertOrder::on_lineEdit_4_textEdited(const QString &arg1)
{
    //strcpy(ord.InstrumentID,arg1.toStdString().c_str());

}

void InsertOrder::on_lineEdit_textEdited(const QString &arg1)
{
    //strcpy(ord.InvestorID,arg1.toStdString().c_str());
}

void InsertOrder::on_lineEdit_3_textEdited(const QString &arg1)
{
    //ord.LimitPrice=arg1.toFloat();
}

void InsertOrder::on_lineEdit_5_textEdited(const QString &arg1)
{
    //ord.Volume=arg1.toInt();
}

void InsertOrder::on_radioButton_clicked()
{
    //ord.VolumeCondition='1';
}

void InsertOrder::on_radioButton_2_clicked()
{
    //ord.VolumeCondition='3';
}

void InsertOrder::Insert_Rsp(CUstpFtdcInputOrderField *iput_rsp, CUstpFtdcRspInfoField *msg, int x, bool y)
{

        qDebug()<<msg->ErrorID<<"\t"<<msg->ErrorMsg;
        this->ui->textBrowser->setText(QString(msg->ErrorMsg));

}

void InsertOrder::Insert_IDs()
{
    for(int i=0;i<InstrumentIDs->size();++i){
        ui->heyuehao->insertItem(i,InstrumentIDs->at(i));
    }

}
