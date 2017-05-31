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
    QByteArrayData data[16];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PID_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PID_t qt_meta_stringdata_PID = {
    {
QT_MOC_LITERAL(0, 0, 3), // "PID"
QT_MOC_LITERAL(1, 4, 9), // "PIDSignal"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 11), // "PPlusSignal"
QT_MOC_LITERAL(4, 27, 12), // "PMinusSignal"
QT_MOC_LITERAL(5, 40, 11), // "IPlusSignal"
QT_MOC_LITERAL(6, 52, 12), // "IMinusSignal"
QT_MOC_LITERAL(7, 65, 11), // "DPlusSignal"
QT_MOC_LITERAL(8, 77, 12), // "DMinusSignal"
QT_MOC_LITERAL(9, 90, 29), // "on_pushButton_confirm_clicked"
QT_MOC_LITERAL(10, 120, 27), // "on_pushButton_PPlus_clicked"
QT_MOC_LITERAL(11, 148, 28), // "on_pushButton_PMinus_clicked"
QT_MOC_LITERAL(12, 177, 27), // "on_pushButton_IPlus_clicked"
QT_MOC_LITERAL(13, 205, 28), // "on_pushButton_IMinus_clicked"
QT_MOC_LITERAL(14, 234, 27), // "on_pushButton_DPlus_clicked"
QT_MOC_LITERAL(15, 262, 28) // "on_pushButton_DMinus_clicked"

    },
    "PID\0PIDSignal\0\0PPlusSignal\0PMinusSignal\0"
    "IPlusSignal\0IMinusSignal\0DPlusSignal\0"
    "DMinusSignal\0on_pushButton_confirm_clicked\0"
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  105,    2, 0x0a /* Public */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
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
        case 0: _t->PIDSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->PPlusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->PMinusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->IPlusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->IMinusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->DPlusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->DMinusSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_confirm_clicked(); break;
        case 8: _t->on_pushButton_PPlus_clicked(); break;
        case 9: _t->on_pushButton_PMinus_clicked(); break;
        case 10: _t->on_pushButton_IPlus_clicked(); break;
        case 11: _t->on_pushButton_IMinus_clicked(); break;
        case 12: _t->on_pushButton_DPlus_clicked(); break;
        case 13: _t->on_pushButton_DMinus_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::PIDSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::PPlusSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::PMinusSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::IPlusSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::IMinusSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::DPlusSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PID::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PID::DMinusSignal)) {
                *result = 6;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PID::PIDSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PID::PPlusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PID::PMinusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PID::IPlusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PID::IMinusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PID::DPlusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PID::DMinusSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
