#include "cuserspi.h"
#include <QDebug>


CUserSpi::CUserSpi(CUstpFtdcMduserApi *Api): m_pUserApi(Api)
{

}

void CUserSpi::OnFrontConnected()
{
    CUstpFtdcReqUserLoginField reqUserLogin;
    memset(&reqUserLogin,0,sizeof(CUstpFtdcReqUserLoginField));
    strcpy_s(reqUserLogin.BrokerID,g_BrokerID);
    strcpy_s(reqUserLogin.UserID, g_UserID);
    strcpy_s(reqUserLogin.Password, g_Password);
    strcpy_s(reqUserLogin.UserProductInfo,g_pProductInfo);
    m_pUserApi->ReqUserLogin(&reqUserLogin, 0);
}

//void CUserSpi::OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField *pMarketData)
//{
//    qDebug()<<"get it";
//}

//void CUserSpi::OnFrontConnected()
//{
//    qDebug()<<"connectttt";
//}

//void CUserSpi::OnRspSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
//{
//    qDebug()<<"success return";
//}

//CUserSpi::CUserSpi(CUstpFtdcMduserApi *pUser):m_pUserApi(pUser)
//{

//}
