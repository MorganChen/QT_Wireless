/****************************************************************************
** Meta object code from reading C++ file 'settingwlan.h'
**
** Created: Mon May 31 13:42:07 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingwlan.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingwlan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_settingWLAN[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      21,   12,   12,   12, 0x0a,
      30,   12,   12,   12, 0x0a,
      35,   12,   12,   12, 0x0a,
      49,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_settingWLAN[] = {
    "settingWLAN\0\0apply()\0cancel()\0ok()\0"
    "checkstatic()\0keyboard()\0"
};

const QMetaObject settingWLAN::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_settingWLAN,
      qt_meta_data_settingWLAN, 0 }
};

const QMetaObject *settingWLAN::metaObject() const
{
    return &staticMetaObject;
}

void *settingWLAN::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_settingWLAN))
        return static_cast<void*>(const_cast< settingWLAN*>(this));
    return QDialog::qt_metacast(_clname);
}

int settingWLAN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: apply(); break;
        case 1: cancel(); break;
        case 2: ok(); break;
        case 3: checkstatic(); break;
        case 4: keyboard(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
