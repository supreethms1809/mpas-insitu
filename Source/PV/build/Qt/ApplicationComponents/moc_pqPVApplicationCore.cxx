/****************************************************************************
** Meta object code from reading C++ file 'pqPVApplicationCore.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ParaView/Qt/ApplicationComponents/pqPVApplicationCore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPVApplicationCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqPVApplicationCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   20,   20,   20, 0x0a,
      60,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pqPVApplicationCore[] = {
    "pqPVApplicationCore\0\0aboutToShowQuickLaunch()\0"
    "quickLaunch()\0startSearch()\0"
};

void pqPVApplicationCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqPVApplicationCore *_t = static_cast<pqPVApplicationCore *>(_o);
        switch (_id) {
        case 0: _t->aboutToShowQuickLaunch(); break;
        case 1: _t->quickLaunch(); break;
        case 2: _t->startSearch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqPVApplicationCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqPVApplicationCore::staticMetaObject = {
    { &pqApplicationCore::staticMetaObject, qt_meta_stringdata_pqPVApplicationCore,
      qt_meta_data_pqPVApplicationCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqPVApplicationCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqPVApplicationCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqPVApplicationCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqPVApplicationCore))
        return static_cast<void*>(const_cast< pqPVApplicationCore*>(this));
    return pqApplicationCore::qt_metacast(_clname);
}

int pqPVApplicationCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqApplicationCore::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqPVApplicationCore::aboutToShowQuickLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
