/****************************************************************************
** Meta object code from reading C++ file 'optiondialog.h'
**
** Created: Wed Jul 25 21:21:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../optiondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      41,   13,   13,   13, 0x05,
      68,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   87,   13,   13, 0x0a,
     113,   87,   13,   13, 0x0a,
     135,   87,   13,   13, 0x0a,
     162,  157,   13,   13, 0x0a,
     181,   13,   13,   13, 0x08,
     203,   13,   13,   13, 0x08,
     229,   13,   13,   13, 0x08,
     255,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionDialog[] = {
    "OptionDialog\0\0slicerPathChanged(QString)\0"
    "outputPathChanged(QString)\0"
    "newSize(QVector3D)\0dir\0setSlicerDir(QString)\0"
    "setConfigDir(QString)\0setOutputDir(QString)\0"
    "size\0setSize(QVector3D)\0on_closeBtn_clicked()\0"
    "on_slicerDirBtn_clicked()\0"
    "on_configDirBtn_clicked()\0"
    "on_outputDirBtn_clicked()\0"
};

void OptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionDialog *_t = static_cast<OptionDialog *>(_o);
        switch (_id) {
        case 0: _t->slicerPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->outputPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newSize((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 3: _t->setSlicerDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setConfigDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setOutputDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setSize((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 7: _t->on_closeBtn_clicked(); break;
        case 8: _t->on_slicerDirBtn_clicked(); break;
        case 9: _t->on_configDirBtn_clicked(); break;
        case 10: _t->on_outputDirBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionDialog,
      qt_meta_data_OptionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionDialog))
        return static_cast<void*>(const_cast< OptionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void OptionDialog::slicerPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionDialog::outputPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OptionDialog::newSize(QVector3D _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
