#include "restore_data.h"

#include <QDebug>

Restore_Data::Restore_Data(std::shared_ptr<QVector<QString> >IDs, std::shared_ptr<class CUserApi>Api):
    InstrumentIDs(IDs),
    UserApi(Api)
{
    Time=new(One_Minute_Data);
    Time->start();
    connect(Api->Spi,SIGNAL(OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField*)),
            this,SLOT(One_Minute(CUstpFtdcDepthMarketDataField*)));
    connect(Time,SIGNAL(One_Min_Over()),
            this,SLOT(Write_Csv()));

    /*Initial the temporal data and creat csv files*/
    int len=InstrumentIDs->size();
    for(int i=0; i<len; ++i){
        QString name=InstrumentIDs->at(i);
        qDebug()<<name;
        Minutes_Data->insert(name,QVector<int>(4,0));
        std::string c_name=name.toStdString();
        FILE *csv;
        char file_name[20];
        sprintf(file_name,"%s.csv",c_name.c_str());
        csv=fopen(file_name,"wt");
        fclose(csv);
    }
}
/*Refreah tmporal data*/
void Restore_Data::One_Minute(CUstpFtdcDepthMarketDataField *pMarketData)
{
    //qDebug()<<pMarketData->UpdateTime;
    auto iter=Minutes_Data->find(QString::fromUtf8(pMarketData->InstrumentID));
    if(iter.value().at(0)==0){
        QVector<int>tmp(4,int(pMarketData->LastPrice));
        iter.value()=tmp;
        max_price=pMarketData->LastPrice;
        min_price=pMarketData->LastPrice;
        return;
    }
    else{
        QVector<int>tmp;
        tmp.push_back(iter.value().at(0));
        if(pMarketData->LastPrice>max_price){
            tmp.push_back(pMarketData->LastPrice);
        }
        else{
            tmp.push_back((max_price));
        }
        if(pMarketData->LastPrice<min_price){
            tmp.push_back(pMarketData->LastPrice);
        }
        else{
            tmp.push_back(min_price);
        }
        tmp.push_back(pMarketData->LastPrice);
        iter.value()=tmp;
        //qDebug()<<iter.value();
    }
}
/*Write a line per minute*/
void Restore_Data::Write_Csv()
{
    int len=InstrumentIDs->size();
    for(int i=0; i<len; ++i){
        QString name=InstrumentIDs->at(i);
        auto iter=Minutes_Data->find(name);
        std::string c_name=name.toStdString();
        std::ofstream csv;
        char file_name[20];
        sprintf(file_name,"%s.csv",c_name.c_str());
        csv.open(file_name,std::ios::out | std::ios::ate | std::ios::app);
       // qDebug()<<iter.key()<<"\t"<<iter.value();
        csv<<iter.value().at(0)<<','<<iter.value().at(1)<<','<<iter.value().at(2)<<','
          <<iter.value().at(3)<<','<<std::endl;
//        fprintf(csv,"%d,%d,%d,%d\n",iter.value().at(0),
//                iter.value().at(1),iter.value().at(2),
//                iter.value().at(3));
//        fflush(csv);
//        fclose(csv);
        csv.close();
        QVector<int>tmp(4,0);
        iter.value()=tmp;
        //qDebug()<<i<<"\n";
    }
    return;
}
