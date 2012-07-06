/****************************************************************************
** Meta object code from reading C++ file 'portthread.h'
**
** Created: Fri 6. Jul 22:06:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../portthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_portThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   11,   11,   11, 0x0a,
      53,   11,   11,   11, 0x0a,
      61,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      77,   11,   11,   11, 0x0a,
      99,   87,   11,   11, 0x0a,
     128,  120,   11,   11, 0x0a,
     147,  140,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,
     186,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_portThread[] = {
    "portThread\0\0write_to_console(QString)\0"
    "readFromPort()\0homeX()\0homeY()\0homeZ()\0"
    "homeAll()\0point,speed\0moveHead(QPoint,int)\0"
    "percent\0setFan(int)\0buffer\0"
    "loadToBuffer(QStringList)\0startPrint()\0"
    "stopPrint()\0"
};

void portThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        portThread *_t = static_cast<portThread *>(_o);
        switch (_id) {
        case 0: _t->write_to_console((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->readFromPort(); break;
        case 2: _t->homeX(); break;
        case 3: _t->homeY(); break;
        case 4: _t->homeZ(); break;
        case 5: _t->homeAll(); break;
        case 6: _t->moveHead((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setFan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->loadToBuffer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 9: _t->startPrint(); break;
        case 10: _t->stopPrint(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData portThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject portThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_portThread,
      qt_meta_data_portThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &portThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *portThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *portThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_portThread))
        return static_cast<void*>(const_cast< portThread*>(this));
    return QObject::qt_metacast(_clname);
}

int portThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void portThread::write_to_console(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
