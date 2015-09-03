#ifndef RESTORE_DATA_H
#define RESTORE_DATA_H
#include <memory>
#include <fstream>
#include "api/cuserapi.h"
#include "thread/one_minute_data.h"
#include <QVector>
#include <QString>
#include <QObject>
#include <stdio.h>
#include <QMap>
class Restore_Data : public QObject
{
    Q_OBJECT
public:
    Restore_Data(std::shared_ptr<QVector<QString> >, std::shared_ptr<class CUserApi>);

public slots:
    void One_Minute(CUstpFtdcDepthMarketDataField* pMarketData);
    void Write_Csv();
private:
    One_Minute_Data *Time;
   // std::shared_ptr<class One_Minute_Data> Time=new(One_Minute_Data);
    std::shared_ptr<QVector<QString> > InstrumentIDs;
    std::shared_ptr<class CUserApi> UserApi;
    std::shared_ptr<QMap<QString,QVector<int> > >Minutes_Data=new(QMap<QString,QVector<int> >);
    int max_price;
    int min_price;
    int x;
};

#endif // RESTORE_DATA_H
