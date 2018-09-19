/********************************************************************************
** Form generated from reading UI file 'admincount.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCOUNT_H
#define UI_ADMINCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admincount
{
public:
    QWidget *centralwidget;
    QListWidget *list;
    QLabel *label;

    void setupUi(QMainWindow *admincount)
    {
        if (admincount->objectName().isEmpty())
            admincount->setObjectName(QStringLiteral("admincount"));
        admincount->resize(819, 520);
        centralwidget = new QWidget(admincount);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        list = new QListWidget(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(30, 80, 761, 411));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 821, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        admincount->setCentralWidget(centralwidget);

        retranslateUi(admincount);

        QMetaObject::connectSlotsByName(admincount);
    } // setupUi

    void retranslateUi(QMainWindow *admincount)
    {
        admincount->setWindowTitle(QApplication::translate("admincount", "MainWindow", nullptr));
        label->setText(QApplication::translate("admincount", "\345\267\262\345\217\221\345\270\203\347\232\204\346\211\200\346\234\211\346\231\257\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admincount: public Ui_admincount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCOUNT_H
