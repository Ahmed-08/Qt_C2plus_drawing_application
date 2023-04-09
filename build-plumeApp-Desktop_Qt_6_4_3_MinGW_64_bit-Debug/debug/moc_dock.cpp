/****************************************************************************
** Meta object code from reading C++ file 'dock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../plumeApp/dock.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Dock_t {
    uint offsetsAndSizes[16];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Dock_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Dock_t qt_meta_stringdata_Dock = {
    {
        QT_MOC_LITERAL(0, 4),  // "Dock"
        QT_MOC_LITERAL(5, 7),  // "setThin"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 9),  // "setMiddle"
        QT_MOC_LITERAL(24, 7),  // "setBold"
        QT_MOC_LITERAL(32, 11),  // "setTriangle"
        QT_MOC_LITERAL(44, 12),  // "setRectangle"
        QT_MOC_LITERAL(57, 8)   // "setPlume"
    },
    "Dock",
    "setThin",
    "",
    "setMiddle",
    "setBold",
    "setTriangle",
    "setRectangle",
    "setPlume"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Dock[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_Dock.offsetsAndSizes,
    qt_meta_data_Dock,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Dock_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dock, std::true_type>,
        // method 'setThin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMiddle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBold'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTriangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRectangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPlume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setThin(); break;
        case 1: _t->setMiddle(); break;
        case 2: _t->setBold(); break;
        case 3: _t->setTriangle(); break;
        case 4: _t->setRectangle(); break;
        case 5: _t->setPlume(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Dock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dock.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Dock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
