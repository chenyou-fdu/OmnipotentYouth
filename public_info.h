#ifndef PULIC_H
#define PULIC_H
#include"USTPFtdcUserApiDataType.h"
#include"USTPFtdcUserApiStruct.h"
#include"USTPFtdcMduserApi.h"
#include"USTPFtdcTraderApi.h"

extern char API_INI_NAME[24];
extern TUstpFtdcBrokerIDType g_BrokerID;
extern TUstpFtdcUserIDType	g_UserID;
extern TUstpFtdcPasswordType	g_Password;
extern int g_nOrdLocalID;
extern char g_pProductInfo[5];


extern bool LoginStatus;


class public_info
{
public:
    public_info();
};

#endif // PULIC_H
