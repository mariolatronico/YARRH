/****************************************************************************
** Meta object code from reading C++ file 'gcodeobject.h'
**
** Created: Sat 7. Jul 07:12:43 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gcodeobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcodeobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GCodeObject[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GCodeObject[] = {
    "GCodeObject\0"
};

const QMetaObject GCodeObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GCodeObject,
      qt_meta_data_GCodeObject, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GCodeObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GCodeObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GCodeObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GCodeObject))
        return static_cast<void*>(const_cast< GCodeObject*>(this));
    return QObject::qt_metacast(_clname);
}

int GCodeObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
