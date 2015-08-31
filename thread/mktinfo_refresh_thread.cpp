#include "mktinfo_refresh_thread.h"

MktinfoRefreshThread::MktinfoRefreshThread(QObject *parent):QThread(parent)
{

}


void MktinfoRefreshThread::run()
{

    //building....
    while (1) {
       emit(Refreash_mkt());
       QThread::msleep(10000);
    }

}
