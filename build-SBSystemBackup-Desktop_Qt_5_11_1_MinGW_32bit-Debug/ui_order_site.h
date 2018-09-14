/********************************************************************************
** Form generated from reading UI file 'order_site.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_SITE_H
#define UI_ORDER_SITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order_site
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *order_site)
    {
        if (order_site->objectName().isEmpty())
            order_site->setObjectName(QStringLiteral("order_site"));
        order_site->resize(800, 600);
        menubar = new QMenuBar(order_site);
        menubar->setObjectName(QStringLiteral("menubar"));
        order_site->setMenuBar(menubar);
        centralwidget = new QWidget(order_site);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        order_site->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(order_site);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        order_site->setStatusBar(statusbar);

        retranslateUi(order_site);

        QMetaObject::connectSlotsByName(order_site);
    } // setupUi

    void retranslateUi(QMainWindow *order_site)
    {
        order_site->setWindowTitle(QApplication::translate("order_site", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_site: public Ui_order_site {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_SITE_H
