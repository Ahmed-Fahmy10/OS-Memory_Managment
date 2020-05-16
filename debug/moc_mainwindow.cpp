/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Projects/OS Project/FrontEnd/OS_Memory_Allocation-master/Project GUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_add_hole_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 22), // "on_add_process_clicked"
QT_MOC_LITERAL(4, 55, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 77, 21), // "on_deallocate_clicked"
QT_MOC_LITERAL(6, 99, 19), // "on_allocate_clicked"
QT_MOC_LITERAL(7, 119, 22), // "on_add_segment_clicked"
QT_MOC_LITERAL(8, 142, 22), // "on_finishHoles_clicked"
QT_MOC_LITERAL(9, 165, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(10, 189, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(11, 212, 21), // "on_drawButton_clicked"
QT_MOC_LITERAL(12, 234, 24), // "on_CompactMemory_clicked"
QT_MOC_LITERAL(13, 259, 33), // "on_processTree_currentItemCha..."
QT_MOC_LITERAL(14, 293, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 310, 7), // "current"
QT_MOC_LITERAL(16, 318, 8) // "previous"

    },
    "MainWindow\0on_add_hole_clicked\0\0"
    "on_add_process_clicked\0on_pushButton_clicked\0"
    "on_deallocate_clicked\0on_allocate_clicked\0"
    "on_add_segment_clicked\0on_finishHoles_clicked\0"
    "on_actionQuit_triggered\0on_actionNew_triggered\0"
    "on_drawButton_clicked\0on_CompactMemory_clicked\0"
    "on_processTree_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    2,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_hole_clicked(); break;
        case 1: _t->on_add_process_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_deallocate_clicked(); break;
        case 4: _t->on_allocate_clicked(); break;
        case 5: _t->on_add_segment_clicked(); break;
        case 6: _t->on_finishHoles_clicked(); break;
        case 7: _t->on_actionQuit_triggered(); break;
        case 8: _t->on_actionNew_triggered(); break;
        case 9: _t->on_drawButton_clicked(); break;
        case 10: _t->on_CompactMemory_clicked(); break;
        case 11: _t->on_processTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
