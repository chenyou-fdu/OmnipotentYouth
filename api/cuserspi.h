﻿#ifndef CUSERSPI_H
#define CUSERSPI_H
#include<QObject>
#include"USTPFtdcMduserApi.h"
#include"USTPFtdcUserApiDataType.h"
#include"USTPFtdcUserApiStruct.h"
#include "public_info.h"
class CUserSpi:public QObject,public CUstpFtdcMduserSpi
{
    Q_OBJECT
public:
    CUserSpi(CUstpFtdcMduserApi *Api);


    /*
    CUserSpi(CUstpFtdcMduserApi *);*/
    void OnFrontConnected();
signals:
    // 当客户端与行情发布服务器建立起通信连接，客户端需要进行登录


    // 当客户端与行情发布服务器通信连接断开时，该方法被调用
    void OnFrontDisconnected();

    void OnRspQryTopic(CUstpFtdcDisseminationField *pDissemination, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    // 当客户端发出登录请求之后，该方法会被调用，通知客户端登录是否成功
    void OnRspUserLogin(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///用户退出应答
    void OnRspUserLogout(CUstpFtdcRspUserLogoutField *pRspUserLogout, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    // 深度行情通知，行情服务器会主动通知客户端
    void OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField *pMarketData);


    // 针对用户请求的出错通知
    void OnRspError(CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///订阅合约的相关信息
    void OnRspSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    ///订阅合约的相关信息
    void OnRspUnSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
private:
    CUstpFtdcMduserApi *m_pUserApi;
};

#endif // CUSERSPI_H
