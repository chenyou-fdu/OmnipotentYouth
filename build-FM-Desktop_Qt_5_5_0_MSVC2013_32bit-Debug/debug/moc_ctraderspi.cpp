/****************************************************************************
** Meta object code from reading C++ file 'ctraderspi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "I:/FM/api/ctraderspi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctraderspi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CTraderSpi_t {
    QByteArrayData data[75];
    char stringdata0[1487];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTraderSpi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTraderSpi_t qt_meta_stringdata_CTraderSpi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CTraderSpi"
QT_MOC_LITERAL(1, 11, 16), // "OnFrontConnected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "OnRspUserLogin"
QT_MOC_LITERAL(4, 44, 27), // "CUstpFtdcRspUserLoginField*"
QT_MOC_LITERAL(5, 72, 13), // "pRspUserLogin"
QT_MOC_LITERAL(6, 86, 22), // "CUstpFtdcRspInfoField*"
QT_MOC_LITERAL(7, 109, 8), // "pRspInfo"
QT_MOC_LITERAL(8, 118, 10), // "nRequestID"
QT_MOC_LITERAL(9, 129, 7), // "bIsLast"
QT_MOC_LITERAL(10, 137, 16), // "OnRspOrderInsert"
QT_MOC_LITERAL(11, 154, 25), // "CUstpFtdcInputOrderField*"
QT_MOC_LITERAL(12, 180, 11), // "pInputOrder"
QT_MOC_LITERAL(13, 192, 16), // "OnRspOrderAction"
QT_MOC_LITERAL(14, 209, 26), // "CUstpFtdcOrderActionField*"
QT_MOC_LITERAL(15, 236, 12), // "pOrderAction"
QT_MOC_LITERAL(16, 249, 23), // "OnRspUserPasswordUpdate"
QT_MOC_LITERAL(17, 273, 33), // "CUstpFtdcUserPasswordUpdateFi..."
QT_MOC_LITERAL(18, 307, 19), // "pUserPasswordUpdate"
QT_MOC_LITERAL(19, 327, 16), // "OnRspQuoteInsert"
QT_MOC_LITERAL(20, 344, 25), // "CUstpFtdcInputQuoteField*"
QT_MOC_LITERAL(21, 370, 11), // "pInputQuote"
QT_MOC_LITERAL(22, 382, 16), // "OnRspQuoteAction"
QT_MOC_LITERAL(23, 399, 26), // "CUstpFtdcQuoteActionField*"
QT_MOC_LITERAL(24, 426, 12), // "pQuoteAction"
QT_MOC_LITERAL(25, 439, 13), // "OnRspForQuote"
QT_MOC_LITERAL(26, 453, 26), // "CUstpFtdcReqForQuoteField*"
QT_MOC_LITERAL(27, 480, 12), // "pReqForQuote"
QT_MOC_LITERAL(28, 493, 10), // "OnRtnTrade"
QT_MOC_LITERAL(29, 504, 20), // "CUstpFtdcTradeField*"
QT_MOC_LITERAL(30, 525, 6), // "pTrade"
QT_MOC_LITERAL(31, 532, 10), // "OnRtnOrder"
QT_MOC_LITERAL(32, 543, 20), // "CUstpFtdcOrderField*"
QT_MOC_LITERAL(33, 564, 6), // "pOrder"
QT_MOC_LITERAL(34, 571, 21), // "OnRtnInstrumentStatus"
QT_MOC_LITERAL(35, 593, 31), // "CUstpFtdcInstrumentStatusField*"
QT_MOC_LITERAL(36, 625, 17), // "pInstrumentStatus"
QT_MOC_LITERAL(37, 643, 27), // "OnRtnInvestorAccountDeposit"
QT_MOC_LITERAL(38, 671, 40), // "CUstpFtdcInvestorAccountDepos..."
QT_MOC_LITERAL(39, 712, 26), // "pInvestorAccountDepositRes"
QT_MOC_LITERAL(40, 739, 10), // "OnRtnQuote"
QT_MOC_LITERAL(41, 750, 23), // "CUstpFtdcRtnQuoteField*"
QT_MOC_LITERAL(42, 774, 9), // "pRtnQuote"
QT_MOC_LITERAL(43, 784, 19), // "OnErrRtnOrderInsert"
QT_MOC_LITERAL(44, 804, 19), // "OnErrRtnOrderAction"
QT_MOC_LITERAL(45, 824, 19), // "OnErrRtnQuoteInsert"
QT_MOC_LITERAL(46, 844, 13), // "OnRspQryOrder"
QT_MOC_LITERAL(47, 858, 13), // "OnRspQryTrade"
QT_MOC_LITERAL(48, 872, 16), // "OnRspQryExchange"
QT_MOC_LITERAL(49, 889, 26), // "CUstpFtdcRspExchangeField*"
QT_MOC_LITERAL(50, 916, 12), // "pRspExchange"
QT_MOC_LITERAL(51, 929, 23), // "OnRspQryInvestorAccount"
QT_MOC_LITERAL(52, 953, 33), // "CUstpFtdcRspInvestorAccountFi..."
QT_MOC_LITERAL(53, 987, 19), // "pRspInvestorAccount"
QT_MOC_LITERAL(54, 1007, 20), // "OnRspQryUserInvestor"
QT_MOC_LITERAL(55, 1028, 30), // "CUstpFtdcRspUserInvestorField*"
QT_MOC_LITERAL(56, 1059, 13), // "pUserInvestor"
QT_MOC_LITERAL(57, 1073, 18), // "OnRspQryInstrument"
QT_MOC_LITERAL(58, 1092, 28), // "CUstpFtdcRspInstrumentField*"
QT_MOC_LITERAL(59, 1121, 14), // "pRspInstrument"
QT_MOC_LITERAL(60, 1136, 19), // "OnRspQryTradingCode"
QT_MOC_LITERAL(61, 1156, 29), // "CUstpFtdcRspTradingCodeField*"
QT_MOC_LITERAL(62, 1186, 12), // "pTradingCode"
QT_MOC_LITERAL(63, 1199, 24), // "OnRspQryInvestorPosition"
QT_MOC_LITERAL(64, 1224, 34), // "CUstpFtdcRspInvestorPositionF..."
QT_MOC_LITERAL(65, 1259, 20), // "pRspInvestorPosition"
QT_MOC_LITERAL(66, 1280, 23), // "OnRspQryComplianceParam"
QT_MOC_LITERAL(67, 1304, 33), // "CUstpFtdcRspComplianceParamFi..."
QT_MOC_LITERAL(68, 1338, 19), // "pRspComplianceParam"
QT_MOC_LITERAL(69, 1358, 19), // "OnRspQryInvestorFee"
QT_MOC_LITERAL(70, 1378, 26), // "CUstpFtdcInvestorFeeField*"
QT_MOC_LITERAL(71, 1405, 12), // "pInvestorFee"
QT_MOC_LITERAL(72, 1418, 22), // "OnRspQryInvestorMargin"
QT_MOC_LITERAL(73, 1441, 29), // "CUstpFtdcInvestorMarginField*"
QT_MOC_LITERAL(74, 1471, 15) // "pInvestorMargin"

    },
    "CTraderSpi\0OnFrontConnected\0\0"
    "OnRspUserLogin\0CUstpFtdcRspUserLoginField*\0"
    "pRspUserLogin\0CUstpFtdcRspInfoField*\0"
    "pRspInfo\0nRequestID\0bIsLast\0"
    "OnRspOrderInsert\0CUstpFtdcInputOrderField*\0"
    "pInputOrder\0OnRspOrderAction\0"
    "CUstpFtdcOrderActionField*\0pOrderAction\0"
    "OnRspUserPasswordUpdate\0"
    "CUstpFtdcUserPasswordUpdateField*\0"
    "pUserPasswordUpdate\0OnRspQuoteInsert\0"
    "CUstpFtdcInputQuoteField*\0pInputQuote\0"
    "OnRspQuoteAction\0CUstpFtdcQuoteActionField*\0"
    "pQuoteAction\0OnRspForQuote\0"
    "CUstpFtdcReqForQuoteField*\0pReqForQuote\0"
    "OnRtnTrade\0CUstpFtdcTradeField*\0pTrade\0"
    "OnRtnOrder\0CUstpFtdcOrderField*\0pOrder\0"
    "OnRtnInstrumentStatus\0"
    "CUstpFtdcInstrumentStatusField*\0"
    "pInstrumentStatus\0OnRtnInvestorAccountDeposit\0"
    "CUstpFtdcInvestorAccountDepositResField*\0"
    "pInvestorAccountDepositRes\0OnRtnQuote\0"
    "CUstpFtdcRtnQuoteField*\0pRtnQuote\0"
    "OnErrRtnOrderInsert\0OnErrRtnOrderAction\0"
    "OnErrRtnQuoteInsert\0OnRspQryOrder\0"
    "OnRspQryTrade\0OnRspQryExchange\0"
    "CUstpFtdcRspExchangeField*\0pRspExchange\0"
    "OnRspQryInvestorAccount\0"
    "CUstpFtdcRspInvestorAccountField*\0"
    "pRspInvestorAccount\0OnRspQryUserInvestor\0"
    "CUstpFtdcRspUserInvestorField*\0"
    "pUserInvestor\0OnRspQryInstrument\0"
    "CUstpFtdcRspInstrumentField*\0"
    "pRspInstrument\0OnRspQryTradingCode\0"
    "CUstpFtdcRspTradingCodeField*\0"
    "pTradingCode\0OnRspQryInvestorPosition\0"
    "CUstpFtdcRspInvestorPositionField*\0"
    "pRspInvestorPosition\0OnRspQryComplianceParam\0"
    "CUstpFtdcRspComplianceParamField*\0"
    "pRspComplianceParam\0OnRspQryInvestorFee\0"
    "CUstpFtdcInvestorFeeField*\0pInvestorFee\0"
    "OnRspQryInvestorMargin\0"
    "CUstpFtdcInvestorMarginField*\0"
    "pInvestorMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTraderSpi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    4,  150,    2, 0x06 /* Public */,
      10,    4,  159,    2, 0x06 /* Public */,
      13,    4,  168,    2, 0x06 /* Public */,
      16,    4,  177,    2, 0x06 /* Public */,
      19,    4,  186,    2, 0x06 /* Public */,
      22,    4,  195,    2, 0x06 /* Public */,
      25,    4,  204,    2, 0x06 /* Public */,
      28,    1,  213,    2, 0x06 /* Public */,
      31,    1,  216,    2, 0x06 /* Public */,
      34,    1,  219,    2, 0x06 /* Public */,
      37,    1,  222,    2, 0x06 /* Public */,
      40,    1,  225,    2, 0x06 /* Public */,
      43,    2,  228,    2, 0x06 /* Public */,
      44,    2,  233,    2, 0x06 /* Public */,
      45,    2,  238,    2, 0x06 /* Public */,
      46,    4,  243,    2, 0x06 /* Public */,
      47,    4,  252,    2, 0x06 /* Public */,
      48,    4,  261,    2, 0x06 /* Public */,
      51,    4,  270,    2, 0x06 /* Public */,
      54,    4,  279,    2, 0x06 /* Public */,
      57,    4,  288,    2, 0x06 /* Public */,
      60,    4,  297,    2, 0x06 /* Public */,
      63,    4,  306,    2, 0x06 /* Public */,
      66,    4,  315,    2, 0x06 /* Public */,
      69,    4,  324,    2, 0x06 /* Public */,
      72,    4,  333,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,    5,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   12,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   15,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   18,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   21,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   24,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   27,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 6,   12,    7,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 6,   15,    7,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 6,   21,    7,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   33,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   30,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   50,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 52, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   53,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   56,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   59,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 61, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   62,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 64, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   65,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 67, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   68,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   71,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 73, 0x80000000 | 6, QMetaType::Int, QMetaType::Bool,   74,    7,    8,    9,

       0        // eod
};

