/****************************************************************************
** Meta object code from reading C++ file 'reportwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../reportwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
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
struct qt_meta_tag_ZN12reportWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto reportWindow::qt_create_metaobjectdata<qt_meta_tag_ZN12reportWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "reportWindow",
        "reportweek",
        "",
        "reportmonth",
        "reportyear",
        "YearChanged",
        "MonthChanged",
        "QRgenerate",
        "checkgroup1",
        "checkgroup2",
        "paintEvent",
        "QPaintEvent*",
        "getXmax",
        "std::vector<std::pair<std::string,double>>",
        "data",
        "getYmax",
        "getNum",
        "data2",
        "getTotal"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'reportweek'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reportmonth'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reportyear'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'YearChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'MonthChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'QRgenerate'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'checkgroup1'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'checkgroup2'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paintEvent'
        QtMocHelpers::SlotData<void(QPaintEvent *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'getXmax'
        QtMocHelpers::SlotData<int(std::vector<std::pair<std::string,double> >)>(12, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'getYmax'
        QtMocHelpers::SlotData<double(std::vector<std::pair<std::string,double> >)>(15, 2, QMC::AccessPublic, QMetaType::Double, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'getNum'
        QtMocHelpers::SlotData<int(std::vector<std::pair<std::string,double> >)>(16, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 13, 17 },
        }}),
        // Slot 'getTotal'
        QtMocHelpers::SlotData<double(std::vector<std::pair<std::string,double> >)>(18, 2, QMC::AccessPublic, QMetaType::Double, {{
            { 0x80000000 | 13, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<reportWindow, qt_meta_tag_ZN12reportWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject reportWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12reportWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12reportWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12reportWindowE_t>.metaTypes,
    nullptr
} };

void reportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<reportWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reportweek(); break;
        case 1: _t->reportmonth(); break;
        case 2: _t->reportyear(); break;
        case 3: _t->YearChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->MonthChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        // case 5: _t->QRgenerate(); break;
        case 6: _t->checkgroup1(); break;
        case 7: _t->checkgroup2(); break;
        case 8: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        case 9: { int _r = _t->getXmax((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<std::string,double>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { double _r = _t->getYmax((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<std::string,double>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->getNum((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<std::string,double>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->getTotal((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<std::string,double>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *reportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12reportWindowE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int reportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
