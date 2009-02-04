
TEMPLATE = app
TARGET = neutron3d
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
	MainWindow.cpp

HEADERS += \
	Application.h \
	MainWindow.h

#RESOURCES += \
#	media/themes/dark/dark.qrc

