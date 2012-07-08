/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun 8. Jul 14:03:01 2012
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
      20,   14, // methods
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
     232,   11,   11,   11, 0x08,
     247,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     277,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     334,   11,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     389,   11,   11,   11, 0x08,
     421,  416,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0deviceConnected(QextPortInfo)\0"
    "deviceDisconnected(QextPortInfo)\0"
    "connectClicked()\0loadFile()\0startPrint()\0"
    "layers\0setLayers(int)\0point\0"
    "moveHead(QPoint)\0pausePrint(bool)\0,,\0"
    "drawTemp(double,double,double)\0"
    "updateProgress(int)\0setTemp1(bool)\0"
    "setTemp2(bool)\0setTemp3(bool)\0moveZ(int)\0"
    "updateZ(int)\0on_actionO_Programie_triggered()\0"
    "updateHeadGoToXY(QPoint)\0"
    "updateHeadPosition(QVector3D)\0"
    "on_outLine_returnPressed()\0arg1\0"
    "on_groupBox_2_toggled(bool)\0"
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
        case 3: loadFile(); break;
        case 4: startPrint(); break;
        case 5: setLayers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: moveHead((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: pausePrint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: drawTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: setTemp1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: setTemp2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: setTemp3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: moveZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: updateZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: on_actionO_Programie_triggered(); break;
        case 16: updateHeadGoToXY((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 17: updateHeadPosition((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 18: on_outLine_returnPressed(); break;
        case 19: on_groupBox_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
