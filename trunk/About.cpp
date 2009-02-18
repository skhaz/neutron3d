#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QLayout>
#include <QApplication>

#include "About.h"


About::About(QWidget* parent)
: QDialog(parent)
{
	setWindowTitle(tr("About"));
	resize( 350, 180);
    setMinimumSize( 350, 180 );
	setMaximumSize( 350, 180 );
	
	
	QLabel *title = new QLabel(tr("Neutron 3D"), this);
	title->setAlignment(Qt::AlignCenter);
	title->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
										   "font-wight: bold;\n"
										   "text-align: center;\n"));
	
	
	QLabel *version = new QLabel(tr("Version 0.1.0 - Beta"), this);
	version->setAlignment(Qt::AlignCenter);
	version->setStyleSheet(QString::fromUtf8("font-size: 12px;\n"
										   "font-wight: bold;\n"
										   "text-align: center;\n"));
	
	
	QLabel *content = new QLabel(tr("Developers:\n"
									"André Agenor M. da Luz\n"
									"Rodrigo Delduca Batista\n"
									"Arleson Valentini Tonnera\n"), this);
	content->setStyleSheet(QString::fromUtf8("font-size: 9px;\n"));
	 
	
	QSpacerItem *hSpacer = new QSpacerItem(260, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);
	QFrame *hLine = new QFrame(this);
    hLine->setFrameShape(QFrame::HLine);
    hLine->setFrameShadow(QFrame::Sunken);
	
	
	QVBoxLayout *hLayout = new QVBoxLayout();
	hLayout->setSpacing(5);
	hLayout->setMargin(12);
	hLayout->addWidget(title);
	hLayout->addWidget(version);
	hLayout->addWidget(hLine);
	hLayout->addItem(hSpacer);
	hLayout->addWidget(content);
	
	
	setLayout(hLayout);
	
}

About::~About()
{
}


