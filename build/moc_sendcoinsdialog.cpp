/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendCoinsDialog_t {
    QByteArrayData data[16];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SendCoinsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SendCoinsDialog_t qt_meta_stringdata_SendCoinsDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 5),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 6),
QT_MOC_LITERAL(4, 30, 6),
QT_MOC_LITERAL(5, 37, 8),
QT_MOC_LITERAL(6, 46, 15),
QT_MOC_LITERAL(7, 62, 19),
QT_MOC_LITERAL(8, 82, 10),
QT_MOC_LITERAL(9, 93, 7),
QT_MOC_LITERAL(10, 101, 18),
QT_MOC_LITERAL(11, 120, 15),
QT_MOC_LITERAL(12, 136, 21),
QT_MOC_LITERAL(13, 158, 11),
QT_MOC_LITERAL(14, 170, 5),
QT_MOC_LITERAL(15, 176, 17)
    },
    "SendCoinsDialog\0clear\0\0reject\0accept\0"
    "addEntry\0SendCoinsEntry*\0updateRemoveEnabled\0"
    "setBalance\0balance\0unconfirmedBalance\0"
    "immatureBalance\0on_sendButton_clicked\0"
    "removeEntry\0entry\0updateDisplayUnit\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendCoinsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a,
       3,    0,   60,    2, 0x0a,
       4,    0,   61,    2, 0x0a,
       5,    0,   62,    2, 0x0a,
       7,    0,   63,    2, 0x0a,
       8,    3,   64,    2, 0x0a,
      12,    0,   71,    2, 0x08,
      13,    1,   72,    2, 0x08,
      15,    0,   75,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   14,
    QMetaType::Void,

       0        // eod
};

void SendCoinsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendCoinsDialog *_t = static_cast<SendCoinsDialog *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reject(); break;
        case 2: _t->accept(); break;
        case 3: { SendCoinsEntry* _r = _t->addEntry();
            if (_a[0]) *reinterpret_cast< SendCoinsEntry**>(_a[0]) = _r; }  break;
        case 4: _t->updateRemoveEnabled(); break;
        case 5: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 6: _t->on_sendButton_clicked(); break;
        case 7: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 8: _t->updateDisplayUnit(); break;
        default: ;
        }
    }
}

const QMetaObject SendCoinsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendCoinsDialog.data,
      qt_meta_data_SendCoinsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SendCoinsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendCoinsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsDialog.stringdata))
        return static_cast<void*>(const_cast< SendCoinsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendCoinsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
