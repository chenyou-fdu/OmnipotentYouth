#include "ctraderapi.h"
#include <QDebug>
CTraderApi::CTraderApi()
{
    Api=CUstpFtdcTraderApi::CreateFtdcTraderApi("");
    Spi=new(CTraderSpi)(Api);

    Api->RegisterSpi(Spi);
    Api_Thread=new(CTrader_Thread)(this);
}

CTraderApi::~CTraderApi()
{
    delete(Spi);
    Api->Release();
    delete(Api_Thread);
    qDebug()<<"yes";
}

bool CTraderApi::InitialInstance(char *number, char *inifile)
{
    char tmp[200];
    strcpy(m_number,number);
    TIniFile tf;
    if (!tf.Open(inifile))
    {
        printf("不能打开配置文件\n");
        exit(-1000);
    }
    tf.ReadString(m_number,"MDTreaderFront","",tmp,sizeof(tmp)-1);
    mytrim(tmp);

    Api->RegisterFront(tmp);
    Api->SubscribePrivateTopic(USTP_TERT_QUICK);
    Api->SubscribePublicTopic(USTP_TERT_QUICK);
    Api->SubscribeForQuote(USTP_TERT_QUICK);
    Api->Init();
    Api_Thread->start();
    return true;

}



