/****************************************************************************
** Meta object code from reading C++ file 'headcontrol.h'
**
** Created: Wed Jul 25 21:21:43 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../headcontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HeadControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      29,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   12,   12,   12, 0x0a,
      62,   12,   12,   12, 0x0a,
      87,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HeadControl[] = {
    "HeadControl\0\0clicked(QPoint)\0"
    "hovered(QPoint)\0hidePoints(bool)\0"
    "addPrintedPoint(QPointF)\0resetLayer()\0"
};

void HeadControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HeadControl *_t = static_cast<HeadControl *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->hidePoints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addPrintedPoint((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->resetLayer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HeadControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HeadControl::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_HeadControl,
      qt_meta_data_HeadControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HeadControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HeadControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HeadControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HeadControl))
        return static_cast<void*>(const_cast< HeadControl*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int HeadControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void HeadControl::clicked(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HeadControl::hovered(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
