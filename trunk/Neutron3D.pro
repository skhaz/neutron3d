
TEMPLATE = app
TARGET = Neutron3D
DESTDIR = output

OBJECTS_DIR = temp/obj
MOC_DIR = temp/moc
RCC_DIR = temp/rcc

CONFIG += \
	ordered \
	warn_on \
	console

INCLUDEPATH += \
	ui/

include(ui/Ui.pri)

SOURCES += \
	Main.cpp \
	Application.cpp \
	MainWindow.cpp \
	Preferences.cpp \
	About.cpp

HEADERS += \
	Application.h \
	MainWindow.h \
	Preferences.h \
	About.h

#QMAKESPEC = win-g++-64
#QMAKESPEC = win-g++-32
#QMAKESPEC = linux-g++-64
#QMAKESPEC = linux-g++-32
#QMAKESPEC = mac-g++-64
#QMAKESPEC = mac-g++-32

#RESOURCES += \
#	media/themes/dark/dark.qrc

