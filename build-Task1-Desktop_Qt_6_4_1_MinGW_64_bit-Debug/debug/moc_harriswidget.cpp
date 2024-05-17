/****************************************************************************
** Meta object code from reading C++ file 'harriswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Task1/UI/harriswidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'harriswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_HarrisWidget_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[33];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[24];
    char stringdata5[20];
    char stringdata6[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_HarrisWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_HarrisWidget_t qt_meta_stringdata_HarrisWidget = {
    {
        QT_MOC_LITERAL(0, 12),  // "HarrisWidget"
        QT_MOC_LITERAL(13, 32),  // "on_threeByThreeKernelBtn_clicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 30),  // "on_fiveByFiveKernelBtn_clicked"
        QT_MOC_LITERAL(78, 23),  // "on_uploadImgBtn_clicked"
        QT_MOC_LITERAL(102, 19),  // "on_applyBtn_clicked"
        QT_MOC_LITERAL(122, 25)   // "on_resetFilterBtn_clicked"
    },
    "HarrisWidget",
    "on_threeByThreeKernelBtn_clicked",
    "",
    "on_fiveByFiveKernelBtn_clicked",
    "on_uploadImgBtn_clicked",
    "on_applyBtn_clicked",
    "on_resetFilterBtn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_HarrisWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject HarrisWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HarrisWidget.offsetsAndSizes,
    qt_meta_data_HarrisWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_HarrisWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HarrisWidget, std::true_type>,
        // method 'on_threeByThreeKernelBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fiveByFiveKernelBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uploadImgBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_applyBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetFilterBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HarrisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HarrisWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_threeByThreeKernelBtn_clicked(); break;
        case 1: _t->on_fiveByFiveKernelBtn_clicked(); break;
        case 2: _t->on_uploadImgBtn_clicked(); break;
        case 3: _t->on_applyBtn_clicked(); break;
        case 4: _t->on_resetFilterBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *HarrisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HarrisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HarrisWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HarrisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
