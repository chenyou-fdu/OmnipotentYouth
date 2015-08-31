#ifndef CTRADERAPI_H
#define CTRADERAPI_H

#include <USTPFtdcTraderApi.h>
#include <USTPFtdcUserApiDataType.h>
#include <USTPFtdcUserApiStruct.h>
#include "../thread/ctrader_thread.h"
#include "ctraderspi.h"
#include "profile.h"
class CTraderApi
{
public:
    CTraderApi();
    ~CTraderApi();
    bool InitialInstance(char *  number,char * inifile);


    //API 接口，SPI 回掉接口
    CUstpFtdcTraderApi* Api;
    CTraderSpi *Spi;
private:
    char m_number[256];
    class CTrader_Thread* Api_Thread=NULL;

};

#endif // CTRADERAPI_H
