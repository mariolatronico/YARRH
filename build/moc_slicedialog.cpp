/****************************************************************************
** Meta object code from reading C++ file 'slicedialog.h'
**
** Created: Wed Jul 25 21:21:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../slicedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SliceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   33,   12,   12, 0x0a,
      57,   12,   12,   12, 0x2a,
      73,   69,   12,   12, 0x0a,
     101,   96,   12,   12, 0x0a,
     127,   96,   12,   12, 0x0a,
     153,   12,   12,   12, 0x08,
     173,   12,   12,   12, 0x08,
     215,  195,   12,   12, 0x08,
     257,   12,   12,   12, 0x08,
     272,   12,   12,   12, 0x08,
     291,   12,   12,   12, 0x08,
     319,   12,   12,   12, 0x08,
     337,   12,   12,   12, 0x08,
     354,   12,   12,   12, 0x08,
     372,   12,   12,   12, 0x08,
     391,   12,   12,   12, 0x08,
     411,   12,   12,   12, 0x08,
     431,   12,   12,   12, 0x08,
     453,   12,   12,   12, 0x08,
     476,   12,   12,   12, 0x08,
     507,  502,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SliceDialog[] = {
    "SliceDialog\0\0fileSliced(QString)\0file\0"
    "addObject(QString)\0addObject()\0dir\0"
    "updateConfigs(QString)\0path\0"
    "updateSlicerPath(QString)\0"
    "updateOutputPath(QString)\0on_addBtn_clicked()\0"
    "on_sliceBtn_clicked()\0exitCode,exitStatus\0"
    "slicingFinished(int,QProcess::ExitStatus)\0"
    "updateStatus()\0setOffset(QPointF)\0"
    "setSelectcedObject(QString)\0"
    "rotateObject(int)\0scaleObject(int)\0"
    "objectScaled(int)\0objectRotated(int)\0"
    "moveObjectX(double)\0moveObjectY(double)\0"
    "listItemSelected(int)\0on_removeBtn_clicked()\0"
    "on_exportStlBtn_clicked()\0arg1\0"
    "on_confCombo_currentIndexChanged(QString)\0"
};

void SliceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SliceDialog *_t = static_cast<SliceDialog *>(_o);
        switch (_id) {
        case 0: _t->fileSliced((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addObject(); break;
        case 3: _t->updateConfigs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateSlicerPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->updateOutputPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_addBtn_clicked(); break;
        case 7: _t->on_sliceBtn_clicked(); break;
        case 8: _t->slicingFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 9: _t->updateStatus(); break;
        case 10: _t->setOffset((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 11: _t->setSelectcedObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->rotateObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->scaleObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->objectScaled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->objectRotated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->moveObjectX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->moveObjectY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->listItemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_removeBtn_clicked(); break;
        case 20: _t->on_exportStlBtn_clicked(); break;
        case 21: _t->on_confCombo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SliceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SliceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SliceDialog,
      qt_meta_data_SliceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SliceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SliceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SliceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SliceDialog))
        return static_cast<void*>(const_cast< SliceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SliceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void SliceDialog::fileSliced(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
