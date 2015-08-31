#ifndef MKTINFO_REFRESH_H
#define MKTINFO_REFRESH_H

#include<QThread>
#include"tab_models/market_info.h"
#include"tab_models/position.h"
class MktinfoRefreshThread:public QThread
{
    Q_OBJECT
public:
    MktinfoRefreshThread(QObject *parent=0);
    void run();
signals:
    void Refreash_mkt();
private:


};

#endif // MKTINFO_REFRESH_H
