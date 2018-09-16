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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
//
class Ui_ordersite
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *name;
    QLabel *area;
    QLabel *id;
    QLabel *time;
    QLabel *agetype;
    QLabel *level;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *date;
    QLabel *money;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ordersite)
    {
        if (ordersite->objectName().isEmpty())
            ordersite->setObjectName(QStringLiteral("ordersite"));
        ordersite->resize(800, 600);
        centralwidget = new QWidget(ordersite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 681, 211));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(60, 150, 111, 21));
        label_14->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 81, 21));
        label_2->setFont(font);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 80, 91, 21));
        label_10->setFont(font);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(360, 30, 91, 21));
        label_13->setFont(font);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(360, 150, 111, 21));
        label_15->setFont(font);
        name = new QLabel(groupBox);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(140, 30, 191, 31));
        QFont font1;
        font1.setPointSize(10);
        name->setFont(font1);
        area = new QLabel(groupBox);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(450, 30, 191, 31));
        area->setFont(font1);
        id = new QLabel(groupBox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(130, 80, 191, 31));
        id->setFont(font1);
        time = new QLabel(groupBox);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(170, 150, 191, 31));
        time->setFont(font1);
        agetype = new QLabel(groupBox);
        agetype->setObjectName(QStringLiteral("agetype"));
        agetype->setGeometry(QRect(450, 150, 191, 31));
        agetype->setFont(font1);
        level = new QLabel(groupBox);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(450, 80, 191, 31));
        level->setFont(font1);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 270, 681, 231));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 40, 81, 21));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 90, 81, 21));
        label_5->setFont(font);
        date = new QLabel(groupBox_2);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(170, 40, 261, 31));
        date->setFont(font1);
        money = new QLabel(groupBox_2);
        money->setObjectName(QStringLiteral("money"));
        money->setGeometry(QRect(170, 90, 241, 31));
        money->setFont(font1);
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
        groupBox->setTitle(QApplication::translate("ordersite", "\346\231\257\347\202\271\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("ordersite", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_14->setText(QApplication::translate("ordersite", "\346\270\270\350\247\210\346\211\200\351\234\200\346\227\266\351\227\264", nullptr));
        label_2->setText(QApplication::translate("ordersite", "\346\231\257\347\202\271ID", nullptr));
        label_10->setText(QApplication::translate("ordersite", "\346\231\257\347\202\271\347\272\247\345\210\253", nullptr));
        label_13->setText(QApplication::translate("ordersite", "\346\211\200\345\234\250\345\214\272\345\237\237", nullptr));
        label_15->setText(QApplication::translate("ordersite", "\351\200\202\345\220\210\344\272\272\347\276\244", nullptr));
        name->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        area->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        id->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        time->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        agetype->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        level->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        groupBox_2->setTitle(QApplication::translate("ordersite", "\351\242\204\350\256\242\344\277\241\346\201\257", nullptr));
        label_4->setText(QApplication::translate("ordersite", "\345\207\272\350\241\214\346\227\266\351\227\264", nullptr));
        label_5->setText(QApplication::translate("ordersite", "\346\200\273\347\245\250\344\273\267", nullptr));
        date->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
        money->setText(QApplication::translate("ordersite", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ordersite: public Ui_ordersite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSITE_H
