/****************************************************************************
** Meta object code from reading C++ file 'ray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Rack_Ray/ray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ray_t {
    QByteArrayData data[15];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ray_t qt_meta_stringdata_Ray = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Ray"
QT_MOC_LITERAL(1, 4, 18), // "on_Btn_Add_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "on_Btn_Save_clicked"
QT_MOC_LITERAL(4, 44, 18), // "on_Btn_Del_clicked"
QT_MOC_LITERAL(5, 63, 21), // "on_Tab_Prod_activated"
QT_MOC_LITERAL(6, 85, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 97, 5), // "index"
QT_MOC_LITERAL(8, 103, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 127, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 151, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(11, 175, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 199, 21), // "on_Serach_Btn_clicked"
QT_MOC_LITERAL(13, 221, 20), // "on_Btn_Print_clicked"
QT_MOC_LITERAL(14, 242, 23) // "on_pushButton_6_clicked"

    },
    "Ray\0on_Btn_Add_clicked\0\0on_Btn_Save_clicked\0"
    "on_Btn_Del_clicked\0on_Tab_Prod_activated\0"
    "QModelIndex\0index\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_2_clicked\0on_Serach_Btn_clicked\0"
    "on_Btn_Print_clicked\0on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ray *_t = static_cast<Ray *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Btn_Add_clicked(); break;
        case 1: _t->on_Btn_Save_clicked(); break;
        case 2: _t->on_Btn_Del_clicked(); break;
        case 3: _t->on_Tab_Prod_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_Serach_Btn_clicked(); break;
        case 9: _t->on_Btn_Print_clicked(); break;
        case 10: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ray::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Ray.data,
      qt_meta_data_Ray,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ray.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Ray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
