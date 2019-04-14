/****************************************************************************
** Meta object code from reading C++ file 'inventorywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/inventorywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inventorywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InventoryWindow_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InventoryWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InventoryWindow_t qt_meta_stringdata_InventoryWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "InventoryWindow"
QT_MOC_LITERAL(1, 16, 17), // "sendChangedPlayer"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "Player*"
QT_MOC_LITERAL(4, 43, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(5, 66, 20), // "on_useButton_clicked"
QT_MOC_LITERAL(6, 87, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(7, 113, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 130, 4), // "item"
QT_MOC_LITERAL(9, 135, 13), // "receivePlayer"
QT_MOC_LITERAL(10, 149, 5) // "gracz"

    },
    "InventoryWindow\0sendChangedPlayer\0\0"
    "Player*\0on_closeButton_clicked\0"
    "on_useButton_clicked\0on_listWidget_itemClicked\0"
    "QListWidgetItem*\0item\0receivePlayer\0"
    "gracz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InventoryWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,   10,

       0        // eod
};

void InventoryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InventoryWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendChangedPlayer((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        case 1: _t->on_closeButton_clicked(); break;
        case 2: _t->on_useButton_clicked(); break;
        case 3: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->receivePlayer((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InventoryWindow::*)(Player * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InventoryWindow::sendChangedPlayer)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InventoryWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_InventoryWindow.data,
    qt_meta_data_InventoryWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InventoryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InventoryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InventoryWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InventoryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void InventoryWindow::sendChangedPlayer(Player * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
