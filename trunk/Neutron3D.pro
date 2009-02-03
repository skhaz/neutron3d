
TEMPLATE = app
TARGET = neutron3d
DESTDIR = output

OBJECTS_DIR = tmp/obj
MOC_DIR = tmp/moc
RCC_DIR = tmp/rcc

CONFIG += \
	ordered \
	warn_on

SUBDIRS += ui

SOURCES += \
	Main.cpp \
	Application.cpp \
	MainWindow.cpp

HEADERS += \
	Application.h \
	MainWindow.h

RESOURCES += \
	media/themes/dark/dark.qrc

