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
    QByteArrayData data[17];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_allsite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_allsite_t qt_meta_stringdata_allsite = {
    {
QT_MOC_LITERAL(0, 0, 7), // "allsite"
QT_MOC_LITERAL(1, 8, 8), // "hide_now"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "change_time"
QT_MOC_LITERAL(4, 30, 7), // "refresh"
QT_MOC_LITERAL(5, 38, 22), // "on_ticket_stateChanged"
QT_MOC_LITERAL(6, 61, 4), // "arg1"
QT_MOC_LITERAL(7, 66, 24), // "on_discount_stateChanged"
QT_MOC_LITERAL(8, 91, 15), // "on_back_clicked"
QT_MOC_LITERAL(9, 107, 23), // "on_clear_o_list_clicked"
QT_MOC_LITERAL(10, 131, 21), // "on_save_order_clicked"
QT_MOC_LITERAL(11, 153, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 175, 30), // "on_sort_by_currentIndexChanged"
QT_MOC_LITERAL(13, 206, 5), // "index"
QT_MOC_LITERAL(14, 212, 17), // "on_name_s_clicked"
QT_MOC_LITERAL(15, 230, 17), // "on_area_s_clicked"
QT_MOC_LITERAL(16, 248, 23) // "on_pushButton_2_clicked"

    },
    "allsite\0hide_now\0\0change_time\0refresh\0"
    "on_ticket_stateChanged\0arg1\0"
    "on_discount_stateChanged\0on_back_clicked\0"
    "on_clear_o_list_clicked\0on_save_order_clicked\0"
    "on_pushButton_clicked\0"
    "on_sort_by_currentIndexChanged\0index\0"
    "on_name_s_clicked\0on_area_s_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_allsite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   81,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void allsite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        allsite *_t = static_cast<allsite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hide_now(); break;
        case 1: _t->change_time(); break;
        case 2: _t->refresh(); break;
        case 3: _t->on_ticket_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_discount_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_back_clicked(); break;
        case 6: _t->on_clear_o_list_clicked(); break;
        case 7: _t->on_save_order_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_sort_by_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_name_s_clicked(); break;
        case 11: _t->on_area_s_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (allsite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&allsite::hide_now)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (allsite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&allsite::change_time)) {
                *result = 1;
                return;
            }
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void allsite::hide_now()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void allsite::change_time()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
