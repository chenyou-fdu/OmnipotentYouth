//行情api
#ifndef CUSERAPI_H
#define CUSERAPI_H
#include "USTPFtdcMduserApi.h"
#include "USTPFtdcUserApiDataType.h"
#include "USTPFtdcUserApiStruct.h"
#include "../thread/cuser_thread.h"
#include "profile.h"
#include "cuserspi.h"

class CUserApi
{
public:
    CUserApi();
    virtual ~CUserApi();
    virtual bool InitInstance(char *  number,char * inifile);

    CUstpFtdcMduserApi *Api;
    CUserSpi *Spi;
private:

    //运行的订阅号
    char m_number[256];
    class CUser_Thread* Api_Thread=NULL;
};

#endif // CUSERAPI_H
