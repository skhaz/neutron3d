#include <QLayout>

#include "gl/perspecPanel.h"

PerspcPanel::PerspcPanel(QWidget *parent)
: QDialog(parent)
{	
    glView = new GLView;
	
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->addWidget(glView);
    setLayout(mainLayout);
	
	setWindowTitle(tr("Perspective"));
}

PerspcPanel::~PerspcPanel()
{
}