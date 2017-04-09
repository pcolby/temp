TARGET = example
TEMPLATE = app
QT += widgets

# Disable automatic ASCII conversions (best practice for internationalization).
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

# Enable C++11 for all supported compilers.
CONFIG += c++11

# Enable all warnings for all targets.
CONFIG += warn_on

# Neaten the output directories.
CONFIG(debug,debug|release) DESTDIR = debug
CONFIG(release,debug|release) DESTDIR = release
MOC_DIR = $$DESTDIR/tmp
OBJECTS_DIR = $$DESTDIR/tmp
RCC_DIR = $$DESTDIR/tmp
UI_DIR = $$DESTDIR/tmp

# Include the sources.
SOURCES += foo.cpp main.cpp
HEADERS += foo.h
