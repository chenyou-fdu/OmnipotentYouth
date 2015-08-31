#include "public_info.h"

char API_INI_NAME[24]="./config/mduserdemo.ini";
///经纪公司代码
TUstpFtdcBrokerIDType g_BrokerID;
///交易用户代码
TUstpFtdcUserIDType	g_UserID;
///密码
TUstpFtdcPasswordType	g_Password;

///报单信息
int g_nOrdLocalID=0;

char g_pProductInfo[5]="V1.0";

// CUstpFtdcTraderApi *g_traderapi=NULL;
// CTraderspi *g_traderspi=NULL;
// CUstpFtdcMduserApi *g_userapi=NULL;
// CUserSpi *g_userspi=NULL;
public_info::public_info()
{

}

