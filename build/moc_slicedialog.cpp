/****************************************************************************
** Meta object code from reading C++ file 'slicedialog.h'
**
** Created: Wed 25. Jul 13:14:15 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../slicedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SliceDialog[] = {

 // content:
       5,       // revision
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

const QMetaObject SliceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SliceDialog,
      qt_meta_data_SliceDialog, 0 }
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
        switch (_id) {
        case 0: fileSliced((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: addObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: addObject(); break;
        case 3: updateConfigs((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: updateSlicerPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: updateOutputPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: on_addBtn_clicked(); break;
        case 7: on_sliceBtn_clicked(); break;
        case 8: slicingFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 9: updateStatus(); break;
        case 10: setOffset((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 11: setSelectcedObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: rotateObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: scaleObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: objectScaled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: objectRotated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: moveObjectX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: moveObjectY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: listItemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: on_removeBtn_clicked(); break;
        case 20: on_exportStlBtn_clicked(); break;
        case 21: on_confCombo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
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
