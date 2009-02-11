/********************************************************************************
** Form generated from reading ui file 'Preferences.ui'
**
** Created: Wed 11. Feb 10:37:14 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QGridLayout *gridLayout;
    QLabel *lbl_categories;
    QTreeView *trv_categories;
    QTabWidget *tab_details;
    QWidget *tab;
    QWidget *tab_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_close;

    void setupUi(QWidget *Preferences)
    {
    if (Preferences->objectName().isEmpty())
        Preferences->setObjectName(QString::fromUtf8("Preferences"));
    Preferences->resize(600, 400);
    Preferences->setMinimumSize(QSize(600, 400));
    gridLayout = new QGridLayout(Preferences);
    gridLayout->setSpacing(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    lbl_categories = new QLabel(Preferences);
    lbl_categories->setObjectName(QString::fromUtf8("lbl_categories"));

    gridLayout->addWidget(lbl_categories, 0, 0, 1, 2);

    trv_categories = new QTreeView(Preferences);
    trv_categories->setObjectName(QString::fromUtf8("trv_categories"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(trv_categories->sizePolicy().hasHeightForWidth());
    trv_categories->setSizePolicy(sizePolicy);
    trv_categories->setMinimumSize(QSize(180, 0));
    trv_categories->setMaximumSize(QSize(180, 16777215));

    gridLayout->addWidget(trv_categories, 1, 0, 1, 1);

    tab_details = new QTabWidget(Preferences);
    tab_details->setObjectName(QString::fromUtf8("tab_details"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    tab_details->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tab_details->addTab(tab_2, QString());

    gridLayout->addWidget(tab_details, 1, 1, 1, 2);

    horizontalSpacer = new QSpacerItem(480, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

    bt_close = new QPushButton(Preferences);
    bt_close->setObjectName(QString::fromUtf8("bt_close"));
    bt_close->setMinimumSize(QSize(100, 32));
    bt_close->setMaximumSize(QSize(100, 32));

    gridLayout->addWidget(bt_close, 2, 2, 1, 1);


    retranslateUi(Preferences);

    tab_details->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QWidget *Preferences)
    {
    Preferences->setWindowTitle(QApplication::translate("Preferences", "Preferences", 0, QApplication::UnicodeUTF8));
    lbl_categories->setText(QApplication::translate("Preferences", "Categories", 0, QApplication::UnicodeUTF8));
    tab_details->setTabText(tab_details->indexOf(tab), QApplication::translate("Preferences", "Display", 0, QApplication::UnicodeUTF8));
    tab_details->setTabText(tab_details->indexOf(tab_2), QApplication::translate("Preferences", "Performace", 0, QApplication::UnicodeUTF8));
    bt_close->setText(QApplication::translate("Preferences", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Preferences);
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
