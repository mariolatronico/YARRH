/****************************************************************************
** Meta object code from reading C++ file 'printer.h'
**
** Created: Wed Jul 25 21:21:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Printer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      38,   35,    8,    8, 0x05,
      72,    8,    8,    8, 0x05,
      86,    8,    8,    8, 0x05,
     113,    8,    8,    8, 0x05,
     129,    8,    8,    8, 0x05,
     150,    8,    8,    8, 0x05,
     171,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     192,    8,    8,    8, 0x08,
     217,    8,    8,    8, 0x0a,
     244,  236,  232,    8, 0x0a,
     280,  270,  265,    8, 0x0a,
     305,    8,  265,    8, 0x0a,
     322,    8,    8,    8, 0x0a,
     330,    8,    8,    8, 0x0a,
     338,    8,    8,    8, 0x0a,
     346,    8,    8,    8, 0x0a,
     368,  356,    8,    8, 0x0a,
     397,  389,    8,    8, 0x0a,
     427,  419,    8,    8, 0x0a,
     439,    8,    8,    8, 0x0a,
     470,  457,    8,    8, 0x0a,
     501,    8,    8,    8, 0x0a,
     514,    8,    8,    8, 0x0a,
     526,    8,    8,    8, 0x0a,
     554,    8,    8,    8, 0x0a,
     571,    8,    8,    8, 0x0a,
     585,    8,    8,    8, 0x0a,
     612,  599,    8,    8, 0x0a,
     629,  599,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Printer[] = {
    "Printer\0\0write_to_console(QString)\0"
    ",,\0currentTemp(double,double,double)\0"
    "progress(int)\0currentPosition(QVector3D)\0"
    "connected(bool)\0newResponce(QString)\0"
    "settingTemp1(double)\0settingTemp3(double)\0"
    "processResponce(QString)\0readFromPort()\0"
    "int\0command\0writeToPort(QString)\0bool\0"
    "port,baud\0connectPort(QString,int)\0"
    "disconnectPort()\0homeX()\0homeY()\0"
    "homeZ()\0homeAll()\0point,speed\0"
    "moveHead(QPoint,int)\0z,speed\0"
    "moveHeadZ(double,int)\0percent\0setFan(int)\0"
    "disableSteppers()\0buffer,clear\0"
    "loadToBuffer(QStringList,bool)\0"
    "startPrint()\0stopPrint()\0"
    "setMonitorTemperature(bool)\0"
    "getTemperature()\0setTemp1(int)\0"
    "setTemp3(int)\0lenght,speed\0extrude(int,int)\0"
    "retrackt(int,int)\0"
};

void Printer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Printer *_t = static_cast<Printer *>(_o);
        switch (_id) {
        case 0: _t->write_to_console((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->currentTemp((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentPosition((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 4: _t->connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->newResponce((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->settingTemp1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->settingTemp3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->processResponce((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->readFromPort(); break;
        case 10: { int _r = _t->writeToPort((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->connectPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->disconnectPort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->homeX(); break;
        case 14: _t->homeY(); break;
        case 15: _t->homeZ(); break;
        case 16: _t->homeAll(); break;
        case 17: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->moveHeadZ((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setFan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->disableSteppers(); break;
        case 21: _t->loadToBuffer((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->startPrint(); break;
        case 23: _t->stopPrint(); break;
        case 24: _t->setMonitorTemperature((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->getTemperature(); break;
        case 26: _t->setTemp1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setTemp3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->extrude((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->retrackt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Printer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Printer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Printer,
      qt_meta_data_Printer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Printer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Printer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Printer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Printer))
        return static_cast<void*>(const_cast< Printer*>(this));
    return QObject::qt_metacast(_clname);
}

int Printer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Printer::write_to_console(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Printer::currentTemp(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Printer::progress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Printer::currentPosition(QVector3D _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Printer::connected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Printer::newResponce(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Printer::settingTemp1(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Printer::settingTemp3(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
