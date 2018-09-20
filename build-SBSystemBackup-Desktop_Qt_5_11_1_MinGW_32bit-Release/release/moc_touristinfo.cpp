/****************************************************************************
** Meta object code from reading C++ file 'touristinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SBSystemBackup/touristinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'touristinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_touristinfo_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_touristinfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_touristinfo_t qt_meta_stringdata_touristinfo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "touristinfo"
QT_MOC_LITERAL(1, 12, 8), // "hide_now"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 25), // "on_changePasswd_2_clicked"
QT_MOC_LITERAL(4, 48, 22), // "on_changeTel_2_clicked"
QT_MOC_LITERAL(5, 71, 15), // "on_save_clicked"
QT_MOC_LITERAL(6, 87, 24) // "on_changeTel_textChanged"

    },
    "touristinfo\0hide_now\0\0on_changePasswd_2_clicked\0"
    "on_changeTel_2_clicked\0on_save_clicked\0"
    "on_changeTel_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_touristinfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void touristinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        touristinfo *_t = static_cast<touristinfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hide_now(); break;
        case 1: _t->on_changePasswd_2_clicked(); break;
        case 2: _t->on_changeTel_2_clicked(); break;
        case 3: _t->on_save_clicked(); break;
        case 4: _t->on_changeTel_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (touristinfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&touristinfo::hide_now)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject touristinfo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_touristinfo.data,
      qt_meta_data_touristinfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *touristinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *touristinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_touristinfo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int touristinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void touristinfo::hide_now()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
