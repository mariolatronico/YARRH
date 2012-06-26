/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue 26. Jun 12:03:26 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
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

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0deviceConnected(QextPortInfo)\0"
    "deviceDisconnected(QextPortInfo)\0"
    "connectClicked()\0writeToPort()\0line\0"
    "sendLine(QString)\0readFromPort()\0"
    "loadFile()\0status\0printObject(bool)\0"
    "homeX()\0homeY()\0homeZ()\0homeAll()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
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
        switch (_id) {
        case 0: deviceConnected((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 1: deviceDisconnected((*reinterpret_cast< const QextPortInfo(*)>(_a[1]))); break;
        case 2: connectClicked(); break;
        case 3: writeToPort(); break;
        case 4: sendLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: readFromPort(); break;
        case 6: loadFile(); break;
        case 7: printObject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: homeX(); break;
        case 9: homeY(); break;
        case 10: homeZ(); break;
        case 11: homeAll(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
