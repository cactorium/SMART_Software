/****************************************************************************
** Meta object code from reading C++ file 'bci_c_serial_comm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bci_c_serial_comm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bci_c_serial_comm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_C_Serial_Comm_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_C_Serial_Comm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_C_Serial_Comm_t qt_meta_stringdata_C_Serial_Comm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "C_Serial_Comm"
QT_MOC_LITERAL(1, 14, 12), // "onDsrChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "status"
QT_MOC_LITERAL(4, 35, 11) // "onReadyRead"

    },
    "C_Serial_Comm\0onDsrChanged\0\0status\0"
    "onReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_C_Serial_Comm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void C_Serial_Comm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        C_Serial_Comm *_t = static_cast<C_Serial_Comm *>(_o);
        switch (_id) {
        case 0: _t->onDsrChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObject C_Serial_Comm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_C_Serial_Comm.data,
      qt_meta_data_C_Serial_Comm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *C_Serial_Comm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *C_Serial_Comm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_C_Serial_Comm.stringdata))
        return static_cast<void*>(const_cast< C_Serial_Comm*>(this));
    return QObject::qt_metacast(_clname);
}

int C_Serial_Comm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
