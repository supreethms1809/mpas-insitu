/****************************************************************************
** Meta object code from reading C++ file 'pqEditColorMapReaction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ParaView/Qt/ApplicationComponents/pqEditColorMapReaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEditColorMapReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqEditColorMapReaction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqEditColorMapReaction[] = {
    "pqEditColorMapReaction\0\0updateEnableState()\0"
};

void pqEditColorMapReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqEditColorMapReaction *_t = static_cast<pqEditColorMapReaction *>(_o);
        switch (_id) {
        case 0: _t->updateEnableState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqEditColorMapReaction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqEditColorMapReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqEditColorMapReaction,
      qt_meta_data_pqEditColorMapReaction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqEditColorMapReaction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqEditColorMapReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqEditColorMapReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqEditColorMapReaction))
        return static_cast<void*>(const_cast< pqEditColorMapReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqEditColorMapReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
