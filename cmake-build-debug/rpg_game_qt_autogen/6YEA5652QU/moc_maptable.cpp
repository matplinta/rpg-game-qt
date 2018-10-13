/****************************************************************************
** Meta object code from reading C++ file 'maptable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/maptable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maptable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MapTable_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapTable_t qt_meta_stringdata_MapTable = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MapTable"
QT_MOC_LITERAL(1, 9, 10), // "sendPlayer"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "Player*"
QT_MOC_LITERAL(4, 29, 14), // "sendBattleInfo"
QT_MOC_LITERAL(5, 44, 8), // "Oponent*"
QT_MOC_LITERAL(6, 53, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(7, 75, 26), // "on_inventoryButton_clicked"
QT_MOC_LITERAL(8, 102, 21) // "on_saveButton_clicked"

    },
    "MapTable\0sendPlayer\0\0Player*\0"
    "sendBattleInfo\0Oponent*\0on_exitButton_clicked\0"
    "on_inventoryButton_clicked\0"
    "on_saveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   47,    2, 0x08 /* Private */,
       7,    0,   48,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MapTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapTable *_t = static_cast<MapTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPlayer((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        case 1: _t->sendBattleInfo((*reinterpret_cast< Player*(*)>(_a[1])),(*reinterpret_cast< Oponent*(*)>(_a[2]))); break;
        case 2: _t->on_exitButton_clicked(); break;
        case 3: _t->on_inventoryButton_clicked(); break;
        case 4: _t->on_saveButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapTable::*_t)(Player * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapTable::sendPlayer)) {
                *result = 0;
            }
        }
        {
            typedef void (MapTable::*_t)(Player * , Oponent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapTable::sendBattleInfo)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MapTable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapTable.data,
      qt_meta_data_MapTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MapTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MapTable.stringdata0))
        return static_cast<void*>(const_cast< MapTable*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void MapTable::sendPlayer(Player * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapTable::sendBattleInfo(Player * _t1, Oponent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
