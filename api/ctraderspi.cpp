#include "ctraderspi.h"
#include <QDebug>
//CTraderSpi::CTraderSpi()
//{

//}

//void CTraderSpi::OnRspQryOrder(CUstpFtdcOrderField *pOrder, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
//{
//    qDebug()<<"so...";
//}



void CTraderSpi::OnFrontConnected()
{
    if(LoginStatus)
    {
        CUstpFtdcReqUserLoginField reqUserLogin;
        memset(&reqUserLogin,0,sizeof(CUstpFtdcReqUserLoginField));
        strcpy_s(reqUserLogin.BrokerID,g_BrokerID);
        strcpy_s(reqUserLogin.UserID, g_UserID);
        strcpy_s(reqUserLogin.Password, g_Password);
        strcpy_s(reqUserLogin.UserProductInfo,g_pProductInfo);
        m_pUserApi->ReqUserLogin(&reqUserLogin, g_nOrdLocalID++);
        return;
    }

}
