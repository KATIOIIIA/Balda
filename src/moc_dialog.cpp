/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Mon 20. Dec 21:31:28 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../balda/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      59,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     105,    7,    7,    7, 0x08,
     126,    7,    7,    7, 0x08,
     150,    7,    7,    7, 0x08,
     174,    7,    7,    7, 0x08,
     207,    7,    7,    7, 0x08,
     242,  236,    7,    7, 0x08,
     278,  236,    7,    7, 0x08,
     315,    7,    7,    7, 0x08,
     325,    7,    7,    7, 0x08,
     339,    7,    7,    7, 0x08,
     359,    7,    7,    7, 0x08,
     374,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0on_btnConnect_clicked()\0"
    "on_radioButton_2_pressed()\0"
    "on_radioButton_pressed()\0on_bClient_pressed()\0"
    "on_bServer_pressed()\0on_buttonBox_accepted()\0"
    "on_pushButton_clicked()\0"
    "on_spinBox_valueChanged(QString)\0"
    "on_spinBox_valueChanged(int)\0value\0"
    "on_verticalSlider_valueChanged(int)\0"
    "on_verticalSlider2_valueChanged(int)\0"
    "onError()\0onConnected()\0onConnectedServer()\0"
    "onReadServer()\0onReadClient()\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnConnect_clicked(); break;
        case 1: on_radioButton_2_pressed(); break;
        case 2: on_radioButton_pressed(); break;
        case 3: on_bClient_pressed(); break;
        case 4: on_bServer_pressed(); break;
        case 5: on_buttonBox_accepted(); break;
        case 6: on_pushButton_clicked(); break;
        case 7: on_spinBox_valueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: on_verticalSlider2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: onError(); break;
        case 12: onConnected(); break;
        case 13: onConnectedServer(); break;
        case 14: onReadServer(); break;
        case 15: onReadClient(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
