#include "cuserapi.h"
#include <QDebug>
CUserApi::CUserApi()
{
    Api_Thread=new(CUser_Thread)(this);
    Api=CUstpFtdcMduserApi::CreateFtdcMduserApi("");
    Spi=new(CUserSpi)(Api);
}

CUserApi::~CUserApi()
{
    Api->Release();
    delete(Api_Thread);
    delete(Spi);
}

bool CUserApi::InitInstance(char *number, char *inifile)
{

    char tmp[200];
    strcpy(m_number,number);
    TIniFile tf;
    if (!tf.Open(inifile))
    {
        printf("不能打开配置文件\n");
        exit(-1000);
    }

//    //初始化行情信息


//    // 产生一个CFfexFtdcMduserApi实例
//    pUserApi = CUstpFtdcMduserApi::CreateFtdcMduserApi("");
//    // 产生一个事件处理的实例
//    sh = new CUserSpi(pUserApi);
//    // 注册一事件处理的实例
//    pUserApi->RegisterSpi(sh);
    // 注册需要的深度行情主题
    /// USTP_TERT_RESTART:从本交易日开始重传
    /// USTP_TERT_RESUME:从上次收到的续传
    /// USTP_TERT_QUICK:先传送当前行情快照,再传送登录后市场行情的内容

    Api->RegisterSpi(Spi);

    int topicid = tf.ReadInt(m_number,"Topic",100);
    int tert = tf.ReadInt(m_number,"TERT",0);

    switch(tert)
    {
    case 0:
        {
            Api->SubscribeMarketDataTopic(topicid, USTP_TERT_RESTART);
            break;
        }
    case 1:
        {
            Api->SubscribeMarketDataTopic(topicid, USTP_TERT_RESUME);
            break;
        }
    case 2:
        {
            Api->SubscribeMarketDataTopic(topicid, USTP_TERT_QUICK);
            break;
        }
    default:
        {
           qDebug()<<"配置 TERT 值不对! \n";
            exit(-1);
        }
    }

    // 设置行情发布服务器的地址

    tf.ReadString(m_number,"MDUserFront","",tmp,sizeof(tmp)-1);
    mytrim(tmp);
    Api->RegisterFront(tmp);
    // 使客户端开始与行情发布服务器建立连接
    int a=0;
    int b=0;
    printf(Api->GetVersion(a,b));
    Api->SetHeartbeatTimeout(300);
    Api->Init();
    Api_Thread->start();
    return true;
}



