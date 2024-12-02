/****************************************************************************
** Meta object code from reading C++ file 'testmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../testmainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTestMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestMainWindowENDCLASS = QtMocHelpers::stringData(
    "TestMainWindow",
    "initTestCase",
    "",
    "cleanupTestCase",
    "testUpdateColorRGB",
    "testUpdateColorHSV",
    "testUpdateColorCMYK",
    "testRgbSliderUpdatesColor",
    "testCmykSliderUpdatesColor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestMainWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[19];
    char stringdata5[19];
    char stringdata6[20];
    char stringdata7[26];
    char stringdata8[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestMainWindowENDCLASS_t qt_meta_stringdata_CLASSTestMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TestMainWindow"
        QT_MOC_LITERAL(15, 12),  // "initTestCase"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 15),  // "cleanupTestCase"
        QT_MOC_LITERAL(45, 18),  // "testUpdateColorRGB"
        QT_MOC_LITERAL(64, 18),  // "testUpdateColorHSV"
        QT_MOC_LITERAL(83, 19),  // "testUpdateColorCMYK"
        QT_MOC_LITERAL(103, 25),  // "testRgbSliderUpdatesColor"
        QT_MOC_LITERAL(129, 26)   // "testCmykSliderUpdatesColor"
    },
    "TestMainWindow",
    "initTestCase",
    "",
    "cleanupTestCase",
    "testUpdateColorRGB",
    "testUpdateColorHSV",
    "testUpdateColorCMYK",
    "testRgbSliderUpdatesColor",
    "testCmykSliderUpdatesColor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestMainWindow, std::true_type>,
        // method 'initTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanupTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testUpdateColorRGB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testUpdateColorHSV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testUpdateColorCMYK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testRgbSliderUpdatesColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testCmykSliderUpdatesColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->testUpdateColorRGB(); break;
        case 3: _t->testUpdateColorHSV(); break;
        case 4: _t->testUpdateColorCMYK(); break;
        case 5: _t->testRgbSliderUpdatesColor(); break;
        case 6: _t->testCmykSliderUpdatesColor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
