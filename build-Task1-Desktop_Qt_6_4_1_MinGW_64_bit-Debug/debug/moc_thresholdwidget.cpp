/****************************************************************************
** Meta object code from reading C++ file 'thresholdwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Task1/UI/thresholdwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thresholdwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ThresholdWidget_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[21];
    char stringdata5[31];
    char stringdata6[23];
    char stringdata7[19];
    char stringdata8[22];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ThresholdWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ThresholdWidget_t qt_meta_stringdata_ThresholdWidget = {
    {
        QT_MOC_LITERAL(0, 15),  // "ThresholdWidget"
        QT_MOC_LITERAL(16, 29),  // "on_globalThresholdBtn_clicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 28),  // "on_localThresholdBtn_clicked"
        QT_MOC_LITERAL(76, 20),  // "on_uploadBtn_clicked"
        QT_MOC_LITERAL(97, 30),  // "on_radiusSLider_sliderReleased"
        QT_MOC_LITERAL(128, 22),  // "on_spectralBtn_clicked"
        QT_MOC_LITERAL(151, 18),  // "on_otsuBtn_clicked"
        QT_MOC_LITERAL(170, 21),  // "on_optimumBtn_clicked"
        QT_MOC_LITERAL(192, 19)   // "on_resetBtn_clicked"
    },
    "ThresholdWidget",
    "on_globalThresholdBtn_clicked",
    "",
    "on_localThresholdBtn_clicked",
    "on_uploadBtn_clicked",
    "on_radiusSLider_sliderReleased",
    "on_spectralBtn_clicked",
    "on_otsuBtn_clicked",
    "on_optimumBtn_clicked",
    "on_resetBtn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ThresholdWidget[] = {

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
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

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

Q_CONSTINIT const QMetaObject ThresholdWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ThresholdWidget.offsetsAndSizes,
    qt_meta_data_ThresholdWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ThresholdWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ThresholdWidget, std::true_type>,
        // method 'on_globalThresholdBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_localThresholdBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_uploadBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radiusSLider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spectralBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_otsuBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_optimumBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ThresholdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThresholdWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_globalThresholdBtn_clicked(); break;
        case 1: _t->on_localThresholdBtn_clicked(); break;
        case 2: _t->on_uploadBtn_clicked(); break;
        case 3: _t->on_radiusSLider_sliderReleased(); break;
        case 4: _t->on_spectralBtn_clicked(); break;
        case 5: _t->on_otsuBtn_clicked(); break;
        case 6: _t->on_optimumBtn_clicked(); break;
        case 7: _t->on_resetBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ThresholdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThresholdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThresholdWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ThresholdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
