include(gtest_dependency.pri)
QT -= gui
QT += core
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

DEFINES += INPUTDIR=\\\"$$PWD/input/\\\"

HEADERS +=     tst_fun.h \
    ../app/func.h \

SOURCES +=     main.cpp\
    ../app/func.cpp

INCLUDEPATH += ../app

DISTFILES += \
    input/TestSTDOut_output.txt
