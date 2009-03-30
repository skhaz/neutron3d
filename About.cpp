#include "About.h"

About::About(QWidget* parent)
: QDialog(parent)
,picture(new QLabel(this))
,title(new QLabel(tr("Neutron 3D"), this))
,version(new QLabel(tr("Version 0.1.0 - Beta"), this))
,content(new QLabel(this))
,hSpacer(new QSpacerItem(260, 20, QSizePolicy::Minimum, QSizePolicy::Expanding))
,hLayout(new QVBoxLayout())
,hLayout1(new QVBoxLayout())
{
    setWindowTitle(tr("About"));
    resize( 350, 280);
    setFixedSize ( 350, 300 );
    setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
                                    "color: rgb(0, 0, 0); "));


    picture->setPixmap(QPixmap(QString::fromUtf8(":/about/about.jpg")));
	
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
                                        "font-wight: bold;\n"
                                        "text-align: center;\n"));
	
    version->setAlignment(Qt::AlignCenter);
    version->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
                                        "font-wight: bold;\n"
                                        "text-align: center;\n"));
	
    content->setText(QLatin1String("Developers:\n"
                                    "AndrÈà Agenor M. da Luz\n"
                                    "Rodrigo Delduca Batista\n"
                                    "Arleson Valentini Tonnera\n"));


    hLayout1->setSpacing(5);
    hLayout1->setMargin(12);
    hLayout1->addWidget(content);

    hLayout->setMargin(0);
    hLayout->addWidget(picture);
    hLayout->addWidget(title);
    hLayout->addWidget(version);
    hLayout->addItem(hSpacer);
    hLayout->addLayout(hLayout1);


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


