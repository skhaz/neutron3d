#include <QtGui>

#include "glView.h"
#include "glPanel.h"

GLPanel::GLPanel(QWidget *parent)
: QWidget(parent)
{
    glView = new GLView;
	
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->addWidget(glView);
    setLayout(mainLayout);
	
	//setWindowTitle(tr("Neutron 3D Viewport"));
}

GLPanel::~GLPanel()
{
}
