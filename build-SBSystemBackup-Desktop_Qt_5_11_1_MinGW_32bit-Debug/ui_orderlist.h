/********************************************************************************
** Form generated from reading UI file 'orderlist.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERLIST_H
#define UI_ORDERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderlist
{
public:
    QWidget *centralwidget;
    QListWidget *list;
    QPushButton *seeall;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *orderlist)
    {
        if (orderlist->objectName().isEmpty())
            orderlist->setObjectName(QStringLiteral("orderlist"));
        orderlist->resize(800, 600);
        centralwidget = new QWidget(orderlist);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        list = new QListWidget(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(70, 110, 651, 401));
        seeall = new QPushButton(centralwidget);
        seeall->setObjectName(QStringLiteral("seeall"));
        seeall->setGeometry(QRect(70, 30, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        seeall->setFont(font);
        orderlist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(orderlist);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        orderlist->setMenuBar(menubar);
        statusbar = new QStatusBar(orderlist);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        orderlist->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(orderlist);

        QMetaObject::connectSlotsByName(orderlist);
    } // setupUi

    void retranslateUi(QMainWindow *orderlist)
    {
        orderlist->setWindowTitle(QApplication::translate("orderlist", "MainWindow", nullptr));
        seeall->setText(QApplication::translate("orderlist", "\346\237\245\347\234\213\346\211\200\346\234\211\350\256\242\345\215\225", nullptr));
        menu->setTitle(QApplication::translate("orderlist", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderlist: public Ui_orderlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERLIST_H