void CTraderSpi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CTraderSpi *_t = static_cast<CTraderSpi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFrontConnected(); break;
        case 1: _t->OnRspUserLogin((*reinterpret_cast< CUstpFtdcRspUserLoginField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->OnRspOrderInsert((*reinterpret_cast< CUstpFtdcInputOrderField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->OnRspOrderAction((*reinterpret_cast< CUstpFtdcOrderActionField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->OnRspUserPasswordUpdate((*reinterpret_cast< CUstpFtdcUserPasswordUpdateField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->OnRspQuoteInsert((*reinterpret_cast< CUstpFtdcInputQuoteField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->OnRspQuoteAction((*reinterpret_cast< CUstpFtdcQuoteActionField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->OnRspForQuote((*reinterpret_cast< CUstpFtdcReqForQuoteField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 8: _t->OnRtnTrade((*reinterpret_cast< CUstpFtdcTradeField*(*)>(_a[1]))); break;
        case 9: _t->OnRtnOrder((*reinterpret_cast< CUstpFtdcOrderField*(*)>(_a[1]))); break;
        case 10: _t->OnRtnInstrumentStatus((*reinterpret_cast< CUstpFtdcInstrumentStatusField*(*)>(_a[1]))); break;
        case 11: _t->OnRtnInvestorAccountDeposit((*reinterpret_cast< CUstpFtdcInvestorAccountDepositResField*(*)>(_a[1]))); break;
        case 12: _t->OnRtnQuote((*reinterpret_cast< CUstpFtdcRtnQuoteField*(*)>(_a[1]))); break;
        case 13: _t->OnErrRtnOrderInsert((*reinterpret_cast< CUstpFtdcInputOrderField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2]))); break;
        case 14: _t->OnErrRtnOrderAction((*reinterpret_cast< CUstpFtdcOrderActionField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2]))); break;
        case 15: _t->OnErrRtnQuoteInsert((*reinterpret_cast< CUstpFtdcInputQuoteField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2]))); break;
        case 16: _t->OnRspQryOrder((*reinterpret_cast< CUstpFtdcOrderField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 17: _t->OnRspQryTrade((*reinterpret_cast< CUstpFtdcTradeField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 18: _t->OnRspQryExchange((*reinterpret_cast< CUstpFtdcRspExchangeField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 19: _t->OnRspQryInvestorAccount((*reinterpret_cast< CUstpFtdcRspInvestorAccountField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 20: _t->OnRspQryUserInvestor((*reinterpret_cast< CUstpFtdcRspUserInvestorField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 21: _t->OnRspQryInstrument((*reinterpret_cast< CUstpFtdcRspInstrumentField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 22: _t->OnRspQryTradingCode((*reinterpret_cast< CUstpFtdcRspTradingCodeField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 23: _t->OnRspQryInvestorPosition((*reinterpret_cast< CUstpFtdcRspInvestorPositionField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 24: _t->OnRspQryComplianceParam((*reinterpret_cast< CUstpFtdcRspComplianceParamField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 25: _t->OnRspQryInvestorFee((*reinterpret_cast< CUstpFtdcInvestorFeeField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 26: _t->OnRspQryInvestorMargin((*reinterpret_cast< CUstpFtdcInvestorMarginField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CTraderSpi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnFrontConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspUserLoginField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspUserLogin)) {
                *result = 1;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInputOrderField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspOrderInsert)) {
                *result = 2;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcOrderActionField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspOrderAction)) {
                *result = 3;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcUserPasswordUpdateField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspUserPasswordUpdate)) {
                *result = 4;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInputQuoteField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQuoteInsert)) {
                *result = 5;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcQuoteActionField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQuoteAction)) {
                *result = 6;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcReqForQuoteField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspForQuote)) {
                *result = 7;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcTradeField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRtnTrade)) {
                *result = 8;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcOrderField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRtnOrder)) {
                *result = 9;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInstrumentStatusField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRtnInstrumentStatus)) {
                *result = 10;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInvestorAccountDepositResField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRtnInvestorAccountDeposit)) {
                *result = 11;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRtnQuoteField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRtnQuote)) {
                *result = 12;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInputOrderField * , CUstpFtdcRspInfoField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnErrRtnOrderInsert)) {
                *result = 13;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcOrderActionField * , CUstpFtdcRspInfoField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnErrRtnOrderAction)) {
                *result = 14;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInputQuoteField * , CUstpFtdcRspInfoField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnErrRtnQuoteInsert)) {
                *result = 15;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcOrderField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryOrder)) {
                *result = 16;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcTradeField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryTrade)) {
                *result = 17;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspExchangeField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryExchange)) {
                *result = 18;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspInvestorAccountField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryInvestorAccount)) {
                *result = 19;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspUserInvestorField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryUserInvestor)) {
                *result = 20;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspInstrumentField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryInstrument)) {
                *result = 21;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspTradingCodeField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryTradingCode)) {
                *result = 22;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspInvestorPositionField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryInvestorPosition)) {
                *result = 23;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcRspComplianceParamField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryComplianceParam)) {
                *result = 24;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInvestorFeeField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryInvestorFee)) {
                *result = 25;
            }
        }
        {
            typedef void (CTraderSpi::*_t)(CUstpFtdcInvestorMarginField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTraderSpi::OnRspQryInvestorMargin)) {
                *result = 26;
            }
        }
    }
}

