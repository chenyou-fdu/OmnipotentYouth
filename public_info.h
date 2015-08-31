#ifndef PULIC_H
#define PULIC_H
#include"USTPFtdcUserApiDataType.h"
#include"USTPFtdcUserApiStruct.h"
#include"USTPFtdcMduserApi.h"
#include"USTPFtdcTraderApi.h"
//#include"api/ctraderspi.h"
//#include"api/cuserspi.h"
//class CUserSpi;
//class CTraderspi;

extern char API_INI_NAME[24];
extern TUstpFtdcBrokerIDType g_BrokerID;
extern TUstpFtdcUserIDType	g_UserID;
extern TUstpFtdcPasswordType	g_Password;
extern int g_nOrdLocalID;
extern char g_pProductInfo[5];

//extern CUstpFtdcTraderApi *g_traderapi;
//extern CTraderspi *g_traderspi;
//extern CUstpFtdcMduserApi *g_userapi;
//extern CUserSpi *g_userspi;
class public_info
{
public:
    public_info();
};

#endif // PULIC_H
