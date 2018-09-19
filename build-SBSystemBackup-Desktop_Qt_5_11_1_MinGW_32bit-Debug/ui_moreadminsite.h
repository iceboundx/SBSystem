/********************************************************************************
** Form generated from reading UI file 'moreadminsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREADMINSITE_H
#define UI_MOREADMINSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moreadminsite
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *moreadminsite)
    {
        if (moreadminsite->objectName().isEmpty())
            moreadminsite->setObjectName(QStringLiteral("moreadminsite"));
        moreadminsite->resize(1085, 832);
        centralwidget = new QWidget(moreadminsite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        moreadminsite->setCentralWidget(centralwidget);

        retranslateUi(moreadminsite);

        QMetaObject::connectSlotsByName(moreadminsite);
    } // setupUi

    void retranslateUi(QMainWindow *moreadminsite)
    {
        moreadminsite->setWindowTitle(QApplication::translate("moreadminsite", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moreadminsite: public Ui_moreadminsite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREADMINSITE_H
