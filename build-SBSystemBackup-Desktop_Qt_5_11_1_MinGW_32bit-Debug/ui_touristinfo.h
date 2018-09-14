/********************************************************************************
** Form generated from reading UI file 'touristinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURISTINFO_H
#define UI_TOURISTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_touristinfo
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *save;
    QPlainTextEdit *changePasswd;
    QPushButton *changePasswd_2;
    QPushButton *changeTel_2;
    QLabel *promptTel;
    QLabel *id;
    QLabel *passwd;
    QLabel *num;
    QLabel *agelow;
    QLabel *id_5;
    QLabel *agehigh;
    QLabel *tel;
    QTextEdit *changeTel;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *touristinfo)
    {
        if (touristinfo->objectName().isEmpty())
            touristinfo->setObjectName(QStringLiteral("touristinfo"));
        touristinfo->resize(800, 600);
        centralwidget = new QWidget(touristinfo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 140, 91, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 180, 91, 21));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 230, 91, 21));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 280, 91, 21));
        label_5->setFont(font);
        save = new QPushButton(centralwidget);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(540, 450, 151, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        save->setFont(font1);
        changePasswd = new QPlainTextEdit(centralwidget);
        changePasswd->setObjectName(QStringLiteral("changePasswd"));
        changePasswd->setGeometry(QRect(510, 140, 231, 31));
        changePasswd_2 = new QPushButton(centralwidget);
        changePasswd_2->setObjectName(QStringLiteral("changePasswd_2"));
        changePasswd_2->setGeometry(QRect(420, 140, 71, 28));
        changeTel_2 = new QPushButton(centralwidget);
        changeTel_2->setObjectName(QStringLiteral("changeTel_2"));
        changeTel_2->setGeometry(QRect(420, 280, 71, 28));
        promptTel = new QLabel(centralwidget);
        promptTel->setObjectName(QStringLiteral("promptTel"));
        promptTel->setGeometry(QRect(510, 320, 211, 16));
        id = new QLabel(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(200, 90, 191, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(11);
        id->setFont(font2);
        passwd = new QLabel(centralwidget);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setGeometry(QRect(200, 140, 191, 21));
        passwd->setFont(font2);
        num = new QLabel(centralwidget);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(200, 180, 191, 21));
        num->setFont(font2);
        agelow = new QLabel(centralwidget);
        agelow->setObjectName(QStringLiteral("agelow"));
        agelow->setGeometry(QRect(200, 230, 21, 21));
        agelow->setFont(font2);
        id_5 = new QLabel(centralwidget);
        id_5->setObjectName(QStringLiteral("id_5"));
        id_5->setGeometry(QRect(220, 230, 21, 21));
        id_5->setFont(font2);
        agehigh = new QLabel(centralwidget);
        agehigh->setObjectName(QStringLiteral("agehigh"));
        agehigh->setGeometry(QRect(240, 230, 41, 21));
        agehigh->setFont(font2);
        tel = new QLabel(centralwidget);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(200, 280, 191, 21));
        tel->setFont(font2);
        changeTel = new QTextEdit(centralwidget);
        changeTel->setObjectName(QStringLiteral("changeTel"));
        changeTel->setGeometry(QRect(510, 280, 231, 31));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(370, 450, 151, 51));
        back->setFont(font1);
        touristinfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(touristinfo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        touristinfo->setMenuBar(menubar);
        statusbar = new QStatusBar(touristinfo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        touristinfo->setStatusBar(statusbar);

        retranslateUi(touristinfo);

        QMetaObject::connectSlotsByName(touristinfo);
    } // setupUi

    void retranslateUi(QMainWindow *touristinfo)
    {
        touristinfo->setWindowTitle(QApplication::translate("touristinfo", "MainWindow", nullptr));
        label->setText(QApplication::translate("touristinfo", "\346\270\270\345\256\242\345\233\242ID", nullptr));
        label_2->setText(QApplication::translate("touristinfo", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("touristinfo", "\344\272\272\346\225\260", nullptr));
        label_4->setText(QApplication::translate("touristinfo", "\345\271\264\351\276\204\345\261\202\346\254\241", nullptr));
        label_5->setText(QApplication::translate("touristinfo", "\350\201\224\347\263\273\344\272\272\347\224\265\350\257\235", nullptr));
        save->setText(QApplication::translate("touristinfo", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        changePasswd_2->setText(QApplication::translate("touristinfo", "\344\277\256\346\224\271", nullptr));
        changeTel_2->setText(QApplication::translate("touristinfo", "\344\277\256\346\224\271", nullptr));
        promptTel->setText(QApplication::translate("touristinfo", "\347\224\265\350\257\235\345\217\267\347\240\201\345\277\205\351\241\273\344\270\27211\344\275\215\346\225\260\345\255\227\357\274\201", nullptr));
        id->setText(QApplication::translate("touristinfo", "0", nullptr));
        passwd->setText(QApplication::translate("touristinfo", "0", nullptr));
        num->setText(QApplication::translate("touristinfo", "0", nullptr));
        agelow->setText(QApplication::translate("touristinfo", "0", nullptr));
        id_5->setText(QApplication::translate("touristinfo", "-", nullptr));
        agehigh->setText(QApplication::translate("touristinfo", "0", nullptr));
        tel->setText(QApplication::translate("touristinfo", "0", nullptr));
        back->setText(QApplication::translate("touristinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class touristinfo: public Ui_touristinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURISTINFO_H
