/****************************************************************************
** Meta object code from reading C++ file 'wirelesswindow.h'
**
** Created: Mon May 31 14:08:16 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wirelesswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wirelesswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wirelessWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      28,   15,   15,   15, 0x0a,
      43,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wirelessWindow[] = {
    "wirelessWindow\0\0clickExit()\0clickConnect()\0"
    "clickSetting()\0"
};

const QMetaObject wirelessWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_wirelessWindow,
      qt_meta_data_wirelessWindow, 0 }
};

const QMetaObject *wirelessWindow::metaObject() const
{
    return &staticMetaObject;
}

void *wirelessWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wirelessWindow))
        return static_cast<void*>(const_cast< wirelessWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int wirelessWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clickExit(); break;
        case 1: clickConnect(); break;
        case 2: clickSetting(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
