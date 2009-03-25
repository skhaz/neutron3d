#include "About.h"

About::About(QWidget* parent)
: QDialog(parent)
,title(new QLabel(tr("Neutron 3D"), this))
,version(new QLabel(tr("Version 0.1.0 - Beta"), this))
,content(new QLabel(this))
,hSpacer(new QSpacerItem(260, 20, QSizePolicy::Minimum, QSizePolicy::Expanding))
,hLine(new QFrame(this))
,hLayout(new QVBoxLayout())
{
    setWindowTitle(tr("About"));
    resize( 350, 180);
    setMinimumSize( 350, 180 );
    setMaximumSize( 350, 180 );
	
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
                                        "font-wight: bold;\n"
                                        "text-align: center;\n"));
	
    version->setAlignment(Qt::AlignCenter);
    version->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
                                        "font-wight: bold;\n"
                                        "text-align: center;\n"));
	
    content->setText(QLatin1String("Developers:\n"
                                    "Andréˆ Agenor M. da Luz\n"
                                    "Rodrigo Delduca Batista\n"
                                    "Arleson Valentini Tonnera\n"));
    content->setStyleSheet(QString::fromUtf8("font-size: 10px;\n"));
	 
    hLine->setFrameShape(QFrame::HLine);
    hLine->setFrameShadow(QFrame::Sunken);
	
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

void About::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED ( event );
    close();
}


