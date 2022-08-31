/****************************************************************************
** Meta object code from reading C++ file 'fieldword.h'
**
** Created: Mon 20. Dec 21:31:23 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../balda/fieldword.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldword.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FieldWord[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      37,   10,   10,   10, 0x08,
      61,   10,   10,   10, 0x08,
      85,   10,   10,   10, 0x08,
     109,   10,   10,   10, 0x08,
     140,   10,   10,   10, 0x08,
     154,   10,   10,   10, 0x08,
     168,   10,   10,   10, 0x08,
     178,   10,   10,   10, 0x08,
     192,   10,   10,   10, 0x08,
     212,   10,   10,   10, 0x08,
     227,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FieldWord[] = {
    "FieldWord\0\0on_btClearField_clicked()\0"
    "on_btMissMove_clicked()\0on_btnNewGame_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_plainTextEdit_textChanged()\0"
    "ClickedCell()\0enterLetter()\0onError()\0"
    "onConnected()\0onConnectedServer()\0"
    "onReadServer()\0onReadClient()\0"
};

const QMetaObject FieldWord::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FieldWord,
      qt_meta_data_FieldWord, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FieldWord::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FieldWord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FieldWord::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FieldWord))
        return static_cast<void*>(const_cast< FieldWord*>(this));
    return QWidget::qt_metacast(_clname);
}

int FieldWord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btClearField_clicked(); break;
        case 1: on_btMissMove_clicked(); break;
        case 2: on_btnNewGame_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        case 4: on_plainTextEdit_textChanged(); break;
        case 5: ClickedCell(); break;
        case 6: enterLetter(); break;
        case 7: onError(); break;
        case 8: onConnected(); break;
        case 9: onConnectedServer(); break;
        case 10: onReadServer(); break;
        case 11: onReadClient(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
