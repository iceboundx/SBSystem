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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderlist
{
public:
    QWidget *centralwidget;
    QListWidget *o_list;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *orderlist)
    {
        if (orderlist->objectName().isEmpty())
            orderlist->setObjectName(QStringLiteral("orderlist"));
        orderlist->resize(997, 600);
        centralwidget = new QWidget(orderlist);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        o_list = new QListWidget(centralwidget);
        o_list->setObjectName(QStringLiteral("o_list"));
        o_list->setGeometry(QRect(20, 100, 961, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        o_list->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 211, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(18);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 70, 211, 16));
        orderlist->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(orderlist);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        orderlist->setStatusBar(statusbar);

        retranslateUi(orderlist);

        QMetaObject::connectSlotsByName(orderlist);
    } // setupUi

    void retranslateUi(QMainWindow *orderlist)
    {
        orderlist->setWindowTitle(QApplication::translate("orderlist", "MainWindow", nullptr));
        label->setText(QApplication::translate("orderlist", "\346\211\200\346\234\211\350\256\242\345\215\225\345\246\202\344\270\213", nullptr));
        label_2->setText(QApplication::translate("orderlist", "\347\202\271\345\207\273\345\205\266\344\270\255\346\237\220\351\241\271\345\217\257\344\273\245\346\237\245\347\234\213\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderlist: public Ui_orderlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERLIST_H
