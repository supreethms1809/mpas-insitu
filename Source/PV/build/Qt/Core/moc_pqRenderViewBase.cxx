/****************************************************************************
** Meta object code from reading C++ file 'pqRenderViewBase.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ParaView/Qt/Core/pqRenderViewBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRenderViewBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqRenderViewBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      50,   17,   17,   17, 0x09,
      80,   17,   17,   17, 0x09,
     108,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_pqRenderViewBase[] = {
    "pqRenderViewBase\0\0initializeAfterObjectsCreated()\0"
    "beginDelayInteractiveRender()\0"
    "endDelayInteractiveRender()\0"
    "updateStatusMessage()\0"
};

void pqRenderViewBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqRenderViewBase *_t = static_cast<pqRenderViewBase *>(_o);
        switch (_id) {
        case 0: _t->initializeAfterObjectsCreated(); break;
        case 1: _t->beginDelayInteractiveRender(); break;
        case 2: _t->endDelayInteractiveRender(); break;
        case 3: _t->updateStatusMessage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pqRenderViewBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqRenderViewBase::staticMetaObject = {
    { &pqView::staticMetaObject, qt_meta_stringdata_pqRenderViewBase,
      qt_meta_data_pqRenderViewBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqRenderViewBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqRenderViewBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqRenderViewBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqRenderViewBase))
        return static_cast<void*>(const_cast< pqRenderViewBase*>(this));
    return pqView::qt_metacast(_clname);
}

int pqRenderViewBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
