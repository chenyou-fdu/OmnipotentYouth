#include "one_minute_data.h"

One_Minute_Data::One_Minute_Data(QObject *parent):QThread(parent)
{

}

void One_Minute_Data::run()
{
    while(1){
        QThread::msleep(6000);
        emit (One_Min_Over());
    }
}

