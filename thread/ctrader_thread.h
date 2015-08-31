#ifndef CTRADER_THREAD_H
#define CTRADER_THREAD_H

#include "../api/ctraderapi.h"
#include <QThread>


class CTrader_Thread : public QThread
{
public:
    CTrader_Thread(class CTraderApi* traderapi) : TraderApi(traderapi){}
    ~CTrader_Thread(){}
    class CTraderApi* TraderApi;
    void run();

};

#endif // CTRADER_THREAD_H
