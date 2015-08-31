/****************************************************************************
** Meta object code from reading C++ file 'login_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "I:/FM/login_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Login_dialog_t {
    QByteArrayData data[15];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_dialog_t qt_meta_stringdata_Login_dialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Login_dialog"
QT_MOC_LITERAL(1, 13, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "arg1"
QT_MOC_LITERAL(4, 43, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(5, 69, 25), // "on_lineEdit_3_textChanged"
QT_MOC_LITERAL(6, 95, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 117, 12), // "login_status"
QT_MOC_LITERAL(8, 130, 27), // "CUstpFtdcRspUserLoginField*"
QT_MOC_LITERAL(9, 158, 13), // "pRspUserLogin"
QT_MOC_LITERAL(10, 172, 22), // "CUstpFtdcRspInfoField*"
QT_MOC_LITERAL(11, 195, 8), // "pRspInfo"
QT_MOC_LITERAL(12, 204, 10), // "nRequestID"
QT_MOC_LITERAL(13, 215, 7), // "bIsLast"
QT_MOC_LITERAL(14, 223, 13) // "login_status2"

    },
    "Login_dialog\0on_lineEdit_textChanged\0"
    "\0arg1\0on_lineEdit_2_textChanged\0"
    "on_lineEdit_3_textChanged\0"
    "on_pushButton_clicked\0login_status\0"
    "CUstpFtdcRspUserLoginField*\0pRspUserLogin\0"
    "CUstpFtdcRspInfoField*\0pRspInfo\0"
    "nRequestID\0bIsLast\0login_status2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login_dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    4,   54,    2, 0x08 /* Private */,
      14,    4,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, QMetaType::Int, QMetaType::Bool,    9,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, QMetaType::Int, QMetaType::Bool,    9,   11,   12,   13,

       0        // eod
};

void Login_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Login_dialog *_t = static_cast<Login_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->login_status((*reinterpret_cast< CUstpFtdcRspUserLoginField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->login_status2((*reinterpret_cast< CUstpFtdcRspUserLoginField*(*)>(_a[1])),(*reinterpret_cast< CUstpFtdcRspInfoField*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject Login_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Login_dialog.data,
      qt_meta_data_Login_dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Login_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Login_dialog.stringdata0))
        return static_cast<void*>(const_cast< Login_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Login_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
