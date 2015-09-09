#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "ctraderspi.h"
#include <QDebug>
#include <QFile>
void CTraderSpi::OnFrontConnected()
{
    CUstpFtdcReqUserLoginField reqUserLogin;
    memset(&reqUserLogin,0,sizeof(CUstpFtdcReqUserLoginField));
    strcpy_s(reqUserLogin.BrokerID,g_BrokerID);
    strcpy_s(reqUserLogin.UserID, g_UserID);
    strcpy_s(reqUserLogin.Password, g_Password);
    strcpy_s(reqUserLogin.UserProductInfo,g_pProductInfo);
    m_pUserApi->ReqUserLogin(&reqUserLogin, g_nOrdLocalID);
}

void CTraderSpi::OnRspQryTrade(CUstpFtdcTradeField *pTrade, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0)
    {
        qDebug("-----------------------------\n");
        qDebug("ErrorInfo: %s\n",pRspInfo->ErrorMsg);
        qDebug("-----------------------------\n");
        return;
    }
    if(pTrade==NULL)
    {
        qDebug("No Trade Info");
        return;
    }
    QVector<QString> eachRes;
    QString TradeID = pTrade->TradeID;
    eachRes.push_back(TradeID);
    eachRes.push_back(pTrade->InstrumentID);
    QString Direction;
    if(pTrade->Direction == '0') Direction = "买入";
    else Direction = "卖出";
    eachRes.push_back(Direction);
    QString OffsetFlag;
    if(pTrade->OffsetFlag == '0') OffsetFlag = "开仓";
    else OffsetFlag = "平仓";
    eachRes.push_back(OffsetFlag);
    eachRes.push_back(QString::number(pTrade->TradePrice));
    eachRes.push_back(QString::number(pTrade->TradeVolume));
    eachRes.push_back(pTrade->TradeTime);
    eachRes.push_back(pTrade->ExchangeID);
    emit(OnRspQryTradeForTab(eachRes));
    return;
}

void CTraderSpi::OnRspQryOrder(CUstpFtdcOrderField *pOrder, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL && pRspInfo->ErrorID!=0) {
        qDebug() << pRspInfo->ErrorMsg << endl;
        return;
    }
    if(pOrder==NULL) {
        qDebug("No Trade Info");
        return;
    }
    if(pOrder->OrderStatus == '0') return;
    QVector<QString> eachRes;
    QString OrderSysID = pOrder->OrderSysID;
    OrderSysID = OrderSysID.trimmed();
    eachRes.push_back(OrderSysID);
    eachRes.push_back(pOrder->InstrumentID);
    QString Direction;
    if(pOrder->Direction == '0') Direction = "买入";
    else Direction = "卖出";
    eachRes.push_back(Direction);
    QString OffsetFlag;
    if(pOrder->OffsetFlag == '0') OffsetFlag = "开仓";
    else OffsetFlag = "平仓";
    eachRes.push_back(OffsetFlag);
    eachRes.push_back(QString::number(pOrder->LimitPrice));
    eachRes.push_back(_getStatus(pOrder->OrderStatus));
    eachRes.push_back(QString::number(pOrder->Volume));
    eachRes.push_back(QString::number(pOrder->VolumeRemain));
    eachRes.push_back(pOrder->InsertTime);
    emit(OnRspQryOrderForTab(eachRes));
    return;
}
void CTraderSpi::OnRspOrderAction(CUstpFtdcOrderActionField *pOrderAction, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    if (pRspInfo!=NULL&&pRspInfo->ErrorID!=0)
    {
        qDebug("-----------------------------\n");
        qDebug("Error：%s\n", pRspInfo->ErrorMsg);
        qDebug("-----------------------------\n");
        emit(OnRspWithdrawOrder(0));
        return;
    }
    if(pOrderAction==NULL)
    {
        qDebug("No Info\n");
        emit(OnRspWithdrawOrder(1));
        return;
    }
    emit(OnRspWithdrawOrder(2));
    return ;
}

QString CTraderSpi::_getStatus(char OrderStatus) const{
    switch (OrderStatus)
    {
    case '5':
        return "撤单";
    case '4':
        return "未成交不在队列中";
    case '3':
        return "未成交还在队列中";
    case '2':
        return "部分成交不在队列中";
    case '1':
        return "部分成交还在队列中";
    case '0':
        return "成交";
    default:
        return "其他";
    }
}
