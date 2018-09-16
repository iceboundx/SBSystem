/********************************************************************************
** Form generated from reading UI file 'admininfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININFO_H
#define UI_ADMININFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admininfo
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *id;
    QLabel *password;
    QLabel *phone;
    QLabel *email;
    QPushButton *editpasswd;
    QPushButton *edittel;
    QPushButton *editemail;
    QTextEdit *newpasswd;
    QTextEdit *newtel;
    QLabel *prompttel;
    QLabel *promptemail;
    QPushButton *save;
    QPushButton *back;
    QLineEdit *newemail;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admininfo)
    {
        if (admininfo->objectName().isEmpty())
            admininfo->setObjectName(QStringLiteral("admininfo"));
        admininfo->resize(800, 600);
        centralwidget = new QWidget(admininfo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 130, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label_3->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 190, 91, 21));
        label_6->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 70, 91, 21));
        label_4->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 250, 91, 21));
        label_7->setFont(font);
        id = new QLabel(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(190, 70, 241, 21));
        QFont font1;
        font1.setPointSize(12);
        id->setFont(font1);
        password = new QLabel(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(190, 130, 201, 21));
        password->setFont(font1);
        phone = new QLabel(centralwidget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(190, 190, 231, 21));
        phone->setFont(font1);
        email = new QLabel(centralwidget);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(190, 250, 221, 21));
        email->setFont(font1);
        editpasswd = new QPushButton(centralwidget);
        editpasswd->setObjectName(QStringLiteral("editpasswd"));
        editpasswd->setGeometry(QRect(460, 130, 71, 28));
        edittel = new QPushButton(centralwidget);
        edittel->setObjectName(QStringLiteral("edittel"));
        edittel->setGeometry(QRect(460, 190, 71, 28));
        editemail = new QPushButton(centralwidget);
        editemail->setObjectName(QStringLiteral("editemail"));
        editemail->setGeometry(QRect(460, 250, 71, 28));
        newpasswd = new QTextEdit(centralwidget);
        newpasswd->setObjectName(QStringLiteral("newpasswd"));
        newpasswd->setGeometry(QRect(550, 130, 181, 31));
        newtel = new QTextEdit(centralwidget);
        newtel->setObjectName(QStringLiteral("newtel"));
        newtel->setGeometry(QRect(550, 190, 181, 31));
        prompttel = new QLabel(centralwidget);
        prompttel->setObjectName(QStringLiteral("prompttel"));
        prompttel->setGeometry(QRect(550, 230, 161, 16));
        promptemail = new QLabel(centralwidget);
        promptemail->setObjectName(QStringLiteral("promptemail"));
        promptemail->setGeometry(QRect(550, 290, 161, 16));
        save = new QPushButton(centralwidget);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(570, 400, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        save->setFont(font2);
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(450, 400, 111, 41));
        back->setFont(font2);
        newemail = new QLineEdit(centralwidget);
        newemail->setObjectName(QStringLiteral("newemail"));
        newemail->setGeometry(QRect(550, 250, 181, 31));
        admininfo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(admininfo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        admininfo->setStatusBar(statusbar);

        retranslateUi(admininfo);

        QMetaObject::connectSlotsByName(admininfo);
    } // setupUi

    void retranslateUi(QMainWindow *admininfo)
    {
        admininfo->setWindowTitle(QApplication::translate("admininfo", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("admininfo", "\345\257\206\347\240\201", nullptr));
        label_6->setText(QApplication::translate("admininfo", "\347\224\265\350\257\235", nullptr));
        label_4->setText(QApplication::translate("admininfo", "\347\256\241\347\220\206\345\221\230ID", nullptr));
        label_7->setText(QApplication::translate("admininfo", "\351\202\256\347\256\261", nullptr));
        id->setText(QApplication::translate("admininfo", "0", nullptr));
        password->setText(QApplication::translate("admininfo", "0", nullptr));
        phone->setText(QApplication::translate("admininfo", "0", nullptr));
        email->setText(QApplication::translate("admininfo", "0", nullptr));
        editpasswd->setText(QApplication::translate("admininfo", "\344\277\256\346\224\271", nullptr));
        edittel->setText(QApplication::translate("admininfo", "\344\277\256\346\224\271", nullptr));
        editemail->setText(QApplication::translate("admininfo", "\344\277\256\346\224\271", nullptr));
        prompttel->setText(QApplication::translate("admininfo", "\347\224\265\350\257\235\345\277\205\351\241\273\344\270\27211\344\275\215\347\272\257\346\225\260\345\255\227\357\274\201", nullptr));
        promptemail->setText(QApplication::translate("admininfo", "\351\202\256\347\256\261\346\240\274\345\274\217\344\270\215\346\255\243\347\241\256", nullptr));
        save->setText(QApplication::translate("admininfo", "\347\241\256\350\256\244", nullptr));
        back->setText(QApplication::translate("admininfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admininfo: public Ui_admininfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININFO_H
