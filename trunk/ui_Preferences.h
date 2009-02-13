/********************************************************************************
** Form generated from reading ui file 'Preferences.ui'
**
** Created: Fri 13. Feb 09:40:19 2009
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lbl_categories;
    QTreeView *trv_categories;
    QStackedWidget *stackedWidget;
    QWidget *general;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QGroupBox *groupBox;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *page_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_close;

    void setupUi(QWidget *Preferences)
    {
    if (Preferences->objectName().isEmpty())
        Preferences->setObjectName(QString::fromUtf8("Preferences"));
    Preferences->resize(600, 400);
    Preferences->setMinimumSize(QSize(600, 400));
    gridLayout_2 = new QGridLayout(Preferences);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    lbl_categories = new QLabel(Preferences);
    lbl_categories->setObjectName(QString::fromUtf8("lbl_categories"));

    gridLayout_2->addWidget(lbl_categories, 0, 0, 1, 1);

    trv_categories = new QTreeView(Preferences);
    trv_categories->setObjectName(QString::fromUtf8("trv_categories"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(trv_categories->sizePolicy().hasHeightForWidth());
    trv_categories->setSizePolicy(sizePolicy);
    trv_categories->setMinimumSize(QSize(180, 0));
    trv_categories->setMaximumSize(QSize(180, 16777215));

    gridLayout_2->addWidget(trv_categories, 1, 0, 1, 1);

    stackedWidget = new QStackedWidget(Preferences);
    stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
    stackedWidget->setFrameShape(QFrame::Box);
    general = new QWidget();
    general->setObjectName(QString::fromUtf8("general"));
    groupBox_2 = new QGroupBox(general);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(5, 185, 326, 52));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
    groupBox_2->setSizePolicy(sizePolicy1);
    groupBox_2->setMinimumSize(QSize(0, 50));
    checkBox = new QCheckBox(groupBox_2);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(10, 20, 151, 22));
    groupBox_3 = new QGroupBox(general);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(5, 90, 326, 91));
    sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
    groupBox_3->setSizePolicy(sizePolicy1);
    gridLayout = new QGridLayout(groupBox_3);
    gridLayout->setSpacing(12);
    gridLayout->setMargin(12);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label_4 = new QLabel(groupBox_3);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
    label_4->setSizePolicy(sizePolicy1);
    label_4->setLayoutDirection(Qt::LeftToRight);
    label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout->addWidget(label_4, 0, 0, 1, 1);

    comboBox = new QComboBox(groupBox_3);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setMinimumSize(QSize(200, 22));

    gridLayout->addWidget(comboBox, 0, 1, 1, 1);

    label_5 = new QLabel(groupBox_3);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
    label_5->setSizePolicy(sizePolicy1);
    label_5->setLayoutDirection(Qt::LeftToRight);
    label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout->addWidget(label_5, 1, 0, 1, 1);

    comboBox_2 = new QComboBox(groupBox_3);
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setMinimumSize(QSize(200, 22));

    gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

    groupBox = new QGroupBox(general);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 35, 151, 51));
    sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy1);
    groupBox->setMinimumSize(QSize(120, 50));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 20, 66, 20));
    label->setLayoutDirection(Qt::LeftToRight);
    label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    spinBox = new QSpinBox(groupBox);
    spinBox->setObjectName(QString::fromUtf8("spinBox"));
    spinBox->setGeometry(QRect(100, 20, 42, 22));
    spinBox->setValue(20);
    stackedWidget->addWidget(general);
    groupBox_2->raise();
    groupBox_3->raise();
    groupBox->raise();
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    label_3 = new QLabel(page_2);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 5, 41, 20));
    label_3->setLayoutDirection(Qt::LeftToRight);
    label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    stackedWidget->addWidget(page_2);

    gridLayout_2->addWidget(stackedWidget, 1, 1, 1, 2);

    horizontalSpacer = new QSpacerItem(480, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 2);

    bt_close = new QPushButton(Preferences);
    bt_close->setObjectName(QString::fromUtf8("bt_close"));
    bt_close->setMinimumSize(QSize(100, 32));
    bt_close->setMaximumSize(QSize(100, 32));

    gridLayout_2->addWidget(bt_close, 2, 2, 1, 1);


    retranslateUi(Preferences);

    stackedWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QWidget *Preferences)
    {
    Preferences->setWindowTitle(QApplication::translate("Preferences", "Preferences", 0, QApplication::UnicodeUTF8));
    lbl_categories->setText(QApplication::translate("Preferences", "Categories", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Preferences", "Devices", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("Preferences", "Enable mouse scroll wheel", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("Preferences", "Language", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Preferences", "Default Language:", 0, QApplication::UnicodeUTF8));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("Preferences", "English", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Preferences", "Portuguese (Brazil)", 0, QApplication::UnicodeUTF8)
    );
    label_5->setText(QApplication::translate("Preferences", "Help Languege:", 0, QApplication::UnicodeUTF8));
    comboBox_2->clear();
    comboBox_2->insertItems(0, QStringList()
     << QApplication::translate("Preferences", "English", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Preferences", "Portuguese (Brazil)", 0, QApplication::UnicodeUTF8)
    );
    groupBox->setTitle(QApplication::translate("Preferences", "Scene Undo", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Preferences", "Undo Levels:", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Preferences", "General:", 0, QApplication::UnicodeUTF8));
    bt_close->setText(QApplication::translate("Preferences", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Preferences);
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
