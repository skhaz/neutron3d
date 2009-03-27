/****************************************************************************
** Meta object code from reading C++ file 'ProjectManager.h'
**
** Created: Thu 26. Mar 11:27:54 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjectManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProjectManager[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      37,   15,   15,   15, 0x08,
      55,   15,   15,   15, 0x08,
      73,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProjectManager[] = {
    "ProjectManager\0\0selectProject_Slot()\0"
    "newProject_Slot()\0addProject_Slot()\0"
    "removeFromList_Slot()\0"
};

const QMetaObject ProjectManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProjectManager,
      qt_meta_data_ProjectManager, 0 }
};

const QMetaObject *ProjectManager::metaObject() const
{
    return &staticMetaObject;
}

void *ProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectManager))
        return static_cast<void*>(const_cast< ProjectManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectProject_Slot(); break;
        case 1: newProject_Slot(); break;
        case 2: addProject_Slot(); break;
        case 3: removeFromList_Slot(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
