/****************************************************************************
** Meta object code from reading C++ file 'bci_c_eeg_io.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bci_c_eeg_io.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bci_c_eeg_io.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_C_EEG_IO_t {
    QByteArrayData data[7];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_C_EEG_IO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_C_EEG_IO_t qt_meta_stringdata_C_EEG_IO = {
    {
QT_MOC_LITERAL(0, 0, 8), // "C_EEG_IO"
QT_MOC_LITERAL(1, 9, 12), // "EEGDataReady"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "EEG_Data*"
QT_MOC_LITERAL(4, 33, 5), // "pData"
QT_MOC_LITERAL(5, 39, 12), // "SetConnected"
QT_MOC_LITERAL(6, 52, 15) // "SetDisconnected"

    },
    "C_EEG_IO\0EEGDataReady\0\0EEG_Data*\0pData\0"
    "SetConnected\0SetDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_C_EEG_IO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void C_EEG_IO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        C_EEG_IO *_t = static_cast<C_EEG_IO *>(_o);
        switch (_id) {
        case 0: _t->EEGDataReady((*reinterpret_cast< EEG_Data*(*)>(_a[1]))); break;
        case 1: _t->SetConnected(); break;
        case 2: _t->SetDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (C_EEG_IO::*_t)(EEG_Data * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&C_EEG_IO::EEGDataReady)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject C_EEG_IO::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_C_EEG_IO.data,
      qt_meta_data_C_EEG_IO,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *C_EEG_IO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *C_EEG_IO::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_C_EEG_IO.stringdata))
        return static_cast<void*>(const_cast< C_EEG_IO*>(this));
    if (!strcmp(_clname, "C_ConnectedDevice"))
        return static_cast< C_ConnectedDevice*>(const_cast< C_EEG_IO*>(this));
    return QThread::qt_metacast(_clname);
}

int C_EEG_IO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void C_EEG_IO::EEGDataReady(EEG_Data * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
