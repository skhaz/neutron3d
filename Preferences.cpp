#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QGroupBox>
#include <QSpinBox>
#include <QTreeWidget>
#include <QStackedWidget>

#include "Preferences.h"


Preferences::Preferences()
{

    QWidget* window = new QWidget(this);
    window->setWindowTitle("Preferences");
    window->setMinimumSize( 450, 350 );

    QTreeWidget* trv_Categories = new QTreeVidget(this);
    trv_Categories->setHeaderLabel ( "Categories" );
    trv_Categories->setMinimumSize( 180, 350 );

    QStackedWidget* stk_details = new QStackedWidget(this);
}
