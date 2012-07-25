/****************************************************************************
** Meta object code from reading C++ file 'stlview.h'
**
** Created: Wed Jul 25 21:21:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stlview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stlview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StlView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      28,    8,    8,    8, 0x05,
      50,    8,    8,    8, 0x05,
      69,    8,    8,    8, 0x05,
      91,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,    8,    8,    8, 0x0a,
     145,    8,  134,    8, 0x0a,
     164,    8,    8,    8, 0x0a,
     188,  186,    8,    8, 0x0a,
     217,  186,    8,    8, 0x0a,
     245,  186,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StlView[] = {
    "StlView\0\0objectPicked(bool)\0"
    "selectedRotation(int)\0selectedScale(int)\0"
    "selectedCors(QPointF)\0selectedCol(QString)\0"
    "selectObject(QString)\0StlObject*\0"
    "getObject(QString)\0removeObject(QString)\0"
    ",\0rotateObject(QString,double)\0"
    "scaleObject(QString,double)\0"
    "moveObject(QString,QPointF)\0"
};

void StlView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StlView *_t = static_cast<StlView *>(_o);
        switch (_id) {
        case 0: _t->objectPicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectedRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectedScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->selectedCors((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->selectedCol((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->selectObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { StlObject* _r = _t->getObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< StlObject**>(_a[0]) = _r; }  break;
        case 7: _t->removeObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->rotateObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->scaleObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->moveObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StlView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StlView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_StlView,
      qt_meta_data_StlView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StlView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StlView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StlView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StlView))
        return static_cast<void*>(const_cast< StlView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int StlView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
void StlView::objectPicked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StlView::selectedRotation(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StlView::selectedScale(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StlView::selectedCors(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StlView::selectedCol(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