const QMetaObject CTraderSpi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTraderSpi.data,
      qt_meta_data_CTraderSpi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CTraderSpi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTraderSpi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CTraderSpi.stringdata0))
        return static_cast<void*>(const_cast< CTraderSpi*>(this));
    if (!strcmp(_clname, "CUstpFtdcTraderSpi"))
        return static_cast< CUstpFtdcTraderSpi*>(const_cast< CTraderSpi*>(this));
    return QObject::qt_metacast(_clname);
}

int CTraderSpi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void CTraderSpi::OnFrontConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CTraderSpi::OnRspUserLogin(CUstpFtdcRspUserLoginField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTraderSpi::OnRspOrderInsert(CUstpFtdcInputOrderField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTraderSpi::OnRspOrderAction(CUstpFtdcOrderActionField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTraderSpi::OnRspUserPasswordUpdate(CUstpFtdcUserPasswordUpdateField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CTraderSpi::OnRspQuoteInsert(CUstpFtdcInputQuoteField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CTraderSpi::OnRspQuoteAction(CUstpFtdcQuoteActionField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CTraderSpi::OnRspForQuote(CUstpFtdcReqForQuoteField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CTraderSpi::OnRtnTrade(CUstpFtdcTradeField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CTraderSpi::OnRtnOrder(CUstpFtdcOrderField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CTraderSpi::OnRtnInstrumentStatus(CUstpFtdcInstrumentStatusField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CTraderSpi::OnRtnInvestorAccountDeposit(CUstpFtdcInvestorAccountDepositResField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CTraderSpi::OnRtnQuote(CUstpFtdcRtnQuoteField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CTraderSpi::OnErrRtnOrderInsert(CUstpFtdcInputOrderField * _t1, CUstpFtdcRspInfoField * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CTraderSpi::OnErrRtnOrderAction(CUstpFtdcOrderActionField * _t1, CUstpFtdcRspInfoField * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CTraderSpi::OnErrRtnQuoteInsert(CUstpFtdcInputQuoteField * _t1, CUstpFtdcRspInfoField * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CTraderSpi::OnRspQryOrder(CUstpFtdcOrderField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CTraderSpi::OnRspQryTrade(CUstpFtdcTradeField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CTraderSpi::OnRspQryExchange(CUstpFtdcRspExchangeField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CTraderSpi::OnRspQryInvestorAccount(CUstpFtdcRspInvestorAccountField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CTraderSpi::OnRspQryUserInvestor(CUstpFtdcRspUserInvestorField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CTraderSpi::OnRspQryInstrument(CUstpFtdcRspInstrumentField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CTraderSpi::OnRspQryTradingCode(CUstpFtdcRspTradingCodeField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CTraderSpi::OnRspQryInvestorPosition(CUstpFtdcRspInvestorPositionField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CTraderSpi::OnRspQryComplianceParam(CUstpFtdcRspComplianceParamField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CTraderSpi::OnRspQryInvestorFee(CUstpFtdcInvestorFeeField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CTraderSpi::OnRspQryInvestorMargin(CUstpFtdcInvestorMarginField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_END_MOC_NAMESPACE
