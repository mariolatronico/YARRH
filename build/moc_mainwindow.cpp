/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Jul 25 21:21:30 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      49,   40,   11,   11, 0x08,
      67,   11,   11,   11, 0x28,
      78,   11,   11,   11, 0x08,
     107,  100,   11,   11, 0x08,
     149,  143,   11,   11, 0x08,
     166,   11,   11,   11, 0x08,
     195,  192,   11,   11, 0x08,
     226,   11,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     284,   11,   11,   11, 0x08,
     307,   11,   11,   11, 0x08,
     318,   11,   11,   11, 0x08,
     331,   11,   11,   11, 0x08,
     364,   11,   11,   11, 0x08,
     389,   11,   11,   11, 0x08,
     419,   11,   11,   11, 0x08,
     451,  446,   11,   11, 0x08,
     487,  479,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,
     535,   11,   11,   11, 0x08,
     560,   11,   11,   11, 0x08,
     589,  583,   11,   11, 0x08,
     615,  583,   11,   11, 0x08,
     641,   11,   11,   11, 0x08,
     680,  446,   11,   11, 0x08,
     711,   11,   11,   11, 0x08,
     748,  740,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_connectBtn_toggled(bool)\0"
    "fileName\0loadFile(QString)\0loadFile()\0"
    "on_printBtn_clicked()\0layers\0"
    "on_layerScrollBar_valueChanged(int)\0"
    "point\0moveHead(QPoint)\0on_pauseBtn_toggled(bool)\0"
    ",,\0drawTemp(double,double,double)\0"
    "updateProgress(int)\0on_t1Btn_toggled(bool)\0"
    "setTemp2(bool)\0on_hbBtn_toggled(bool)\0"
    "moveZ(int)\0updateZ(int)\0"
    "on_actionO_Programie_triggered()\0"
    "updateHeadGoToXY(QPoint)\0"
    "updateHeadPosition(QVector3D)\0"
    "on_outLine_returnPressed()\0arg1\0"
    "on_groupBox_2_toggled(bool)\0checked\0"
    "on_fanBtn_toggled(bool)\0on_extrudeBtn_clicked()\0"
    "on_retracktBtn_clicked()\0"
    "printerConnected(bool)\0value\0"
    "setTemp1FromGcode(double)\0"
    "setTemp3FromGcode(double)\0"
    "on_actionCalibrate_printer_triggered()\0"
    "on_graphGroupBox_toggled(bool)\0"
    "on_actionOptions_triggered()\0newSize\0"
    "updatadeSize(QVector3D)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_connectBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadFile(); break;
        case 3: _t->on_printBtn_clicked(); break;
        case 4: _t->on_layerScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->on_pauseBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->drawTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_t1Btn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setTemp2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_hbBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->moveZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_actionO_Programie_triggered(); break;
        case 15: _t->updateHeadGoToXY((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 16: _t->updateHeadPosition((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 17: _t->on_outLine_returnPressed(); break;
        case 18: _t->on_groupBox_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_fanBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_extrudeBtn_clicked(); break;
        case 21: _t->on_retracktBtn_clicked(); break;
        case 22: _t->printerConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setTemp1FromGcode((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->setTemp3FromGcode((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->on_actionCalibrate_printer_triggered(); break;
        case 26: _t->on_graphGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_actionOptions_triggered(); break;
        case 28: _t->updatadeSize((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
