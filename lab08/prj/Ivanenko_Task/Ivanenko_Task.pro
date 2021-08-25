TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

QMAKE_LFLAGS += -static -static-libgcc -static-libstdc++ -lpthread

win32: LIBS += -L$$PWD/../build-ModulesIvanenko-Desktop_Qt_6_1_1_MinGW_64_bit-Debug/debug/ -lModulesIvanenko

INCLUDEPATH += $$PWD/../ModulesIvanenko
DEPENDPATH += $$PWD/../ModulesIvanenko

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../build-ModulesIvanenko-Desktop_Qt_6_1_1_MinGW_64_bit-Debug/debug/ModulesIvanenko.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../build-ModulesIvanenko-Desktop_Qt_6_1_1_MinGW_64_bit-Debug/debug/libModulesIvanenko.a
