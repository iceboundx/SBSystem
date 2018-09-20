#-------------------------------------------------
#
# Project created by QtCreator 2018-09-12T09:20:06
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SBSystemBackup
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    touristfunctionlist.cpp \
    adminfuntionlist.cpp \
    allsite.cpp \
    global.cpp \
    addsite.cpp \
    touristinfo.cpp \
    admininfo.cpp \
    orderlist.cpp \
    ordersite.cpp \
    timelim.cpp \
    onesite.cpp \
    sbsdatabase.cpp \
    sbsmanager.cpp \
    show_site.cpp \
    getvistime.cpp \
    show_order.cpp \
    show_admin_site.cpp \
    donutbreakdownchart.cpp \
    mainslice.cpp \
    moreadminsite.cpp \
    admincount.cpp \
    registtour.cpp \
    allsiteadmin.cpp

HEADERS += \
        mainwindow.h \
    touristfunctionlist.h \
    adminfuntionlist.h \
    allsite.h \
    addsite.h \
    touristinfo.h \
    admininfo.h \
    orderlist.h \
    ordersite.h \
    timelim.h \
    onesite.h \
    sbsdatabase.h \
    sbsmanager.h \
    global.h \
    show_site.h \
    getvistime.h \
    show_order.h \
    show_admin_site.h \
    mainslice.h \
    donutbreakdownchart.h \
    moreadminsite.h \
    admincount.h \
    registtour.h \
    allsiteadmin.h

FORMS += \
        mainwindow.ui \
    touristfunctionlist.ui \
    adminfuntionlist.ui \
    allsite.ui \
    addsite.ui \
    touristinfo.ui \
    admininfo.ui \
    orderlist.ui \
    ordersite.ui \
    timelim.ui \
    onesite.ui \
    show_site.ui \
    getvistime.ui \
    show_order.ui \
    show_admin_site.ui \
    moreadminsite.ui \
    admincount.ui \
    registtour.ui \
    allsiteadmin.ui

DISTFILES +=
