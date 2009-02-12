/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Thu 12. Feb 17:01:51 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      27,   11,   11,   11, 0x09,
      42,   11,   11,   11, 0x09,
      59,   11,   11,   11, 0x09,
      76,   11,   11,   11, 0x09,
      96,   11,   11,   11, 0x09,
     121,   11,   11,   11, 0x09,
     142,   11,   11,   11, 0x09,
     164,   11,   11,   11, 0x09,
     182,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0openFileSlot()\0saveFileSlot()\0"
    "saveAsFileSlot()\0importFileSlot()\0"
    "exportAllFileSlot()\0exportSelectedFileSlot()\0"
    "projectManagerSlot()\0keyBoardMappingSlot()\0"
    "preferencesSlot()\0aboutSlot()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openFileSlot(); break;
        case 1: saveFileSlot(); break;
        case 2: saveAsFileSlot(); break;
        case 3: importFileSlot(); break;
        case 4: exportAllFileSlot(); break;
        case 5: exportSelectedFileSlot(); break;
        case 6: projectManagerSlot(); break;
        case 7: keyBoardMappingSlot(); break;
        case 8: preferencesSlot(); break;
        case 9: aboutSlot(); break;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
