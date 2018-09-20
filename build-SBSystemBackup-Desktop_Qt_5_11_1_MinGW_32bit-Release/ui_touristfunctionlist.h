/********************************************************************************
** Form generated from reading UI file 'touristfunctionlist.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURISTFUNCTIONLIST_H
#define UI_TOURISTFUNCTIONLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TouristFunctionList
{
public:
    QWidget *centralwidget;
    QPushButton *allsite;
    QPushButton *info;
    QPushButton *order;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TouristFunctionList)
    {
        if (TouristFunctionList->objectName().isEmpty())
            TouristFunctionList->setObjectName(QStringLiteral("TouristFunctionList"));
        TouristFunctionList->resize(1069, 628);
        centralwidget = new QWidget(TouristFunctionList);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        allsite = new QPushButton(centralwidget);
        allsite->setObjectName(QStringLiteral("allsite"));
        allsite->setGeometry(QRect(330, 140, 391, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        allsite->setFont(font);
        info = new QPushButton(centralwidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(330, 320, 391, 71));
        info->setFont(font);
        order = new QPushButton(centralwidget);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(330, 230, 391, 71));
        order->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 490, 121, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        TouristFunctionList->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TouristFunctionList);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TouristFunctionList->setStatusBar(statusbar);

        retranslateUi(TouristFunctionList);

        QMetaObject::connectSlotsByName(TouristFunctionList);
    } // setupUi

    void retranslateUi(QMainWindow *TouristFunctionList)
    {
        TouristFunctionList->setWindowTitle(QApplication::translate("TouristFunctionList", "\346\227\205\346\270\270\345\233\242", nullptr));
        allsite->setText(QApplication::translate("TouristFunctionList", "\346\211\200\346\234\211\346\231\257\347\202\271", nullptr));
        info->setText(QApplication::translate("TouristFunctionList", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        order->setText(QApplication::translate("TouristFunctionList", "\345\216\206\345\217\262\350\256\242\345\215\225", nullptr));
        pushButton->setText(QApplication::translate("TouristFunctionList", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TouristFunctionList: public Ui_TouristFunctionList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURISTFUNCTIONLIST_H
