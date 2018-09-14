/********************************************************************************
** Form generated from reading UI file 'allsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSITE_H
#define UI_ALLSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allsite
{
public:
    QWidget *centralwidget;
    QCheckBox *ticket;
    QCheckBox *discount;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QPushButton *back;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuAll_Sites;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *allsite)
    {
        if (allsite->objectName().isEmpty())
            allsite->setObjectName(QStringLiteral("allsite"));
        allsite->resize(800, 600);
        centralwidget = new QWidget(allsite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ticket = new QCheckBox(centralwidget);
        ticket->setObjectName(QStringLiteral("ticket"));
        ticket->setGeometry(QRect(110, 140, 91, 21));
        QFont font;
        font.setPointSize(9);
        ticket->setFont(font);
        discount = new QCheckBox(centralwidget);
        discount->setObjectName(QStringLiteral("discount"));
        discount->setGeometry(QRect(210, 140, 91, 21));
        discount->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(210, 60, 291, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        textEdit->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 110, 111, 41));
        pushButton->setFont(font1);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(510, 60, 111, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        commandLinkButton->setFont(font2);
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 93, 28));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(110, 170, 541, 331));
        allsite->setCentralWidget(centralwidget);
        menubar = new QMenuBar(allsite);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuAll_Sites = new QMenu(menubar);
        menuAll_Sites->setObjectName(QStringLiteral("menuAll_Sites"));
        allsite->setMenuBar(menubar);
        statusbar = new QStatusBar(allsite);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        allsite->setStatusBar(statusbar);

        menubar->addAction(menuAll_Sites->menuAction());

        retranslateUi(allsite);

        QMetaObject::connectSlotsByName(allsite);
    } // setupUi

    void retranslateUi(QMainWindow *allsite)
    {
        allsite->setWindowTitle(QApplication::translate("allsite", "MainWindow", nullptr));
        ticket->setText(QApplication::translate("allsite", "\346\234\211\347\245\250", nullptr));
        discount->setText(QApplication::translate("allsite", "\346\212\230\346\211\243", nullptr));
        pushButton->setText(QApplication::translate("allsite", "\346\220\234\347\264\242", nullptr));
        commandLinkButton->setText(QApplication::translate("allsite", "\346\220\234\347\264\242", nullptr));
        back->setText(QApplication::translate("allsite", "\350\277\224\345\233\236", nullptr));
        menuAll_Sites->setTitle(QApplication::translate("allsite", "All Sites", nullptr));
    } // retranslateUi

};

namespace Ui {
    class allsite: public Ui_allsite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSITE_H
