/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat 7. Jul 01:13:40 2012
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
      10,   14, // methods
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
     103,   11,   11,   11, 0x08,
     123,  116,   11,   11, 0x08,
     144,  138,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,
     181,  178,   11,   11, 0x08,
     212,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0deviceConnected(QextPortInfo)\0"
    "deviceDisconnected(QextPortInfo)\0"
    "connectClicked()\0loadFile()\0startPrint()\0"
    "layers\0setLayers(int)\0point\0"
    "moveHead(QPoint)\0pausePrint(bool)\0,,\0"
    "drawTemp(double,double,double)\0"
    "updateProgress(int)\0"
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
        case 3: _t->loadFile(); break;
        case 4: _t->startPrint(); break;
        case 5: _t->setLayers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->pausePrint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->drawTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
