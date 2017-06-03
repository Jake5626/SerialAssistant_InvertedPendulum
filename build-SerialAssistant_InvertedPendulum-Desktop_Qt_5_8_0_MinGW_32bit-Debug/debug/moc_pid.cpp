/****************************************************************************
** Meta object code from reading C++ file 'pid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PID_t {
    QByteArrayData data[14];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PID_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PID_t qt_meta_stringdata_PID = {
    {
QT_MOC_LITERAL(0, 0, 3), // "PID"
QT_MOC_LITERAL(1, 4, 11), // "PPlusSignal"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "PMinusSignal"
QT_MOC_LITERAL(4, 30, 11), // "IPlusSignal"
QT_MOC_LITERAL(5, 42, 12), // "IMinusSignal"
QT_MOC_LITERAL(6, 55, 11), // "DPlusSignal"
QT_MOC_LITERAL(7, 67, 12), // "DMinusSignal"
QT_MOC_LITERAL(8, 80, 27), // "on_pushButton_PPlus_clicked"
QT_MOC_LITERAL(9, 108, 28), // "on_pushButton_PMinus_clicked"
QT_MOC_LITERAL(10, 137, 27), // "on_pushButton_IPlus_clicked"
QT_MOC_LITERAL(11, 165, 28), // "on_pushButton_IMinus_clicked"
QT_MOC_LITERAL(12, 194, 27), // "on_pushButton_DPlus_clicked"
QT_MOC_LITERAL(13, 222, 28) // "on_pushButton_DMinus_clicked"

    },
    "PID\0PPlusSignal\0\0PMinusSignal\0IPlusSignal\0"
    "IMinusSignal\0DPlusSignal\0DMinusSignal\0"
    "on_pushButton_PPlus_clicked\0"
    "on_pushButton_PMinus_clicked\0"
    "on_pushButton_IPlus_clicked\0"
    "on_pushButton_IMinus_clicked\0"
    "on_pushButton_DPlus_clicked\0"
    "on_pushButton_DMinus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PID[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       7,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PID::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PID *_t = static_cast<PID *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PPlusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->PMinusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->IPlusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->IMinusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->DPlusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->DMinusSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_PPlus_clicked(); break;
        case 7: _t->on_pushButton_PMinus_clicked(); break;
        case 8: _t->on_pushButton_IPlus_clicked(); break;
        case 9: _t->on_pushButton_IMinus_clicked(); break;
        case 10: _t->on_pushButton_DPlus_clicked(); break;
        case 11: _t->on_pushButton_DMinus_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::PPlusSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::PMinusSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::IPlusSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::IMinusSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::DPlusSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PID::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::DMinusSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject PID::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PID.data,
      qt_meta_data_PID,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PID::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PID::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PID.stringdata0))
        return static_cast<void*>(const_cast< PID*>(this));
    return QWidget::qt_metacast(_clname);
}

int PID::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PID::PPlusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PID::PMinusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PID::IPlusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PID::IMinusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PID::DPlusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PID::DMinusSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
