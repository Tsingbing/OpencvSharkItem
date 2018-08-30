/****************************************************************************
** Meta object code from reading C++ file 'opencvsharkitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../opencvsharkitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencvsharkitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpencvSharkItem_t {
    QByteArrayData data[15];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpencvSharkItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpencvSharkItem_t qt_meta_stringdata_OpencvSharkItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OpencvSharkItem"
QT_MOC_LITERAL(1, 16, 15), // "runngingChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "curFrameChanged"
QT_MOC_LITERAL(4, 49, 11), // "errorComing"
QT_MOC_LITERAL(5, 61, 16), // "imageFlagChanged"
QT_MOC_LITERAL(6, 78, 15), // "showFlagChanged"
QT_MOC_LITERAL(7, 94, 9), // "slotError"
QT_MOC_LITERAL(8, 104, 11), // "setCurFrame"
QT_MOC_LITERAL(9, 116, 7), // "QImage&"
QT_MOC_LITERAL(10, 124, 7), // "running"
QT_MOC_LITERAL(11, 132, 8), // "curFrame"
QT_MOC_LITERAL(12, 141, 5), // "error"
QT_MOC_LITERAL(13, 147, 9), // "imageFlag"
QT_MOC_LITERAL(14, 157, 8) // "showFlag"

    },
    "OpencvSharkItem\0runngingChanged\0\0"
    "curFrameChanged\0errorComing\0"
    "imageFlagChanged\0showFlagChanged\0"
    "slotError\0setCurFrame\0QImage&\0running\0"
    "curFrame\0error\0imageFlag\0showFlag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpencvSharkItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495903,
      11, QMetaType::QImage, 0x00495903,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::Int, 0x00495903,
      14, QMetaType::Int, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void OpencvSharkItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpencvSharkItem *_t = static_cast<OpencvSharkItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runngingChanged(); break;
        case 1: _t->curFrameChanged(); break;
        case 2: _t->errorComing(); break;
        case 3: _t->imageFlagChanged(); break;
        case 4: _t->showFlagChanged(); break;
        case 5: _t->slotError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCurFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpencvSharkItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpencvSharkItem::runngingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpencvSharkItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpencvSharkItem::curFrameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpencvSharkItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpencvSharkItem::errorComing)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OpencvSharkItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpencvSharkItem::imageFlagChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OpencvSharkItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpencvSharkItem::showFlagChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OpencvSharkItem *_t = static_cast<OpencvSharkItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->curFrame(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->error(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->imageFlag(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->showFlag(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OpencvSharkItem *_t = static_cast<OpencvSharkItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCurFrame(*reinterpret_cast< QImage*>(_v)); break;
        case 3: _t->setImageFlag(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setShowFlag(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject OpencvSharkItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_OpencvSharkItem.data,
      qt_meta_data_OpencvSharkItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpencvSharkItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpencvSharkItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpencvSharkItem.stringdata0))
        return static_cast<void*>(const_cast< OpencvSharkItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int OpencvSharkItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OpencvSharkItem::runngingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OpencvSharkItem::curFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OpencvSharkItem::errorComing()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OpencvSharkItem::imageFlagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OpencvSharkItem::showFlagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
