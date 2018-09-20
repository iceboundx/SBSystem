/****************************************************************************
** Meta object code from reading C++ file 'addsite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SBSystemBackup/addsite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addsite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addsite_t {
    QByteArrayData data[20];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addsite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addsite_t qt_meta_stringdata_addsite = {
    {
QT_MOC_LITERAL(0, 0, 7), // "addsite"
QT_MOC_LITERAL(1, 8, 8), // "now_hide"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "change_info"
QT_MOC_LITERAL(4, 30, 7), // "get_lim"
QT_MOC_LITERAL(5, 38, 5), // "t_lim"
QT_MOC_LITERAL(6, 44, 3), // "lim"
QT_MOC_LITERAL(7, 48, 15), // "on_save_clicked"
QT_MOC_LITERAL(8, 64, 20), // "on_saveprice_clicked"
QT_MOC_LITERAL(9, 85, 18), // "on_publish_clicked"
QT_MOC_LITERAL(10, 104, 22), // "on_profile_textChanged"
QT_MOC_LITERAL(11, 127, 20), // "on_timelimit_clicked"
QT_MOC_LITERAL(12, 148, 17), // "on_id_textChanged"
QT_MOC_LITERAL(13, 166, 4), // "arg1"
QT_MOC_LITERAL(14, 171, 29), // "on_date_begin_userDateChanged"
QT_MOC_LITERAL(15, 201, 4), // "date"
QT_MOC_LITERAL(16, 206, 27), // "on_date_end_userDateChanged"
QT_MOC_LITERAL(17, 234, 31), // "on_price_list_itemDoubleClicked"
QT_MOC_LITERAL(18, 266, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(19, 283, 4) // "item"

    },
    "addsite\0now_hide\0\0change_info\0get_lim\0"
    "t_lim\0lim\0on_save_clicked\0"
    "on_saveprice_clicked\0on_publish_clicked\0"
    "on_profile_textChanged\0on_timelimit_clicked\0"
    "on_id_textChanged\0arg1\0"
    "on_date_begin_userDateChanged\0date\0"
    "on_date_end_userDateChanged\0"
    "on_price_list_itemDoubleClicked\0"
    "QListWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addsite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      16,    1,   90,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QDate,   15,
    QMetaType::Void, QMetaType::QDate,   15,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void addsite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addsite *_t = static_cast<addsite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->now_hide(); break;
        case 1: _t->change_info(); break;
        case 2: _t->get_lim((*reinterpret_cast< t_lim(*)>(_a[1]))); break;
        case 3: _t->on_save_clicked(); break;
        case 4: _t->on_saveprice_clicked(); break;
        case 5: _t->on_publish_clicked(); break;
        case 6: _t->on_profile_textChanged(); break;
        case 7: _t->on_timelimit_clicked(); break;
        case 8: _t->on_id_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_date_begin_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 10: _t->on_date_end_userDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 11: _t->on_price_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (addsite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addsite::now_hide)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (addsite::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addsite::change_info)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addsite::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_addsite.data,
      qt_meta_data_addsite,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addsite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addsite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addsite.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int addsite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void addsite::now_hide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void addsite::change_info()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
