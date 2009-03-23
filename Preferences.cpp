#include <QtGui>

#include "Preferences.h"

Preferences::Preferences(QWidget* parent)
: QDialog(parent)
{
	setWindowTitle(tr("Preferences"));
	resize( 650, 350);
    setMinimumSize( 450, 350 );
	
	
	QListWidget *lst_categories = new QListWidget(this);
	lst_categories->setMinimumSize( 150, 100);
	lst_categories->setMaximumSize( 150, 16777215);
	lst_categories->addItem(tr("General"));
	lst_categories->addItem(tr("Mouse"));
	lst_categories->addItem(tr("Selection"));
	lst_categories->addItem(tr("Polygon"));
	lst_categories->addItem(tr("Curves"));
	lst_categories->addItem(tr("Colors"));
	

    QStackedWidget *stk_details = new QStackedWidget(this);
	QWidget *generalPage = new QWidget();
	QWidget *mousePage = new QWidget();
	stk_details->setMinimumSize( 100, 100);
	stk_details->setFrameShape( QFrame::Box );
	stk_details->setFrameShadow( QFrame::Plain);
	stk_details->addWidget(generalPage);
	stk_details->addWidget(mousePage);
	
	QHBoxLayout *layout = new QHBoxLayout();
	layout->setSpacing(5);
	layout->setMargin(5);
	layout->addWidget(lst_categories);
	layout->addWidget(stk_details);
	
	
	QPushButton *bt_close = new QPushButton(tr("Close"), this);
	bt_close->setFixedSize ( 85, 25 );
	QPushButton *bt_apply = new QPushButton(tr("Apply"), this);
	bt_apply->setFixedSize ( 85, 25 );
	
	QSpacerItem *hSpacer = new QSpacerItem(260, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
	QSpacerItem *hSpacer1 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
	
	QHBoxLayout *hbl_footer = new QHBoxLayout();
	hbl_footer->setSpacing(5);
	hbl_footer->setMargin(5);
	hbl_footer->addItem(hSpacer);
	hbl_footer->addWidget(bt_apply);
	hbl_footer->addItem(hSpacer1);
	hbl_footer->addWidget(bt_close);
	
	
	QVBoxLayout *mainLayout = new QVBoxLayout();
	mainLayout->setSpacing(5);
	mainLayout->setMargin(12);
	mainLayout->addLayout(layout, 0);
	mainLayout->addLayout(hbl_footer, 0);
	
	setLayout(mainLayout);
	
	
	
	connect(bt_close, SIGNAL(clicked()), SLOT(close()));
}

Preferences::~Preferences()
{
}

void Preferences::generalPage()
{
}


void Preferences::colorPage()
{
}

void Preferences::changePage()
{
	
}
