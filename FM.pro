#-------------------------------------------------
#
# Project created by QtCreator 2015-08-22T16:42:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    api/ctraderapi.cpp \
    profile.cpp \
    api/ctraderspi.cpp \
    login_dialog.cpp \
    public_info.cpp \
    thread/ctrader_thread.cpp \
    api/cuserapi.cpp \
    api/cuserspi.cpp \
    thread/cuser_thread.cpp \
    tab_models/market_info.cpp \
    tab_models/position.cpp \
    insertorder.cpp \
    market.cpp \
    thread/mktinfo_refresh_thread.cpp \
    restore_data.cpp \
    thread/one_minute_data.cpp

HEADERS  += mainwindow.h \
    api/ctraderapi.h \
    profile.h \
    api/ctraderspi.h \
    login_dialog.h \
    public_info.h \
    thread/ctrader_thread.h \
    api/cuserapi.h \
    api/cuserspi.h \
    thread/cuser_thread.h \
    tab_models/market_info.h \
    tab_models/position.h \
    insertorder.h \
    market.h \
    thread/mktinfo_refresh_thread.h \
    restore_data.h \
    thread/one_minute_data.h

FORMS    += mainwindow.ui \
    login_dialog.ui \
    insertorder.ui \
    market.ui

INCLUDEPATH +="$$_PRO_FILE_PWD_/include"

DESTDIR = $$_PRO_FILE_PWD_/bin

LIBS += "$$_PRO_FILE_PWD_/win32/USTPtraderapi.lib"
LIBS += "$$_PRO_FILE_PWD_/win32/USTPmduserapi.lib"
