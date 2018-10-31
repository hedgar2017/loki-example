TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += \
    user32.lib \
    cfgmgr32.lib \
    advapi32.lib \
    hid.lib

SOURCES += \
    main.cpp \
    registry.cpp \
    device.cpp \
    mouse.cpp \
    keyboard.cpp

HEADERS += \
    registry.h \
    device.h \
    mouse.h \
    keyboard.h \
    keys.h
