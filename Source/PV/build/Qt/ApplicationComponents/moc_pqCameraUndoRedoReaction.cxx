/****************************************************************************
** Meta object code from reading C++ file 'pqCameraUndoRedoReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ParaView/Qt/ApplicationComponents/pqCameraUndoRedoReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCameraUndoRedoReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqCameraUndoRedoReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x09,
      50,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqCameraUndoRedoReaction[] = {
    "pqCameraUndoRedoReaction\0\0enable\0"
    "setEnabled(bool)\0setActiveView(pqView*)\0"
};

void pqCameraUndoRedoReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqCameraUndoRedoReaction *_t = static_cast<pqCameraUndoRedoReaction *>(_o);
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqCameraUndoRedoReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqCameraUndoRedoReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqCameraUndoRedoReaction,
      qt_meta_data_pqCameraUndoRedoReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqCameraUndoRedoReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqCameraUndoRedoReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqCameraUndoRedoReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqCameraUndoRedoReaction))
        return static_cast<void*>(const_cast< pqCameraUndoRedoReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqCameraUndoRedoReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
