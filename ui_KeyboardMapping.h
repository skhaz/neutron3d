/********************************************************************************
** Form generated from reading ui file 'KeyboardMapping.ui'
**
** Created: Thu 5. Feb 17:31:56 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_KEYBOARDMAPPING_H
#define UI_KEYBOARDMAPPING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_KeyboardMapping
{
public:
    QGroupBox *grb_keyboard;
    QPushButton *bt_f2;
    QPushButton *bt_f8;
    QPushButton *bt_5;
    QPushButton *bt_9Pad;
    QPushButton *bt_f6;
    QPushButton *bt_space;
    QPushButton *bt_7;
    QPushButton *bt_s;
    QPushButton *bt_5Pad;
    QPushButton *bt_v;
    QPushButton *bt_coma;
    QPushButton *bt_rightCtrl;
    QPushButton *bt_leftArrow;
    QPushButton *bt_slashPad;
    QPushButton *bt_f1;
    QPushButton *bt_f4;
    QPushButton *bt_plusPad;
    QPushButton *bt_leftCtrl;
    QPushButton *bt_dotComa;
    QPushButton *bt_j;
    QPushButton *bt_7Pad;
    QPushButton *bt_underline;
    QPushButton *bt_pageUp;
    QPushButton *bt_enterPad;
    QPushButton *bt_leftSlash;
    QPushButton *bt_leftBranchet;
    QPushButton *bt_12;
    QPushButton *bt_upArrow;
    QPushButton *bt_w;
    QPushButton *bt_delete;
    QPushButton *bt_0Pad;
    QPushButton *bt_dotPad;
    QPushButton *bt_leftCommand;
    QPushButton *bt_f;
    QPushButton *bt_dot;
    QPushButton *bt_a;
    QPushButton *bt_n;
    QPushButton *bt_d;
    QPushButton *bt_4;
    QPushButton *bt_rightSlash;
    QPushButton *bt_rightArrow;
    QPushButton *bt_deletePad;
    QPushButton *bt_capsLock;
    QPushButton *bt_6;
    QPushButton *bt_6Pad;
    QPushButton *bt_k;
    QPushButton *bt_leftAlt;
    QPushButton *bt_esc;
    QPushButton *bt_9;
    QPushButton *bt_f11;
    QPushButton *bt_q;
    QPushButton *bt_tab;
    QPushButton *bt_rightShift;
    QPushButton *bt_f7;
    QPushButton *bt_o;
    QPushButton *bt_0;
    QPushButton *bt_p;
    QPushButton *bt_t;
    QPushButton *bt_x;
    QPushButton *bt_c;
    QPushButton *bt_leftShift;
    QPushButton *bt_f3;
    QPushButton *bt_numLock;
    QPushButton *bt_rightAlt;
    QPushButton *bt_b;
    QPushButton *bt_3Pad;
    QPushButton *bt_u;
    QPushButton *bt_10;
    QPushButton *bt_8;
    QPushButton *bt_home;
    QPushButton *bt_equal;
    QPushButton *bt_1Pad;
    QPushButton *bt_h;
    QPushButton *bt_end;
    QPushButton *bt_1;
    QPushButton *bt_8Pad;
    QPushButton *bt_insert;
    QPushButton *bt_4Pad;
    QPushButton *bt_rightBranchet;
    QPushButton *bt_2Pad;
    QPushButton *bt_f9;
    QPushButton *bt_rightCommand;
    QPushButton *bt_downArrow;
    QPushButton *bt_y;
    QPushButton *bt_minusPad;
    QPushButton *bt_l;
    QPushButton *bt_f5;
    QPushButton *bt_2;
    QPushButton *bt_r;
    QPushButton *bt_aspas;
    QPushButton *bt_multiplyPad;
    QPushButton *bt_enter;
    QPushButton *bt_e;
    QPushButton *bt_z;
    QPushButton *bt_m;
    QPushButton *bt_3;
    QPushButton *bt_i;
    QPushButton *bt_til;
    QPushButton *bt_g;
    QPushButton *bt_pageDown;
    QGroupBox *grb_comandList;
    QLabel *lbl_group;
    QLabel *lbl_commands;
    QSplitter *splitter;
    QListView *lv_group;
    QListView *lv_commands;
    QGroupBox *grb_commandScript;
    QTextEdit *tbx_scriptEditor;
    QPushButton *bt_acceptScript;
    QPushButton *bt_clearScript;
    QPushButton *bt_ok;
    QPushButton *bt_cancel;
    QLabel *lbl_presetShortcut;
    QComboBox *cbx_presetShortcut;
    QPushButton *bt_exportKeyMap;
    QPushButton *bt_help;
    QGroupBox *grb_description;
    QLabel *lbl_description;
    QPushButton *bt_restoreDefaults;
    QGroupBox *grb_help;
    QLabel *lbl_help;
    QGroupBox *grb_newCommand;
    QComboBox *cbx_group;
    QLineEdit *tbx_descriptionCommand;
    QLabel *lbl_descriptionCommand;
    QLabel *lbl_groupCommand;
    QLabel *lbl_nameCommand;
    QLineEdit *tbx_nameCommand;
    QPushButton *bt_newCommand;
    QPushButton *bt_editCommand;
    QPushButton *bt_deleteNewCommand;

    void setupUi(QDialog *KeyboardMapping)
    {
    if (KeyboardMapping->objectName().isEmpty())
        KeyboardMapping->setObjectName(QString::fromUtf8("KeyboardMapping"));
    KeyboardMapping->resize(1030, 715);
    KeyboardMapping->setMinimumSize(QSize(1030, 715));
    KeyboardMapping->setMaximumSize(QSize(1030, 715));
    KeyboardMapping->setStyleSheet(QString::fromUtf8(""));
    grb_keyboard = new QGroupBox(KeyboardMapping);
    grb_keyboard->setObjectName(QString::fromUtf8("grb_keyboard"));
    grb_keyboard->setGeometry(QRect(5, 260, 1021, 286));
    grb_keyboard->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"	subcontrol-position: top center;\n"
"}"));
    bt_f2 = new QPushButton(grb_keyboard);
    bt_f2->setObjectName(QString::fromUtf8("bt_f2"));
    bt_f2->setGeometry(QRect(120, 10, 40, 30));
    bt_f8 = new QPushButton(grb_keyboard);
    bt_f8->setObjectName(QString::fromUtf8("bt_f8"));
    bt_f8->setGeometry(QRect(415, 10, 40, 30));
    bt_5 = new QPushButton(grb_keyboard);
    bt_5->setObjectName(QString::fromUtf8("bt_5"));
    bt_5->setGeometry(QRect(235, 55, 40, 40));
    bt_9Pad = new QPushButton(grb_keyboard);
    bt_9Pad->setObjectName(QString::fromUtf8("bt_9Pad"));
    bt_9Pad->setGeometry(QRect(925, 100, 40, 40));
    bt_9Pad->setAutoRepeat(false);
    bt_9Pad->setAutoDefault(true);
    bt_f6 = new QPushButton(grb_keyboard);
    bt_f6->setObjectName(QString::fromUtf8("bt_f6"));
    bt_f6->setGeometry(QRect(325, 10, 40, 30));
    bt_space = new QPushButton(grb_keyboard);
    bt_space->setObjectName(QString::fromUtf8("bt_space"));
    bt_space->setGeometry(QRect(205, 235, 221, 40));
    bt_7 = new QPushButton(grb_keyboard);
    bt_7->setObjectName(QString::fromUtf8("bt_7"));
    bt_7->setGeometry(QRect(325, 55, 40, 40));
    bt_s = new QPushButton(grb_keyboard);
    bt_s->setObjectName(QString::fromUtf8("bt_s"));
    bt_s->setGeometry(QRect(140, 145, 40, 40));
    bt_5Pad = new QPushButton(grb_keyboard);
    bt_5Pad->setObjectName(QString::fromUtf8("bt_5Pad"));
    bt_5Pad->setGeometry(QRect(880, 145, 40, 40));
    bt_v = new QPushButton(grb_keyboard);
    bt_v->setObjectName(QString::fromUtf8("bt_v"));
    bt_v->setGeometry(QRect(250, 190, 40, 40));
    bt_coma = new QPushButton(grb_keyboard);
    bt_coma->setObjectName(QString::fromUtf8("bt_coma"));
    bt_coma->setGeometry(QRect(430, 190, 40, 40));
    bt_rightCtrl = new QPushButton(grb_keyboard);
    bt_rightCtrl->setObjectName(QString::fromUtf8("bt_rightCtrl"));
    bt_rightCtrl->setGeometry(QRect(564, 235, 91, 40));
    bt_leftArrow = new QPushButton(grb_keyboard);
    bt_leftArrow->setObjectName(QString::fromUtf8("bt_leftArrow"));
    bt_leftArrow->setGeometry(QRect(680, 235, 40, 40));
    bt_slashPad = new QPushButton(grb_keyboard);
    bt_slashPad->setObjectName(QString::fromUtf8("bt_slashPad"));
    bt_slashPad->setGeometry(QRect(880, 55, 40, 40));
    bt_f1 = new QPushButton(grb_keyboard);
    bt_f1->setObjectName(QString::fromUtf8("bt_f1"));
    bt_f1->setGeometry(QRect(75, 10, 40, 30));
    bt_f4 = new QPushButton(grb_keyboard);
    bt_f4->setObjectName(QString::fromUtf8("bt_f4"));
    bt_f4->setGeometry(QRect(210, 10, 40, 30));
    bt_plusPad = new QPushButton(grb_keyboard);
    bt_plusPad->setObjectName(QString::fromUtf8("bt_plusPad"));
    bt_plusPad->setGeometry(QRect(970, 100, 40, 86));
    bt_plusPad->setAutoRepeat(false);
    bt_plusPad->setAutoDefault(true);
    bt_leftCtrl = new QPushButton(grb_keyboard);
    bt_leftCtrl->setObjectName(QString::fromUtf8("bt_leftCtrl"));
    bt_leftCtrl->setGeometry(QRect(10, 235, 56, 40));
    bt_dotComa = new QPushButton(grb_keyboard);
    bt_dotComa->setObjectName(QString::fromUtf8("bt_dotComa"));
    bt_dotComa->setGeometry(QRect(500, 145, 40, 40));
    bt_j = new QPushButton(grb_keyboard);
    bt_j->setObjectName(QString::fromUtf8("bt_j"));
    bt_j->setGeometry(QRect(365, 145, 40, 40));
    bt_7Pad = new QPushButton(grb_keyboard);
    bt_7Pad->setObjectName(QString::fromUtf8("bt_7Pad"));
    bt_7Pad->setGeometry(QRect(835, 100, 40, 40));
    bt_underline = new QPushButton(grb_keyboard);
    bt_underline->setObjectName(QString::fromUtf8("bt_underline"));
    bt_underline->setGeometry(QRect(505, 55, 40, 40));
    bt_pageUp = new QPushButton(grb_keyboard);
    bt_pageUp->setObjectName(QString::fromUtf8("bt_pageUp"));
    bt_pageUp->setGeometry(QRect(770, 55, 40, 40));
    bt_enterPad = new QPushButton(grb_keyboard);
    bt_enterPad->setObjectName(QString::fromUtf8("bt_enterPad"));
    bt_enterPad->setGeometry(QRect(970, 190, 40, 86));
    bt_enterPad->setAutoRepeat(false);
    bt_enterPad->setAutoDefault(true);
    bt_leftSlash = new QPushButton(grb_keyboard);
    bt_leftSlash->setObjectName(QString::fromUtf8("bt_leftSlash"));
    bt_leftSlash->setGeometry(QRect(615, 100, 40, 40));
    bt_leftBranchet = new QPushButton(grb_keyboard);
    bt_leftBranchet->setObjectName(QString::fromUtf8("bt_leftBranchet"));
    bt_leftBranchet->setGeometry(QRect(525, 100, 40, 40));
    bt_12 = new QPushButton(grb_keyboard);
    bt_12->setObjectName(QString::fromUtf8("bt_12"));
    bt_12->setGeometry(QRect(615, 10, 40, 30));
    bt_upArrow = new QPushButton(grb_keyboard);
    bt_upArrow->setObjectName(QString::fromUtf8("bt_upArrow"));
    bt_upArrow->setGeometry(QRect(725, 190, 40, 40));
    bt_w = new QPushButton(grb_keyboard);
    bt_w->setObjectName(QString::fromUtf8("bt_w"));
    bt_w->setGeometry(QRect(120, 100, 40, 40));
    bt_delete = new QPushButton(grb_keyboard);
    bt_delete->setObjectName(QString::fromUtf8("bt_delete"));
    bt_delete->setGeometry(QRect(595, 55, 61, 40));
    bt_0Pad = new QPushButton(grb_keyboard);
    bt_0Pad->setObjectName(QString::fromUtf8("bt_0Pad"));
    bt_0Pad->setGeometry(QRect(835, 235, 86, 40));
    bt_dotPad = new QPushButton(grb_keyboard);
    bt_dotPad->setObjectName(QString::fromUtf8("bt_dotPad"));
    bt_dotPad->setGeometry(QRect(925, 235, 40, 40));
    bt_dotPad->setAutoRepeat(false);
    bt_dotPad->setAutoDefault(true);
    bt_leftCommand = new QPushButton(grb_keyboard);
    bt_leftCommand->setObjectName(QString::fromUtf8("bt_leftCommand"));
    bt_leftCommand->setGeometry(QRect(114, 235, 86, 40));
    bt_leftCommand->setStyleSheet(QString::fromUtf8(""));
    bt_f = new QPushButton(grb_keyboard);
    bt_f->setObjectName(QString::fromUtf8("bt_f"));
    bt_f->setGeometry(QRect(230, 145, 40, 40));
    bt_f->setStyleSheet(QString::fromUtf8("QPushButton::checked {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(132, 92, 92, 255), stop:0.5 rgba(110, 70, 70, 255), stop:0.59 rgba(120, 80, 80, 255), stop:1 rgba(132, 92, 92, 255));\n"
"}\n"
"\n"
""));
    bt_f->setCheckable(true);
    bt_f->setChecked(true);
    bt_dot = new QPushButton(grb_keyboard);
    bt_dot->setObjectName(QString::fromUtf8("bt_dot"));
    bt_dot->setGeometry(QRect(475, 190, 40, 40));
    bt_a = new QPushButton(grb_keyboard);
    bt_a->setObjectName(QString::fromUtf8("bt_a"));
    bt_a->setGeometry(QRect(95, 145, 40, 40));
    bt_n = new QPushButton(grb_keyboard);
    bt_n->setObjectName(QString::fromUtf8("bt_n"));
    bt_n->setGeometry(QRect(340, 190, 40, 40));
    bt_d = new QPushButton(grb_keyboard);
    bt_d->setObjectName(QString::fromUtf8("bt_d"));
    bt_d->setGeometry(QRect(185, 145, 40, 40));
    bt_4 = new QPushButton(grb_keyboard);
    bt_4->setObjectName(QString::fromUtf8("bt_4"));
    bt_4->setGeometry(QRect(190, 55, 40, 40));
    bt_rightSlash = new QPushButton(grb_keyboard);
    bt_rightSlash->setObjectName(QString::fromUtf8("bt_rightSlash"));
    bt_rightSlash->setGeometry(QRect(520, 190, 40, 40));
    bt_rightArrow = new QPushButton(grb_keyboard);
    bt_rightArrow->setObjectName(QString::fromUtf8("bt_rightArrow"));
    bt_rightArrow->setGeometry(QRect(770, 235, 40, 40));
    bt_rightArrow->setAutoRepeat(false);
    bt_rightArrow->setAutoDefault(true);
    bt_deletePad = new QPushButton(grb_keyboard);
    bt_deletePad->setObjectName(QString::fromUtf8("bt_deletePad"));
    bt_deletePad->setGeometry(QRect(680, 100, 40, 40));
    bt_capsLock = new QPushButton(grb_keyboard);
    bt_capsLock->setObjectName(QString::fromUtf8("bt_capsLock"));
    bt_capsLock->setGeometry(QRect(10, 145, 81, 40));
    bt_6 = new QPushButton(grb_keyboard);
    bt_6->setObjectName(QString::fromUtf8("bt_6"));
    bt_6->setGeometry(QRect(280, 55, 40, 40));
    bt_6Pad = new QPushButton(grb_keyboard);
    bt_6Pad->setObjectName(QString::fromUtf8("bt_6Pad"));
    bt_6Pad->setGeometry(QRect(925, 145, 40, 40));
    bt_6Pad->setAutoRepeat(false);
    bt_6Pad->setAutoDefault(true);
    bt_k = new QPushButton(grb_keyboard);
    bt_k->setObjectName(QString::fromUtf8("bt_k"));
    bt_k->setGeometry(QRect(410, 145, 40, 40));
    bt_leftAlt = new QPushButton(grb_keyboard);
    bt_leftAlt->setObjectName(QString::fromUtf8("bt_leftAlt"));
    bt_leftAlt->setGeometry(QRect(70, 235, 40, 40));
    bt_esc = new QPushButton(grb_keyboard);
    bt_esc->setObjectName(QString::fromUtf8("bt_esc"));
    bt_esc->setGeometry(QRect(10, 10, 40, 30));
    bt_9 = new QPushButton(grb_keyboard);
    bt_9->setObjectName(QString::fromUtf8("bt_9"));
    bt_9->setGeometry(QRect(415, 55, 40, 40));
    bt_f11 = new QPushButton(grb_keyboard);
    bt_f11->setObjectName(QString::fromUtf8("bt_f11"));
    bt_f11->setGeometry(QRect(570, 10, 40, 30));
    bt_q = new QPushButton(grb_keyboard);
    bt_q->setObjectName(QString::fromUtf8("bt_q"));
    bt_q->setGeometry(QRect(75, 100, 40, 40));
    bt_tab = new QPushButton(grb_keyboard);
    bt_tab->setObjectName(QString::fromUtf8("bt_tab"));
    bt_tab->setGeometry(QRect(10, 100, 61, 40));
    bt_rightShift = new QPushButton(grb_keyboard);
    bt_rightShift->setObjectName(QString::fromUtf8("bt_rightShift"));
    bt_rightShift->setGeometry(QRect(565, 190, 91, 40));
    bt_f7 = new QPushButton(grb_keyboard);
    bt_f7->setObjectName(QString::fromUtf8("bt_f7"));
    bt_f7->setGeometry(QRect(370, 10, 40, 30));
    bt_o = new QPushButton(grb_keyboard);
    bt_o->setObjectName(QString::fromUtf8("bt_o"));
    bt_o->setGeometry(QRect(435, 100, 40, 40));
    bt_0 = new QPushButton(grb_keyboard);
    bt_0->setObjectName(QString::fromUtf8("bt_0"));
    bt_0->setGeometry(QRect(460, 55, 40, 40));
    bt_p = new QPushButton(grb_keyboard);
    bt_p->setObjectName(QString::fromUtf8("bt_p"));
    bt_p->setGeometry(QRect(480, 100, 40, 40));
    bt_t = new QPushButton(grb_keyboard);
    bt_t->setObjectName(QString::fromUtf8("bt_t"));
    bt_t->setGeometry(QRect(255, 100, 40, 40));
    bt_x = new QPushButton(grb_keyboard);
    bt_x->setObjectName(QString::fromUtf8("bt_x"));
    bt_x->setGeometry(QRect(160, 190, 40, 40));
    bt_c = new QPushButton(grb_keyboard);
    bt_c->setObjectName(QString::fromUtf8("bt_c"));
    bt_c->setGeometry(QRect(205, 190, 40, 40));
    bt_leftShift = new QPushButton(grb_keyboard);
    bt_leftShift->setObjectName(QString::fromUtf8("bt_leftShift"));
    bt_leftShift->setGeometry(QRect(10, 190, 101, 40));
    bt_f3 = new QPushButton(grb_keyboard);
    bt_f3->setObjectName(QString::fromUtf8("bt_f3"));
    bt_f3->setGeometry(QRect(165, 10, 40, 30));
    bt_numLock = new QPushButton(grb_keyboard);
    bt_numLock->setObjectName(QString::fromUtf8("bt_numLock"));
    bt_numLock->setGeometry(QRect(835, 55, 40, 40));
    bt_rightAlt = new QPushButton(grb_keyboard);
    bt_rightAlt->setObjectName(QString::fromUtf8("bt_rightAlt"));
    bt_rightAlt->setGeometry(QRect(520, 235, 40, 40));
    bt_b = new QPushButton(grb_keyboard);
    bt_b->setObjectName(QString::fromUtf8("bt_b"));
    bt_b->setGeometry(QRect(295, 190, 40, 40));
    bt_3Pad = new QPushButton(grb_keyboard);
    bt_3Pad->setObjectName(QString::fromUtf8("bt_3Pad"));
    bt_3Pad->setGeometry(QRect(925, 190, 40, 40));
    bt_3Pad->setAutoRepeat(false);
    bt_3Pad->setAutoDefault(true);
    bt_u = new QPushButton(grb_keyboard);
    bt_u->setObjectName(QString::fromUtf8("bt_u"));
    bt_u->setGeometry(QRect(345, 100, 40, 40));
    bt_10 = new QPushButton(grb_keyboard);
    bt_10->setObjectName(QString::fromUtf8("bt_10"));
    bt_10->setGeometry(QRect(525, 10, 40, 30));
    bt_8 = new QPushButton(grb_keyboard);
    bt_8->setObjectName(QString::fromUtf8("bt_8"));
    bt_8->setGeometry(QRect(370, 55, 40, 40));
    bt_home = new QPushButton(grb_keyboard);
    bt_home->setObjectName(QString::fromUtf8("bt_home"));
    bt_home->setGeometry(QRect(725, 55, 40, 40));
    bt_equal = new QPushButton(grb_keyboard);
    bt_equal->setObjectName(QString::fromUtf8("bt_equal"));
    bt_equal->setGeometry(QRect(550, 55, 40, 40));
    bt_1Pad = new QPushButton(grb_keyboard);
    bt_1Pad->setObjectName(QString::fromUtf8("bt_1Pad"));
    bt_1Pad->setGeometry(QRect(835, 190, 40, 40));
    bt_h = new QPushButton(grb_keyboard);
    bt_h->setObjectName(QString::fromUtf8("bt_h"));
    bt_h->setGeometry(QRect(320, 145, 40, 40));
    bt_end = new QPushButton(grb_keyboard);
    bt_end->setObjectName(QString::fromUtf8("bt_end"));
    bt_end->setGeometry(QRect(725, 100, 40, 40));
    bt_1 = new QPushButton(grb_keyboard);
    bt_1->setObjectName(QString::fromUtf8("bt_1"));
    bt_1->setGeometry(QRect(55, 55, 40, 40));
    bt_1->setAutoRepeat(false);
    bt_8Pad = new QPushButton(grb_keyboard);
    bt_8Pad->setObjectName(QString::fromUtf8("bt_8Pad"));
    bt_8Pad->setGeometry(QRect(880, 100, 40, 40));
    bt_insert = new QPushButton(grb_keyboard);
    bt_insert->setObjectName(QString::fromUtf8("bt_insert"));
    bt_insert->setGeometry(QRect(680, 55, 40, 40));
    bt_4Pad = new QPushButton(grb_keyboard);
    bt_4Pad->setObjectName(QString::fromUtf8("bt_4Pad"));
    bt_4Pad->setGeometry(QRect(835, 145, 40, 40));
    bt_rightBranchet = new QPushButton(grb_keyboard);
    bt_rightBranchet->setObjectName(QString::fromUtf8("bt_rightBranchet"));
    bt_rightBranchet->setGeometry(QRect(570, 100, 40, 40));
    bt_2Pad = new QPushButton(grb_keyboard);
    bt_2Pad->setObjectName(QString::fromUtf8("bt_2Pad"));
    bt_2Pad->setGeometry(QRect(880, 190, 40, 40));
    bt_f9 = new QPushButton(grb_keyboard);
    bt_f9->setObjectName(QString::fromUtf8("bt_f9"));
    bt_f9->setGeometry(QRect(480, 10, 40, 30));
    bt_rightCommand = new QPushButton(grb_keyboard);
    bt_rightCommand->setObjectName(QString::fromUtf8("bt_rightCommand"));
    bt_rightCommand->setGeometry(QRect(430, 235, 86, 40));
    bt_downArrow = new QPushButton(grb_keyboard);
    bt_downArrow->setObjectName(QString::fromUtf8("bt_downArrow"));
    bt_downArrow->setGeometry(QRect(725, 235, 40, 40));
    bt_y = new QPushButton(grb_keyboard);
    bt_y->setObjectName(QString::fromUtf8("bt_y"));
    bt_y->setGeometry(QRect(300, 100, 40, 40));
    bt_minusPad = new QPushButton(grb_keyboard);
    bt_minusPad->setObjectName(QString::fromUtf8("bt_minusPad"));
    bt_minusPad->setGeometry(QRect(970, 55, 40, 40));
    bt_l = new QPushButton(grb_keyboard);
    bt_l->setObjectName(QString::fromUtf8("bt_l"));
    bt_l->setGeometry(QRect(455, 145, 40, 40));
    bt_f5 = new QPushButton(grb_keyboard);
    bt_f5->setObjectName(QString::fromUtf8("bt_f5"));
    bt_f5->setGeometry(QRect(280, 10, 40, 30));
    bt_2 = new QPushButton(grb_keyboard);
    bt_2->setObjectName(QString::fromUtf8("bt_2"));
    bt_2->setGeometry(QRect(100, 55, 40, 40));
    bt_r = new QPushButton(grb_keyboard);
    bt_r->setObjectName(QString::fromUtf8("bt_r"));
    bt_r->setGeometry(QRect(210, 100, 40, 40));
    bt_aspas = new QPushButton(grb_keyboard);
    bt_aspas->setObjectName(QString::fromUtf8("bt_aspas"));
    bt_aspas->setGeometry(QRect(545, 145, 40, 40));
    bt_multiplyPad = new QPushButton(grb_keyboard);
    bt_multiplyPad->setObjectName(QString::fromUtf8("bt_multiplyPad"));
    bt_multiplyPad->setGeometry(QRect(925, 55, 40, 40));
    bt_enter = new QPushButton(grb_keyboard);
    bt_enter->setObjectName(QString::fromUtf8("bt_enter"));
    bt_enter->setGeometry(QRect(590, 145, 66, 40));
    bt_e = new QPushButton(grb_keyboard);
    bt_e->setObjectName(QString::fromUtf8("bt_e"));
    bt_e->setGeometry(QRect(165, 100, 40, 40));
    bt_z = new QPushButton(grb_keyboard);
    bt_z->setObjectName(QString::fromUtf8("bt_z"));
    bt_z->setGeometry(QRect(115, 190, 40, 40));
    bt_m = new QPushButton(grb_keyboard);
    bt_m->setObjectName(QString::fromUtf8("bt_m"));
    bt_m->setGeometry(QRect(385, 190, 40, 40));
    bt_3 = new QPushButton(grb_keyboard);
    bt_3->setObjectName(QString::fromUtf8("bt_3"));
    bt_3->setGeometry(QRect(145, 55, 40, 40));
    bt_i = new QPushButton(grb_keyboard);
    bt_i->setObjectName(QString::fromUtf8("bt_i"));
    bt_i->setGeometry(QRect(390, 100, 40, 40));
    bt_til = new QPushButton(grb_keyboard);
    bt_til->setObjectName(QString::fromUtf8("bt_til"));
    bt_til->setGeometry(QRect(10, 55, 40, 40));
    bt_g = new QPushButton(grb_keyboard);
    bt_g->setObjectName(QString::fromUtf8("bt_g"));
    bt_g->setGeometry(QRect(275, 145, 40, 40));
    bt_g->setStyleSheet(QString::fromUtf8("QPushButton::checked {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(92, 132, 92, 255), stop:0.5 rgba(70, 110, 70, 255), stop:0.59 rgba(80, 120, 80, 255), stop:1 rgba(92, 132, 92, 255));\n"
"}\n"
""));
    bt_g->setCheckable(true);
    bt_g->setChecked(true);
    bt_pageDown = new QPushButton(grb_keyboard);
    bt_pageDown->setObjectName(QString::fromUtf8("bt_pageDown"));
    bt_pageDown->setGeometry(QRect(770, 100, 40, 40));
    bt_pageDown->setAutoRepeat(false);
    bt_pageDown->setAutoDefault(true);
    grb_comandList = new QGroupBox(KeyboardMapping);
    grb_comandList->setObjectName(QString::fromUtf8("grb_comandList"));
    grb_comandList->setGeometry(QRect(5, 55, 521, 201));
    lbl_group = new QLabel(grb_comandList);
    lbl_group->setObjectName(QString::fromUtf8("lbl_group"));
    lbl_group->setGeometry(QRect(15, 0, 81, 25));
    lbl_group->setLayoutDirection(Qt::LeftToRight);
    lbl_commands = new QLabel(grb_comandList);
    lbl_commands->setObjectName(QString::fromUtf8("lbl_commands"));
    lbl_commands->setGeometry(QRect(270, 0, 81, 25));
    lbl_commands->setLayoutDirection(Qt::LeftToRight);
    splitter = new QSplitter(grb_comandList);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setGeometry(QRect(10, 20, 500, 175));
    splitter->setOrientation(Qt::Horizontal);
    splitter->setHandleWidth(4);
    splitter->setChildrenCollapsible(false);
    lv_group = new QListView(splitter);
    lv_group->setObjectName(QString::fromUtf8("lv_group"));
    splitter->addWidget(lv_group);
    lv_commands = new QListView(splitter);
    lv_commands->setObjectName(QString::fromUtf8("lv_commands"));
    splitter->addWidget(lv_commands);
    grb_commandScript = new QGroupBox(KeyboardMapping);
    grb_commandScript->setObjectName(QString::fromUtf8("grb_commandScript"));
    grb_commandScript->setGeometry(QRect(505, 550, 521, 156));
    grb_commandScript->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"	subcontrol-position: top center;\n"
"}"));
    tbx_scriptEditor = new QTextEdit(grb_commandScript);
    tbx_scriptEditor->setObjectName(QString::fromUtf8("tbx_scriptEditor"));
    tbx_scriptEditor->setGeometry(QRect(5, 20, 406, 131));
    tbx_scriptEditor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    tbx_scriptEditor->setLineWrapMode(QTextEdit::NoWrap);
    bt_acceptScript = new QPushButton(grb_commandScript);
    bt_acceptScript->setObjectName(QString::fromUtf8("bt_acceptScript"));
    bt_acceptScript->setGeometry(QRect(415, 20, 100, 30));
    bt_clearScript = new QPushButton(grb_commandScript);
    bt_clearScript->setObjectName(QString::fromUtf8("bt_clearScript"));
    bt_clearScript->setGeometry(QRect(415, 55, 100, 30));
    bt_ok = new QPushButton(KeyboardMapping);
    bt_ok->setObjectName(QString::fromUtf8("bt_ok"));
    bt_ok->setGeometry(QRect(920, 55, 100, 30));
    bt_cancel = new QPushButton(KeyboardMapping);
    bt_cancel->setObjectName(QString::fromUtf8("bt_cancel"));
    bt_cancel->setGeometry(QRect(920, 90, 100, 30));
    lbl_presetShortcut = new QLabel(KeyboardMapping);
    lbl_presetShortcut->setObjectName(QString::fromUtf8("lbl_presetShortcut"));
    lbl_presetShortcut->setGeometry(QRect(20, 15, 76, 25));
    cbx_presetShortcut = new QComboBox(KeyboardMapping);
    cbx_presetShortcut->setObjectName(QString::fromUtf8("cbx_presetShortcut"));
    cbx_presetShortcut->setGeometry(QRect(100, 15, 161, 25));
    bt_exportKeyMap = new QPushButton(KeyboardMapping);
    bt_exportKeyMap->setObjectName(QString::fromUtf8("bt_exportKeyMap"));
    bt_exportKeyMap->setGeometry(QRect(280, 15, 100, 25));
    bt_help = new QPushButton(KeyboardMapping);
    bt_help->setObjectName(QString::fromUtf8("bt_help"));
    bt_help->setGeometry(QRect(920, 125, 100, 30));
    grb_description = new QGroupBox(KeyboardMapping);
    grb_description->setObjectName(QString::fromUtf8("grb_description"));
    grb_description->setGeometry(QRect(530, 55, 381, 116));
    grb_description->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"	subcontrol-position: top center;\n"
"}"));
    lbl_description = new QLabel(grb_description);
    lbl_description->setObjectName(QString::fromUtf8("lbl_description"));
    lbl_description->setGeometry(QRect(10, 25, 361, 81));
    lbl_description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    lbl_description->setWordWrap(true);
    bt_restoreDefaults = new QPushButton(KeyboardMapping);
    bt_restoreDefaults->setObjectName(QString::fromUtf8("bt_restoreDefaults"));
    bt_restoreDefaults->setGeometry(QRect(385, 15, 100, 25));
    grb_help = new QGroupBox(KeyboardMapping);
    grb_help->setObjectName(QString::fromUtf8("grb_help"));
    grb_help->setGeometry(QRect(530, 175, 381, 81));
    grb_help->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"	subcontrol-position: top center;\n"
"}"));
    lbl_help = new QLabel(grb_help);
    lbl_help->setObjectName(QString::fromUtf8("lbl_help"));
    lbl_help->setGeometry(QRect(10, 25, 361, 51));
    lbl_help->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    grb_newCommand = new QGroupBox(KeyboardMapping);
    grb_newCommand->setObjectName(QString::fromUtf8("grb_newCommand"));
    grb_newCommand->setGeometry(QRect(5, 550, 496, 156));
    grb_newCommand->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"	subcontrol-position: top center;\n"
"}"));
    cbx_group = new QComboBox(grb_newCommand);
    cbx_group->setObjectName(QString::fromUtf8("cbx_group"));
    cbx_group->setGeometry(QRect(95, 90, 176, 25));
    tbx_descriptionCommand = new QLineEdit(grb_newCommand);
    tbx_descriptionCommand->setObjectName(QString::fromUtf8("tbx_descriptionCommand"));
    tbx_descriptionCommand->setGeometry(QRect(95, 60, 276, 22));
    lbl_descriptionCommand = new QLabel(grb_newCommand);
    lbl_descriptionCommand->setObjectName(QString::fromUtf8("lbl_descriptionCommand"));
    lbl_descriptionCommand->setGeometry(QRect(10, 60, 81, 22));
    lbl_descriptionCommand->setLayoutDirection(Qt::LeftToRight);
    lbl_groupCommand = new QLabel(grb_newCommand);
    lbl_groupCommand->setObjectName(QString::fromUtf8("lbl_groupCommand"));
    lbl_groupCommand->setGeometry(QRect(10, 90, 81, 25));
    lbl_groupCommand->setLayoutDirection(Qt::LeftToRight);
    lbl_nameCommand = new QLabel(grb_newCommand);
    lbl_nameCommand->setObjectName(QString::fromUtf8("lbl_nameCommand"));
    lbl_nameCommand->setGeometry(QRect(10, 30, 81, 22));
    lbl_nameCommand->setLayoutDirection(Qt::LeftToRight);
    tbx_nameCommand = new QLineEdit(grb_newCommand);
    tbx_nameCommand->setObjectName(QString::fromUtf8("tbx_nameCommand"));
    tbx_nameCommand->setGeometry(QRect(95, 30, 276, 22));
    bt_newCommand = new QPushButton(grb_newCommand);
    bt_newCommand->setObjectName(QString::fromUtf8("bt_newCommand"));
    bt_newCommand->setGeometry(QRect(385, 25, 100, 30));
    bt_editCommand = new QPushButton(grb_newCommand);
    bt_editCommand->setObjectName(QString::fromUtf8("bt_editCommand"));
    bt_editCommand->setGeometry(QRect(385, 55, 100, 30));
    bt_deleteNewCommand = new QPushButton(grb_newCommand);
    bt_deleteNewCommand->setObjectName(QString::fromUtf8("bt_deleteNewCommand"));
    bt_deleteNewCommand->setGeometry(QRect(385, 85, 100, 30));
    QWidget::setTabOrder(cbx_presetShortcut, bt_exportKeyMap);
    QWidget::setTabOrder(bt_exportKeyMap, bt_restoreDefaults);
    QWidget::setTabOrder(bt_restoreDefaults, lv_group);
    QWidget::setTabOrder(lv_group, lv_commands);
    QWidget::setTabOrder(lv_commands, bt_esc);
    QWidget::setTabOrder(bt_esc, bt_f1);
    QWidget::setTabOrder(bt_f1, bt_f2);
    QWidget::setTabOrder(bt_f2, bt_f3);
    QWidget::setTabOrder(bt_f3, bt_f4);
    QWidget::setTabOrder(bt_f4, bt_f5);
    QWidget::setTabOrder(bt_f5, bt_f6);
    QWidget::setTabOrder(bt_f6, bt_f7);
    QWidget::setTabOrder(bt_f7, bt_f8);
    QWidget::setTabOrder(bt_f8, bt_f9);
    QWidget::setTabOrder(bt_f9, bt_10);
    QWidget::setTabOrder(bt_10, bt_f11);
    QWidget::setTabOrder(bt_f11, bt_12);
    QWidget::setTabOrder(bt_12, bt_til);
    QWidget::setTabOrder(bt_til, bt_1);
    QWidget::setTabOrder(bt_1, bt_2);
    QWidget::setTabOrder(bt_2, bt_3);
    QWidget::setTabOrder(bt_3, bt_4);
    QWidget::setTabOrder(bt_4, bt_5);
    QWidget::setTabOrder(bt_5, bt_6);
    QWidget::setTabOrder(bt_6, bt_7);
    QWidget::setTabOrder(bt_7, bt_8);
    QWidget::setTabOrder(bt_8, bt_9);
    QWidget::setTabOrder(bt_9, bt_0);
    QWidget::setTabOrder(bt_0, bt_underline);
    QWidget::setTabOrder(bt_underline, bt_equal);
    QWidget::setTabOrder(bt_equal, bt_delete);
    QWidget::setTabOrder(bt_delete, bt_tab);
    QWidget::setTabOrder(bt_tab, bt_q);
    QWidget::setTabOrder(bt_q, bt_w);
    QWidget::setTabOrder(bt_w, bt_e);
    QWidget::setTabOrder(bt_e, bt_r);
    QWidget::setTabOrder(bt_r, bt_t);
    QWidget::setTabOrder(bt_t, bt_y);
    QWidget::setTabOrder(bt_y, bt_u);
    QWidget::setTabOrder(bt_u, bt_i);
    QWidget::setTabOrder(bt_i, bt_o);
    QWidget::setTabOrder(bt_o, bt_p);
    QWidget::setTabOrder(bt_p, bt_leftBranchet);
    QWidget::setTabOrder(bt_leftBranchet, bt_rightBranchet);
    QWidget::setTabOrder(bt_rightBranchet, bt_leftSlash);
    QWidget::setTabOrder(bt_leftSlash, bt_capsLock);
    QWidget::setTabOrder(bt_capsLock, bt_a);
    QWidget::setTabOrder(bt_a, bt_s);
    QWidget::setTabOrder(bt_s, bt_d);
    QWidget::setTabOrder(bt_d, bt_f);
    QWidget::setTabOrder(bt_f, bt_g);
    QWidget::setTabOrder(bt_g, bt_h);
    QWidget::setTabOrder(bt_h, bt_j);
    QWidget::setTabOrder(bt_j, bt_k);
    QWidget::setTabOrder(bt_k, bt_l);
    QWidget::setTabOrder(bt_l, bt_dotComa);
    QWidget::setTabOrder(bt_dotComa, bt_aspas);
    QWidget::setTabOrder(bt_aspas, bt_enter);
    QWidget::setTabOrder(bt_enter, bt_leftShift);
    QWidget::setTabOrder(bt_leftShift, bt_z);
    QWidget::setTabOrder(bt_z, bt_x);
    QWidget::setTabOrder(bt_x, bt_c);
    QWidget::setTabOrder(bt_c, bt_v);
    QWidget::setTabOrder(bt_v, bt_b);
    QWidget::setTabOrder(bt_b, bt_n);
    QWidget::setTabOrder(bt_n, bt_m);
    QWidget::setTabOrder(bt_m, bt_coma);
    QWidget::setTabOrder(bt_coma, bt_dot);
    QWidget::setTabOrder(bt_dot, bt_rightSlash);
    QWidget::setTabOrder(bt_rightSlash, bt_rightShift);
    QWidget::setTabOrder(bt_rightShift, bt_leftCtrl);
    QWidget::setTabOrder(bt_leftCtrl, bt_leftAlt);
    QWidget::setTabOrder(bt_leftAlt, bt_leftCommand);
    QWidget::setTabOrder(bt_leftCommand, bt_space);
    QWidget::setTabOrder(bt_space, bt_rightCommand);
    QWidget::setTabOrder(bt_rightCommand, bt_rightAlt);
    QWidget::setTabOrder(bt_rightAlt, bt_rightCtrl);
    QWidget::setTabOrder(bt_rightCtrl, bt_insert);
    QWidget::setTabOrder(bt_insert, bt_home);
    QWidget::setTabOrder(bt_home, bt_pageUp);
    QWidget::setTabOrder(bt_pageUp, bt_deletePad);
    QWidget::setTabOrder(bt_deletePad, bt_end);
    QWidget::setTabOrder(bt_end, bt_pageDown);
    QWidget::setTabOrder(bt_pageDown, bt_upArrow);
    QWidget::setTabOrder(bt_upArrow, bt_leftArrow);
    QWidget::setTabOrder(bt_leftArrow, bt_downArrow);
    QWidget::setTabOrder(bt_downArrow, bt_rightArrow);
    QWidget::setTabOrder(bt_rightArrow, bt_numLock);
    QWidget::setTabOrder(bt_numLock, bt_slashPad);
    QWidget::setTabOrder(bt_slashPad, bt_multiplyPad);
    QWidget::setTabOrder(bt_multiplyPad, bt_minusPad);
    QWidget::setTabOrder(bt_minusPad, bt_7Pad);
    QWidget::setTabOrder(bt_7Pad, bt_8Pad);
    QWidget::setTabOrder(bt_8Pad, bt_9Pad);
    QWidget::setTabOrder(bt_9Pad, bt_plusPad);
    QWidget::setTabOrder(bt_plusPad, bt_4Pad);
    QWidget::setTabOrder(bt_4Pad, bt_5Pad);
    QWidget::setTabOrder(bt_5Pad, bt_6Pad);
    QWidget::setTabOrder(bt_6Pad, bt_1Pad);
    QWidget::setTabOrder(bt_1Pad, bt_2Pad);
    QWidget::setTabOrder(bt_2Pad, bt_3Pad);
    QWidget::setTabOrder(bt_3Pad, bt_enterPad);
    QWidget::setTabOrder(bt_enterPad, bt_0Pad);
    QWidget::setTabOrder(bt_0Pad, bt_dotPad);
    QWidget::setTabOrder(bt_dotPad, tbx_nameCommand);
    QWidget::setTabOrder(tbx_nameCommand, tbx_descriptionCommand);
    QWidget::setTabOrder(tbx_descriptionCommand, cbx_group);
    QWidget::setTabOrder(cbx_group, bt_newCommand);
    QWidget::setTabOrder(bt_newCommand, bt_editCommand);
    QWidget::setTabOrder(bt_editCommand, bt_deleteNewCommand);
    QWidget::setTabOrder(bt_deleteNewCommand, tbx_scriptEditor);
    QWidget::setTabOrder(tbx_scriptEditor, bt_acceptScript);
    QWidget::setTabOrder(bt_acceptScript, bt_clearScript);
    QWidget::setTabOrder(bt_clearScript, bt_ok);
    QWidget::setTabOrder(bt_ok, bt_cancel);
    QWidget::setTabOrder(bt_cancel, bt_help);

    retranslateUi(KeyboardMapping);

    QMetaObject::connectSlotsByName(KeyboardMapping);
    } // setupUi

    void retranslateUi(QDialog *KeyboardMapping)
    {
    KeyboardMapping->setWindowTitle(QApplication::translate("KeyboardMapping", "Keyboard_Mapping", 0, QApplication::UnicodeUTF8));
    grb_keyboard->setTitle(QString());
    bt_f2->setText(QApplication::translate("KeyboardMapping", "F2", 0, QApplication::UnicodeUTF8));
    bt_f8->setText(QApplication::translate("KeyboardMapping", "F8", 0, QApplication::UnicodeUTF8));
    bt_5->setText(QApplication::translate("KeyboardMapping", "$\n"
"5", 0, QApplication::UnicodeUTF8));
    bt_9Pad->setText(QApplication::translate("KeyboardMapping", "9", 0, QApplication::UnicodeUTF8));
    bt_f6->setText(QApplication::translate("KeyboardMapping", "F6", 0, QApplication::UnicodeUTF8));
    bt_space->setText(QApplication::translate("KeyboardMapping", "Space", 0, QApplication::UnicodeUTF8));
    bt_7->setText(QApplication::translate("KeyboardMapping", "&&\n"
"7", 0, QApplication::UnicodeUTF8));
    bt_s->setText(QApplication::translate("KeyboardMapping", "S", 0, QApplication::UnicodeUTF8));
    bt_5Pad->setText(QApplication::translate("KeyboardMapping", "5", 0, QApplication::UnicodeUTF8));
    bt_v->setText(QApplication::translate("KeyboardMapping", "V", 0, QApplication::UnicodeUTF8));
    bt_coma->setText(QApplication::translate("KeyboardMapping", "<\n"
",", 0, QApplication::UnicodeUTF8));
    bt_rightCtrl->setText(QApplication::translate("KeyboardMapping", "Ctrl", 0, QApplication::UnicodeUTF8));
    bt_leftArrow->setText(QApplication::translate("KeyboardMapping", "Left", 0, QApplication::UnicodeUTF8));
    bt_slashPad->setText(QApplication::translate("KeyboardMapping", "/", 0, QApplication::UnicodeUTF8));
    bt_f1->setText(QApplication::translate("KeyboardMapping", "F1", 0, QApplication::UnicodeUTF8));
    bt_f4->setText(QApplication::translate("KeyboardMapping", "F4", 0, QApplication::UnicodeUTF8));
    bt_plusPad->setText(QApplication::translate("KeyboardMapping", "+", 0, QApplication::UnicodeUTF8));
    bt_leftCtrl->setText(QApplication::translate("KeyboardMapping", "Ctrl", 0, QApplication::UnicodeUTF8));
    bt_dotComa->setText(QApplication::translate("KeyboardMapping", ":\n"
";", 0, QApplication::UnicodeUTF8));
    bt_j->setText(QApplication::translate("KeyboardMapping", "J", 0, QApplication::UnicodeUTF8));
    bt_7Pad->setText(QApplication::translate("KeyboardMapping", "7", 0, QApplication::UnicodeUTF8));
    bt_underline->setText(QApplication::translate("KeyboardMapping", "_\n"
"-", 0, QApplication::UnicodeUTF8));
    bt_pageUp->setText(QApplication::translate("KeyboardMapping", "Page\n"
"Up", 0, QApplication::UnicodeUTF8));
    bt_enterPad->setText(QApplication::translate("KeyboardMapping", "Enter", 0, QApplication::UnicodeUTF8));
    bt_leftSlash->setText(QApplication::translate("KeyboardMapping", "|\n"
"\\", 0, QApplication::UnicodeUTF8));
    bt_leftBranchet->setText(QApplication::translate("KeyboardMapping", "{\n"
"[", 0, QApplication::UnicodeUTF8));
    bt_12->setText(QApplication::translate("KeyboardMapping", "F12", 0, QApplication::UnicodeUTF8));
    bt_upArrow->setText(QApplication::translate("KeyboardMapping", "Up", 0, QApplication::UnicodeUTF8));
    bt_w->setText(QApplication::translate("KeyboardMapping", "W", 0, QApplication::UnicodeUTF8));
    bt_delete->setText(QApplication::translate("KeyboardMapping", "Delete", 0, QApplication::UnicodeUTF8));
    bt_0Pad->setText(QApplication::translate("KeyboardMapping", "0", 0, QApplication::UnicodeUTF8));
    bt_dotPad->setText(QApplication::translate("KeyboardMapping", ".", 0, QApplication::UnicodeUTF8));
    bt_leftCommand->setText(QApplication::translate("KeyboardMapping", "command", 0, QApplication::UnicodeUTF8));
    bt_f->setText(QApplication::translate("KeyboardMapping", "F", 0, QApplication::UnicodeUTF8));
    bt_dot->setText(QApplication::translate("KeyboardMapping", ">\n"
".", 0, QApplication::UnicodeUTF8));
    bt_a->setText(QApplication::translate("KeyboardMapping", "A", 0, QApplication::UnicodeUTF8));
    bt_n->setText(QApplication::translate("KeyboardMapping", "N", 0, QApplication::UnicodeUTF8));
    bt_d->setText(QApplication::translate("KeyboardMapping", "D", 0, QApplication::UnicodeUTF8));
    bt_4->setText(QApplication::translate("KeyboardMapping", "$\n"
"4", 0, QApplication::UnicodeUTF8));
    bt_rightSlash->setText(QApplication::translate("KeyboardMapping", "?\n"
"/", 0, QApplication::UnicodeUTF8));
    bt_rightArrow->setText(QApplication::translate("KeyboardMapping", "Right", 0, QApplication::UnicodeUTF8));
    bt_deletePad->setText(QApplication::translate("KeyboardMapping", "Delete", 0, QApplication::UnicodeUTF8));
    bt_capsLock->setText(QApplication::translate("KeyboardMapping", "Caps Lock", 0, QApplication::UnicodeUTF8));
    bt_6->setText(QApplication::translate("KeyboardMapping", "^\n"
"6", 0, QApplication::UnicodeUTF8));
    bt_6Pad->setText(QApplication::translate("KeyboardMapping", "6", 0, QApplication::UnicodeUTF8));
    bt_k->setText(QApplication::translate("KeyboardMapping", "K", 0, QApplication::UnicodeUTF8));
    bt_leftAlt->setText(QApplication::translate("KeyboardMapping", "Alt", 0, QApplication::UnicodeUTF8));
    bt_esc->setText(QApplication::translate("KeyboardMapping", "Esc", 0, QApplication::UnicodeUTF8));
    bt_9->setText(QApplication::translate("KeyboardMapping", "(\n"
"9", 0, QApplication::UnicodeUTF8));
    bt_f11->setText(QApplication::translate("KeyboardMapping", "F11", 0, QApplication::UnicodeUTF8));
    bt_q->setText(QApplication::translate("KeyboardMapping", "Q", 0, QApplication::UnicodeUTF8));
    bt_tab->setText(QApplication::translate("KeyboardMapping", "Tab", 0, QApplication::UnicodeUTF8));
    bt_rightShift->setText(QApplication::translate("KeyboardMapping", "Shift", 0, QApplication::UnicodeUTF8));
    bt_f7->setText(QApplication::translate("KeyboardMapping", "F7", 0, QApplication::UnicodeUTF8));
    bt_o->setText(QApplication::translate("KeyboardMapping", "O", 0, QApplication::UnicodeUTF8));
    bt_0->setText(QApplication::translate("KeyboardMapping", ")\n"
"0", 0, QApplication::UnicodeUTF8));
    bt_p->setText(QApplication::translate("KeyboardMapping", "P", 0, QApplication::UnicodeUTF8));
    bt_t->setText(QApplication::translate("KeyboardMapping", "T", 0, QApplication::UnicodeUTF8));
    bt_x->setText(QApplication::translate("KeyboardMapping", "X", 0, QApplication::UnicodeUTF8));
    bt_c->setText(QApplication::translate("KeyboardMapping", "C", 0, QApplication::UnicodeUTF8));
    bt_leftShift->setText(QApplication::translate("KeyboardMapping", "Shift", 0, QApplication::UnicodeUTF8));
    bt_f3->setText(QApplication::translate("KeyboardMapping", "F3", 0, QApplication::UnicodeUTF8));
    bt_numLock->setText(QApplication::translate("KeyboardMapping", "Num\n"
"Lock", 0, QApplication::UnicodeUTF8));
    bt_rightAlt->setText(QApplication::translate("KeyboardMapping", "Alt", 0, QApplication::UnicodeUTF8));
    bt_b->setText(QApplication::translate("KeyboardMapping", "B", 0, QApplication::UnicodeUTF8));
    bt_3Pad->setText(QApplication::translate("KeyboardMapping", "3", 0, QApplication::UnicodeUTF8));
    bt_u->setText(QApplication::translate("KeyboardMapping", "U", 0, QApplication::UnicodeUTF8));
    bt_10->setText(QApplication::translate("KeyboardMapping", "F10", 0, QApplication::UnicodeUTF8));
    bt_8->setText(QApplication::translate("KeyboardMapping", "*\n"
"8", 0, QApplication::UnicodeUTF8));
    bt_home->setText(QApplication::translate("KeyboardMapping", "Home", 0, QApplication::UnicodeUTF8));
    bt_equal->setText(QApplication::translate("KeyboardMapping", "+\n"
"=", 0, QApplication::UnicodeUTF8));
    bt_1Pad->setText(QApplication::translate("KeyboardMapping", "1", 0, QApplication::UnicodeUTF8));
    bt_h->setText(QApplication::translate("KeyboardMapping", "H", 0, QApplication::UnicodeUTF8));
    bt_end->setText(QApplication::translate("KeyboardMapping", "End", 0, QApplication::UnicodeUTF8));
    bt_1->setText(QApplication::translate("KeyboardMapping", "!\n"
"1", 0, QApplication::UnicodeUTF8));
    bt_8Pad->setText(QApplication::translate("KeyboardMapping", "8", 0, QApplication::UnicodeUTF8));
    bt_insert->setText(QApplication::translate("KeyboardMapping", "Insert", 0, QApplication::UnicodeUTF8));
    bt_4Pad->setText(QApplication::translate("KeyboardMapping", "4", 0, QApplication::UnicodeUTF8));
    bt_rightBranchet->setText(QApplication::translate("KeyboardMapping", "}\n"
"]", 0, QApplication::UnicodeUTF8));
    bt_2Pad->setText(QApplication::translate("KeyboardMapping", "2", 0, QApplication::UnicodeUTF8));
    bt_f9->setText(QApplication::translate("KeyboardMapping", "F9", 0, QApplication::UnicodeUTF8));
    bt_rightCommand->setText(QApplication::translate("KeyboardMapping", "command", 0, QApplication::UnicodeUTF8));
    bt_downArrow->setText(QApplication::translate("KeyboardMapping", "Down", 0, QApplication::UnicodeUTF8));
    bt_y->setText(QApplication::translate("KeyboardMapping", "Y", 0, QApplication::UnicodeUTF8));
    bt_minusPad->setText(QApplication::translate("KeyboardMapping", "-", 0, QApplication::UnicodeUTF8));
    bt_l->setText(QApplication::translate("KeyboardMapping", "L", 0, QApplication::UnicodeUTF8));
    bt_f5->setText(QApplication::translate("KeyboardMapping", "F5", 0, QApplication::UnicodeUTF8));
    bt_2->setText(QApplication::translate("KeyboardMapping", "@\n"
"2", 0, QApplication::UnicodeUTF8));
    bt_r->setText(QApplication::translate("KeyboardMapping", "R", 0, QApplication::UnicodeUTF8));
    bt_aspas->setText(QApplication::translate("KeyboardMapping", "\"\n"
"'", 0, QApplication::UnicodeUTF8));
    bt_multiplyPad->setText(QApplication::translate("KeyboardMapping", "*", 0, QApplication::UnicodeUTF8));
    bt_enter->setText(QApplication::translate("KeyboardMapping", "Enter", 0, QApplication::UnicodeUTF8));
    bt_e->setText(QApplication::translate("KeyboardMapping", "E", 0, QApplication::UnicodeUTF8));
    bt_z->setText(QApplication::translate("KeyboardMapping", "Z", 0, QApplication::UnicodeUTF8));
    bt_m->setText(QApplication::translate("KeyboardMapping", "M", 0, QApplication::UnicodeUTF8));
    bt_3->setText(QApplication::translate("KeyboardMapping", "#\n"
"3", 0, QApplication::UnicodeUTF8));
    bt_i->setText(QApplication::translate("KeyboardMapping", "I", 0, QApplication::UnicodeUTF8));
    bt_til->setText(QApplication::translate("KeyboardMapping", "`\n"
"~", 0, QApplication::UnicodeUTF8));
    bt_g->setText(QApplication::translate("KeyboardMapping", "G", 0, QApplication::UnicodeUTF8));
    bt_pageDown->setText(QApplication::translate("KeyboardMapping", "Page\n"
"Down", 0, QApplication::UnicodeUTF8));
    grb_comandList->setTitle(QString());
    lbl_group->setText(QApplication::translate("KeyboardMapping", "Group:", 0, QApplication::UnicodeUTF8));
    lbl_commands->setText(QApplication::translate("KeyboardMapping", "Commands:", 0, QApplication::UnicodeUTF8));
    grb_commandScript->setTitle(QApplication::translate("KeyboardMapping", "Command Script", 0, QApplication::UnicodeUTF8));
    tbx_scriptEditor->setHtml(QApplication::translate("KeyboardMapping", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Lucida Grande, Segoe UI'; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    bt_acceptScript->setText(QApplication::translate("KeyboardMapping", "Accept", 0, QApplication::UnicodeUTF8));
    bt_clearScript->setText(QApplication::translate("KeyboardMapping", "Clear", 0, QApplication::UnicodeUTF8));
    bt_ok->setText(QApplication::translate("KeyboardMapping", "OK", 0, QApplication::UnicodeUTF8));
    bt_cancel->setText(QApplication::translate("KeyboardMapping", "Cancel", 0, QApplication::UnicodeUTF8));
    lbl_presetShortcut->setText(QApplication::translate("KeyboardMapping", "Preset Shortcut", 0, QApplication::UnicodeUTF8));
    cbx_presetShortcut->clear();
    cbx_presetShortcut->insertItems(0, QStringList()
     << QApplication::translate("KeyboardMapping", "Neutron 3D", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "XSI", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Maya", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "3DS Max", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "------------", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Add Preset", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Load Preset", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Remove Preset", 0, QApplication::UnicodeUTF8)
    );
    bt_exportKeyMap->setText(QApplication::translate("KeyboardMapping", "Export Key Map", 0, QApplication::UnicodeUTF8));
    bt_help->setText(QApplication::translate("KeyboardMapping", "Help", 0, QApplication::UnicodeUTF8));
    grb_description->setTitle(QApplication::translate("KeyboardMapping", "Description:", 0, QApplication::UnicodeUTF8));
    lbl_description->setText(QApplication::translate("KeyboardMapping", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande, Segoe UI'; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Aqui vai a descri\303\247\303\243o do comando selecionado.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\">Poder\303\241 ser texto <span style=\" font-weight:600;\">formatado</span> e em multiplas linhas</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    bt_restoreDefaults->setText(QApplication::translate("KeyboardMapping", "Restore Defaults", 0, QApplication::UnicodeUTF8));
    grb_help->setTitle(QApplication::translate("KeyboardMapping", "Help:", 0, QApplication::UnicodeUTF8));
    lbl_help->setText(QApplication::translate("KeyboardMapping", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande, Segoe UI'; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hold command and drop in your prefered key.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\">For multiple keys first click on auxiliary key.</p></body></html>", 0, QApplication::UnicodeUTF8));
    grb_newCommand->setTitle(QApplication::translate("KeyboardMapping", "Create New Command", 0, QApplication::UnicodeUTF8));
    cbx_group->clear();
    cbx_group->insertItems(0, QStringList()
     << QApplication::translate("KeyboardMapping", "Polygons", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Curves", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Selection", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "----------", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Add Group", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("KeyboardMapping", "Remove Group", 0, QApplication::UnicodeUTF8)
    );
    lbl_descriptionCommand->setText(QApplication::translate("KeyboardMapping", "Description: ......", 0, QApplication::UnicodeUTF8));
    lbl_groupCommand->setText(QApplication::translate("KeyboardMapping", "Group: ...............", 0, QApplication::UnicodeUTF8));
    lbl_nameCommand->setText(QApplication::translate("KeyboardMapping", "Name: ...............", 0, QApplication::UnicodeUTF8));
    bt_newCommand->setText(QApplication::translate("KeyboardMapping", "New", 0, QApplication::UnicodeUTF8));
    bt_editCommand->setText(QApplication::translate("KeyboardMapping", "Edit", 0, QApplication::UnicodeUTF8));
    bt_deleteNewCommand->setText(QApplication::translate("KeyboardMapping", "Delete", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(KeyboardMapping);
    } // retranslateUi

};

namespace Ui {
    class KeyboardMapping: public Ui_KeyboardMapping {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDMAPPING_H
