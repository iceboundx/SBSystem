/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *order)
    {
        if (order->objectName().isEmpty())
            order->setObjectName(QStringLiteral("order"));
        order->resize(800, 600);
        menubar = new QMenuBar(order);
        menubar->setObjectName(QStringLiteral("menubar"));
        order->setMenuBar(menubar);
        centralwidget = new QWidget(order);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        order->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(order);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        order->setStatusBar(statusbar);

        retranslateUi(order);

        QMetaObject::connectSlotsByName(order);
    } // setupUi

    void retranslateUi(QMainWindow *order)
    {
        order->setWindowTitle(QApplication::translate("order", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order: public Ui_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
