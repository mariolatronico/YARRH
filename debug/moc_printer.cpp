/****************************************************************************
** Meta object code from reading C++ file 'printer.h'
**
** Created: Sat 7. Jul 02:56:09 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Printer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      38,   35,    8,    8, 0x05,
      72,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,    8,    8,    8, 0x0a,
     116,  106,  101,    8, 0x0a,
     141,    8,    8,    8, 0x0a,
     149,    8,    8,    8, 0x0a,
     157,    8,    8,    8, 0x0a,
     165,    8,    8,    8, 0x0a,
     187,  175,    8,    8, 0x0a,
     216,  208,    8,    8, 0x0a,
     228,    8,    8,    8, 0x0a,
     253,  246,    8,    8, 0x0a,
     279,    8,    8,    8, 0x0a,
     292,    8,    8,    8, 0x0a,
     304,    8,    8,    8, 0x0a,
     332,    8,    8,    8, 0x0a,
     349,    8,    8,    8, 0x0a,
     363,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Printer[] = {
    "Printer\0\0write_to_console(QString)\0"
    ",,\0currentTemp(double,double,double)\0"
    "progress(int)\0readFromPort()\0bool\0"
    "port,baud\0connectPort(QString,int)\0"
    "homeX()\0homeY()\0homeZ()\0homeAll()\0"
    "point,speed\0moveHead(QPoint,int)\0"
    "percent\0setFan(int)\0disableSteppers()\0"
    "buffer\0loadToBuffer(QStringList)\0"
    "startPrint()\0stopPrint()\0"
    "setMonitorTemperature(bool)\0"
    "getTemperature()\0setTemp1(int)\0"
    "setTemp3(int)\0"
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
        case 3: _t->readFromPort(); break;
        case 4: { bool _r = _t->connectPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->homeX(); break;
        case 6: _t->homeY(); break;
        case 7: _t->homeZ(); break;
        case 8: _t->homeAll(); break;
        case 9: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setFan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->disableSteppers(); break;
        case 12: _t->loadToBuffer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 13: _t->startPrint(); break;
        case 14: _t->stopPrint(); break;
        case 15: _t->setMonitorTemperature((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->getTemperature(); break;
        case 17: _t->setTemp1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setTemp3((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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
QT_END_MOC_NAMESPACE
