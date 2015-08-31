/****************************************************************************
** Meta object code from reading C++ file 'cuserspi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "I:/FM/api/cuserspi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuserspi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CUserSpi_t {
    QByteArrayData data[25];
    char stringdata0[442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CUserSpi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CUserSpi_t qt_meta_stringdata_CUserSpi = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CUserSpi"
QT_MOC_LITERAL(1, 9, 16), // "OnFrontConnected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "OnFrontDisconnected"
QT_MOC_LITERAL(4, 47, 13), // "OnRspQryTopic"
QT_MOC_LITERAL(5, 61, 28), // "CUstpFtdcDisseminationField*"
QT_MOC_LITERAL(6, 90, 14), // "pDissemination"
QT_MOC_LITERAL(7, 105, 22), // "CUstpFtdcRspInfoField*"
QT_MOC_LITERAL(8, 128, 8), // "pRspInfo"
QT_MOC_LITERAL(9, 137, 10), // "nRequestID"
QT_MOC_LITERAL(10, 148, 7), // "bIsLast"
QT_MOC_LITERAL(11, 156, 14), // "OnRspUserLogin"
QT_MOC_LITERAL(12, 171, 27), // "CUstpFtdcRspUserLoginField*"
QT_MOC_LITERAL(13, 199, 13), // "pRspUserLogin"
QT_MOC_LITERAL(14, 213, 15), // "OnRspUserLogout"
QT_MOC_LITERAL(15, 229, 28), // "CUstpFtdcRspUserLogoutField*"
QT_MOC_LITERAL(16, 258, 14), // "pRspUserLogout"
QT_MOC_LITERAL(17, 273, 20), // "OnRtnDepthMarketData"
QT_MOC_LITERAL(18, 294, 30), // "CUstpFtdcDepthMarketDataField*"
QT_MOC_LITERAL(19, 325, 11), // "pMarketData"
QT_MOC_LITERAL(20, 337, 10), // "OnRspError"
QT_MOC_LITERAL(21, 348, 18), // "OnRspSubMarketData"
QT_MOC_LITERAL(22, 367, 33), // "CUstpFtdcSpecificInstrumentFi..."
QT_MOC_LITERAL(23, 401, 19), // "pSpecificInstrument"
QT_MOC_LITERAL(24, 421, 20) // "OnRspUnSubMarketData"

    },
    "CUserSpi\0OnFrontConnected\0\0"
    "OnFrontDisconnected\0OnRspQryTopic\0"
    "CUstpFtdcDisseminationField*\0"
    "pDissemination\0CUstpFtdcRspInfoField*\0"
    "pRspInfo\0nRequestID\0bIsLast\0OnRspUserLogin\0"
    "CUstpFtdcRspUserLoginField*\0pRspUserLogin\0"
    "OnRspUserLogout\0CUstpFtdcRspUserLogoutField*\0"
    "pRspUserLogout\0OnRtnDepthMarketData\0"
    "CUstpFtdcDepthMarketDataField*\0"
    "pMarketData\0OnRspError\0OnRspSubMarketData\0"
    "CUstpFtdcSpecificInstrumentField*\0"
    "pSpecificInstrument\0OnRspUnSubMarketData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUserSpi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    4,   61,    2, 0x06 /* Public */,
      11,    4,   70,    2, 0x06 /* Public */,
      14,    4,   79,    2, 0x06 /* Public */,
      17,    1,   88,    2, 0x06 /* Public */,
      20,    3,   91,    2, 0x06 /* Public */,
      21,    4,   98,    2, 0x06 /* Public */,
      24,    4,  107,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,    6,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,   13,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,   16,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,   23,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,   23,    8,    9,   10,

       0        // eod
};

void CUserSpi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CUserSpi *_t = static_cast<CUserSpi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFrontConnected(); break;
        case 1: _t->OnFrontDisconnected(); break;
        case 2: _t->OnRspQryTopic((*reinterpret_cast< CUstpFtdcDisseminationField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->OnRspUserLogin((*reinterpret_cast< CUstpFtdcRspUserLoginField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->OnRspUserLogout((*reinterpret_cast< CUstpFtdcRspUserLogoutField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->OnRtnDepthMarketData((*reinterpret_cast< CUstpFtdcDepthMarketDataField*(*)>(_a[1]))); break;
        case 6: _t->OnRspError((*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->OnRspSubMarketData((*reinterpret_cast< CUstpFtdcSpecificInstrumentField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 8: _t->OnRspUnSubMarketData((*reinterpret_cast< CUstpFtdcSpecificInstrumentField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CUserSpi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnFrontConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (CUserSpi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnFrontDisconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcDisseminationField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspQryTopic)) {
                *result = 2;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcRspUserLoginField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspUserLogin)) {
                *result = 3;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcRspUserLogoutField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspUserLogout)) {
                *result = 4;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcDepthMarketDataField * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRtnDepthMarketData)) {
                *result = 5;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspError)) {
                *result = 6;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcSpecificInstrumentField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspSubMarketData)) {
                *result = 7;
            }
        }
        {
            typedef void (CUserSpi::*_t)(CUstpFtdcSpecificInstrumentField * , CUstpFtdcRspInfoField * , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CUserSpi::OnRspUnSubMarketData)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject CUserSpi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CUserSpi.data,
      qt_meta_data_CUserSpi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CUserSpi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUserSpi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CUserSpi.stringdata0))
        return static_cast<void*>(const_cast< CUserSpi*>(this));
    if (!strcmp(_clname, "CUstpFtdcMduserSpi"))
        return static_cast< CUstpFtdcMduserSpi*>(const_cast< CUserSpi*>(this));
    return QObject::qt_metacast(_clname);
}

int CUserSpi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CUserSpi::OnFrontConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CUserSpi::OnFrontDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CUserSpi::OnRspQryTopic(CUstpFtdcDisseminationField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CUserSpi::OnRspUserLogin(CUstpFtdcRspUserLoginField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CUserSpi::OnRspUserLogout(CUstpFtdcRspUserLogoutField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CUserSpi::OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CUserSpi::OnRspError(CUstpFtdcRspInfoField * _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CUserSpi::OnRspSubMarketData(CUstpFtdcSpecificInstrumentField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CUserSpi::OnRspUnSubMarketData(CUstpFtdcSpecificInstrumentField * _t1, CUstpFtdcRspInfoField * _t2, int _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
