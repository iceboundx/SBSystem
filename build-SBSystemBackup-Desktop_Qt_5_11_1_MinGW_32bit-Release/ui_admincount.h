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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admincount
{
public:
    QWidget *centralwidget;
    QListWidget *list;
    QLabel *label;
    QPushButton *num;
    QPushButton *people;
    QPushButton *pro;
    QComboBox *season;
    QLabel *sort_type;

    void setupUi(QMainWindow *admincount)
    {
        if (admincount->objectName().isEmpty())
            admincount->setObjectName(QStringLiteral("admincount"));
        admincount->resize(824, 580);
        centralwidget = new QWidget(admincount);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        list = new QListWidget(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(30, 150, 761, 411));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 821, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        num = new QPushButton(centralwidget);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(80, 110, 93, 28));
        people = new QPushButton(centralwidget);
        people->setObjectName(QStringLiteral("people"));
        people->setGeometry(QRect(220, 110, 93, 28));
        pro = new QPushButton(centralwidget);
        pro->setObjectName(QStringLiteral("pro"));
        pro->setGeometry(QRect(370, 110, 93, 28));
        season = new QComboBox(centralwidget);
        season->addItem(QString());
        season->addItem(QString());
        season->addItem(QString());
        season->addItem(QString());
        season->addItem(QString());
        season->setObjectName(QStringLiteral("season"));
        season->setGeometry(QRect(590, 110, 121, 31));
        sort_type = new QLabel(centralwidget);
        sort_type->setObjectName(QStringLiteral("sort_type"));
        sort_type->setGeometry(QRect(320, 80, 171, 16));
        admincount->setCentralWidget(centralwidget);

        retranslateUi(admincount);

        QMetaObject::connectSlotsByName(admincount);
    } // setupUi

    void retranslateUi(QMainWindow *admincount)
    {
        admincount->setWindowTitle(QApplication::translate("admincount", "\345\267\262\345\217\221\345\270\203\346\231\257\347\202\271", nullptr));
        label->setText(QApplication::translate("admincount", "\345\267\262\345\217\221\345\270\203\347\232\204\346\211\200\346\234\211\346\231\257\347\202\271", nullptr));
        num->setText(QApplication::translate("admincount", "\351\242\204\345\256\232\351\207\217", nullptr));
        people->setText(QApplication::translate("admincount", "\350\256\277\351\227\256\344\272\272\346\225\260", nullptr));
        pro->setText(QApplication::translate("admincount", "\345\210\251\346\266\246", nullptr));
        season->setItemText(0, QApplication::translate("admincount", "\346\214\211\345\255\243\350\212\202\346\216\222\345\272\217", nullptr));
        season->setItemText(1, QApplication::translate("admincount", "\346\230\245\345\255\243", nullptr));
        season->setItemText(2, QApplication::translate("admincount", "\345\244\217\345\255\243", nullptr));
        season->setItemText(3, QApplication::translate("admincount", "\347\247\213\345\255\243", nullptr));
        season->setItemText(4, QApplication::translate("admincount", "\345\206\254\345\255\243", nullptr));

        sort_type->setText(QApplication::translate("admincount", "\347\233\256\345\211\215\346\216\222\345\272\217\346\226\271\345\274\217:\350\256\277\351\227\256\344\272\272\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admincount: public Ui_admincount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCOUNT_H
