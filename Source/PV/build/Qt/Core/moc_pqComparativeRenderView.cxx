/****************************************************************************
** Meta object code from reading C++ file 'pqComparativeRenderView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ParaView/Qt/Core/pqComparativeRenderView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComparativeRenderView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqComparativeRenderView[] = {

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
      35,   25,   24,   24, 0x09,
      63,   24,   24,   24, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_pqComparativeRenderView[] = {
    "pqComparativeRenderView\0\0container\0"
    "updateViewWidgets(QWidget*)\0"
    "updateViewWidgets()\0"
};

void pqComparativeRenderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqComparativeRenderView *_t = static_cast<pqComparativeRenderView *>(_o);
        switch (_id) {
        case 0: _t->updateViewWidgets((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->updateViewWidgets(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqComparativeRenderView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqComparativeRenderView::staticMetaObject = {
    { &pqRenderView::staticMetaObject, qt_meta_stringdata_pqComparativeRenderView,
      qt_meta_data_pqComparativeRenderView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqComparativeRenderView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqComparativeRenderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqComparativeRenderView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqComparativeRenderView))
        return static_cast<void*>(const_cast< pqComparativeRenderView*>(this));
    return pqRenderView::qt_metacast(_clname);
}

int pqComparativeRenderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRenderView::qt_metacall(_c, _id, _a);
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
