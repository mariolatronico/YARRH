/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu 28. Jun 21:45:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      75,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,
     111,  106,   11,   11, 0x08,
     129,   11,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,
     162,  155,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     188,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     221,  214,   11,   11, 0x08,
     242,  236,   11,   11, 0x08,
     267,  259,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0deviceConnected(QextPortInfo)\0"
    "deviceDisconnected(QextPortInfo)\0"
    "connectClicked()\0writeToPort()\0line\0"
    "sendLine(QString)\0readFromPort()\0"
    "loadFile()\0status\0printObject(bool)\0"
    "homeX()\0homeY()\0homeZ()\0homeAll()\0"
    "layers\0setLayers(int)\0point\0"
    "moveHead(QPoint)\0percent\0setFan(int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->deviceConnected((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 1: _t->deviceDisconnected((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 2: _t->connectClicked(); break;
        case 3: _t->writeToPort(); break;
        case 4: _t->sendLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->readFromPort(); break;
        case 6: _t->loadFile(); break;
        case 7: _t->printObject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->homeX(); break;
        case 9: _t->homeY(); break;
        case 10: _t->homeZ(); break;
        case 11: _t->homeAll(); break;
        case 12: _t->setLayers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 14: _t->setFan((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
