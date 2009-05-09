
TEMPLATE = app
TARGET = Neutron3D
DESTDIR = output/Application/bin

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
	FormAbout.cpp \
	FormImageView.cpp \
	FormNewProject.cpp \
	FormPManager.cpp \
	FormPreferences.cpp \
	MainWindow.cpp \
	PMLogic.cpp \
	PMSettings.cpp \
	gl/glPanel.cpp \
	gl/glView.cpp \
	gl/glDisplayInfo.cpp \ 
	gl/primitives.cpp \
	math/vector3.cpp \
	math/point.cpp \
	
	

HEADERS += \
	Application.h \
	FormAbout.h \
	FormImageView.h \
	FormNewProject.h \
	FormPManager.h \
	FormPreferences.h \
	MainWindow.h \
	PMLogic.h \
	PMSettings.h \
	gl/glPanel.h \
	gl/glView.h \
	gl/glDisplayInfo.h \ 
	gl/primitives.h \
	math/vector3.h \
	math/point.h \

QT	+= opengl



RESOURCES += \
	media/application.qrc


#QMAKESPEC = win-g++-64
#QMAKESPEC = win-g++-32
#QMAKESPEC = linux-g++-64
#QMAKESPEC = linux-g++-32
#QMAKESPEC = mac-g++-64
#QMAKESPEC = mac-g++-32