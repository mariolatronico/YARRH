/****************************************************************************
** Meta object code from reading C++ file 'aboutwindow.h'
**
** Created: Sun 8. Jul 14:03:03 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../aboutwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aboutwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AboutWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      28,   23,   12,   12, 0x08,
      62,   23,   12,   12, 0x08,
      96,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AboutWindow[] = {
    "AboutWindow\0\0openUrl()\0link\0"
    "on_label_6_linkActivated(QString)\0"
    "on_label_3_linkActivated(QString)\0"
    "showOnXY(QPoint)\0"
};

const QMetaObject AboutWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AboutWindow,
      qt_meta_data_AboutWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AboutWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AboutWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AboutWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AboutWindow))
        return static_cast<void*>(const_cast< AboutWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int AboutWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openUrl(); break;
        case 1: on_label_6_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: on_label_3_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: showOnXY((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
