/****************************************************************************
** Meta object code from reading C++ file 'allsite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SBSystemBackup/allsite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allsite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_allsite_t {
    QByteArrayData data[11];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_allsite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_allsite_t qt_meta_stringdata_allsite = {
    {
QT_MOC_LITERAL(0, 0, 7), // "allsite"
QT_MOC_LITERAL(1, 8, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 52, 4), // "item"
QT_MOC_LITERAL(5, 57, 22), // "on_ticket_stateChanged"
QT_MOC_LITERAL(6, 80, 4), // "arg1"
QT_MOC_LITERAL(7, 85, 24), // "on_discount_stateChanged"
QT_MOC_LITERAL(8, 110, 15), // "on_back_clicked"
QT_MOC_LITERAL(9, 126, 19), // "on_list_itemClicked"
QT_MOC_LITERAL(10, 146, 17) // "on_seeall_clicked"

    },
    "allsite\0on_listWidget_itemClicked\0\0"
    "QListWidgetItem*\0item\0on_ticket_stateChanged\0"
    "arg1\0on_discount_stateChanged\0"
    "on_back_clicked\0on_list_itemClicked\0"
    "on_seeall_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_allsite[] = {

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
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void allsite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        allsite *_t = static_cast<allsite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        //case 0: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_ticket_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_discount_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_back_clicked(); break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject allsite::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_allsite.data,
      qt_meta_data_allsite,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *allsite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *allsite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_allsite.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int allsite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
