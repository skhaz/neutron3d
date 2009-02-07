/********************************************************************************
** Form generated from reading ui file 'About.ui'
**
** Created: Sat Feb 7 17:09:16 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_About
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *form_About)
    {
    if (form_About->objectName().isEmpty())
        form_About->setObjectName(QString::fromUtf8("form_About"));
    form_About->resize(450, 307);
    form_About->setMinimumSize(QSize(450, 0));
    form_About->setMaximumSize(QSize(450, 307));
    gridLayout = new QGridLayout(form_About);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(form_About);
    label->setObjectName(QString::fromUtf8("lbl_about"));

    gridLayout->addWidget(label, 0, 0, 1, 1);


    retranslateUi(form_About);

    QMetaObject::connectSlotsByName(form_About);
    } // setupUi

    void retranslateUi(QWidget *form_About)
    {
    form_About->setWindowTitle(QApplication::translate("form_About", "About Neutron 3D", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("form_About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt; font-weight:600;\">Neutron 3D</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
        "px; -qt-block-indent:0; text-indent:0px; font-size:20pt; font-weight:600;\"><span style=\" font-size:12pt;\">Version 0.1.0 - Beta</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">_________________________________________________________</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Developers:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\">Andr\303\251 Agenor M. da Luz</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\">Arleson Val"
        "entini Tonnera</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\">Rodrigo Delduca Batista</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(form_About);
    } // retranslateUi

};

namespace Ui {
    class form_About: public Ui_form_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
