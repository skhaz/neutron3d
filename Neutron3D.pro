
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
	ui/ \
	gl/

include(ui/Ui.pri)

SOURCES += \
	Main.cpp \
	Application.cpp \
	MainWindow.cpp \
	Preferences.cpp \
	ProjectManager.cpp \
	NewProject.cpp \
	About.cpp \
	gl/glPanel.cpp \
	gl/glView.cpp \
	gl/glDisplayInfo.cpp \ 
	gl/primitives.cpp \
	math/vector2.cpp \
	math/vector3.cpp \
	math/point.cpp \
	gl/perspecPanel.cpp \
	

HEADERS += \
	Application.h \
	MainWindow.h \
	Preferences.h \
	ProjectManager.h \
	NewProject.h \
	About.h \
	gl/glPanel.h \
	gl/glView.h \
	gl/glDisplayInfo.h \
	gl/primitives.h \
	math/vector2.h \
	math/vector3.h \
	math/point.h \
	gl/perspecPanel.h \

QT	+= opengl

#QMAKESPEC = win-g++-64
#QMAKESPEC = win-g++-32
#QMAKESPEC = linux-g++-64
#QMAKESPEC = linux-g++-32
#QMAKESPEC = mac-g++-64
#QMAKESPEC = mac-g++-32

#RESOURCES += \
#	media/themes/dark/dark.qrc

