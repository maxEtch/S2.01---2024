/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../V2/lecteurvue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurvue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LecteurVue_t {
    const uint offsetsAndSize[20];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LecteurVue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LecteurVue_t qt_meta_stringdata_LecteurVue = {
    {
QT_MOC_LITERAL(0, 10), // "LecteurVue"
QT_MOC_LITERAL(11, 11), // "lancerDiapo"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 12), // "arreterDiapo"
QT_MOC_LITERAL(37, 9), // "precedent"
QT_MOC_LITERAL(47, 7), // "suivant"
QT_MOC_LITERAL(55, 4), // "aide"
QT_MOC_LITERAL(60, 4), // "mode"
QT_MOC_LITERAL(65, 14), // "chargerLeDiapo"
QT_MOC_LITERAL(80, 12) // "viderLeDiapo"

    },
    "LecteurVue\0lancerDiapo\0\0arreterDiapo\0"
    "precedent\0suivant\0aide\0mode\0chargerLeDiapo\0"
    "viderLeDiapo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LecteurVue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LecteurVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LecteurVue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lancerDiapo(); break;
        case 1: _t->arreterDiapo(); break;
        case 2: _t->precedent(); break;
        case 3: _t->suivant(); break;
        case 4: _t->aide(); break;
        case 5: _t->mode(); break;
        case 6: _t->chargerLeDiapo(); break;
        case 7: _t->viderLeDiapo(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject LecteurVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LecteurVue.offsetsAndSize,
    qt_meta_data_LecteurVue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LecteurVue_t
, QtPrivate::TypeAndForceComplete<LecteurVue, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LecteurVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LecteurVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LecteurVue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LecteurVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
