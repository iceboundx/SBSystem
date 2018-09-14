/********************************************************************************
** Form generated from reading UI file 'ordersite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSITE_H
#define UI_ORDERSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ordersite
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ordersite)
    {
        if (ordersite->objectName().isEmpty())
            ordersite->setObjectName(QStringLiteral("ordersite"));
        ordersite->resize(800, 600);
        menubar = new QMenuBar(ordersite);
        menubar->setObjectName(QStringLiteral("menubar"));
        ordersite->setMenuBar(menubar);
        centralwidget = new QWidget(ordersite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ordersite->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ordersite);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ordersite->setStatusBar(statusbar);

        retranslateUi(ordersite);

        QMetaObject::connectSlotsByName(ordersite);
    } // setupUi

    void retranslateUi(QMainWindow *ordersite)
    {
        ordersite->setWindowTitle(QApplication::translate("ordersite", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ordersite: public Ui_ordersite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSITE_H
