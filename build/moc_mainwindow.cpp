/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed 25. Jul 13:14:13 2012
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
        case 0: on_connectBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: loadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: loadFile(); break;
        case 3: on_printBtn_clicked(); break;
        case 4: on_layerScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: moveHead((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: on_pauseBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: drawTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_t1Btn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: setTemp2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: on_hbBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: moveZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: updateZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: on_actionO_Programie_triggered(); break;
        case 15: updateHeadGoToXY((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 16: updateHeadPosition((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 17: on_outLine_returnPressed(); break;
        case 18: on_groupBox_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: on_fanBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: on_extrudeBtn_clicked(); break;
        case 21: on_retracktBtn_clicked(); break;
        case 22: printerConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: setTemp1FromGcode((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: setTemp3FromGcode((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: on_actionCalibrate_printer_triggered(); break;
        case 26: on_graphGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: on_actionOptions_triggered(); break;
        case 28: updatadeSize((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
