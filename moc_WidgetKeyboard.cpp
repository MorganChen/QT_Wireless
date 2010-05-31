/****************************************************************************
** Meta object code from reading C++ file 'WidgetKeyboard.h'
**
** Created: Mon May 31 14:13:24 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "WidgetKeyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetKeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetKeyboard[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x08,
      48,   40,   15,   15, 0x08,
      73,   40,   15,   15, 0x08,
     103,   40,   15,   15, 0x08,
     134,   40,   15,   15, 0x08,
     163,   40,   15,   15, 0x08,
     191,   15,   15,   15, 0x08,
     211,   15,   15,   15, 0x08,
     233,   15,   15,   15, 0x08,
     276,  268,   15,   15, 0x08,
     305,  298,   15,   15, 0x08,
     337,  331,  326,   15, 0x08,
     364,  358,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WidgetKeyboard[] = {
    "WidgetKeyboard\0\0btn\0on_btn_clicked(int)\0"
    "checked\0on_btnCaps_toggled(bool)\0"
    "on_btnShiftLeft_toggled(bool)\0"
    "on_btnShiftRight_toggled(bool)\0"
    "on_btnCtrlLeft_toggled(bool)\0"
    "on_btnAltLeft_toggled(bool)\0"
    "on_btnIns_clicked()\0on_btnPrint_clicked()\0"
    "on_sliderOpacity_valueChanged(int)\0"
    "isShift\0changeTextShift(bool)\0isCaps\0"
    "changeTextCaps(bool)\0bool\0keyId\0"
    "checkNotTextKey(int)\0state\0"
    "on_checkBoxShowNumPad_stateChanged(int)\0"
};

const QMetaObject WidgetKeyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetKeyboard,
      qt_meta_data_WidgetKeyboard, 0 }
};

const QMetaObject *WidgetKeyboard::metaObject() const
{
    return &staticMetaObject;
}

void *WidgetKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetKeyboard))
        return static_cast<void*>(const_cast< WidgetKeyboard*>(this));
    if (!strcmp(_clname, "Ui::WidgetKeyboard"))
        return static_cast< Ui::WidgetKeyboard*>(const_cast< WidgetKeyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_btnCaps_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_btnShiftLeft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_btnShiftRight_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_btnCtrlLeft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_btnAltLeft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_btnIns_clicked(); break;
        case 7: on_btnPrint_clicked(); break;
        case 8: on_sliderOpacity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: changeTextShift((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: changeTextCaps((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = checkNotTextKey((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: on_checkBoxShowNumPad_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
