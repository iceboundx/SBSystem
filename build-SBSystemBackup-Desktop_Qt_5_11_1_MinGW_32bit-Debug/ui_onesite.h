/********************************************************************************
** Form generated from reading UI file 'onesite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONESITE_H
#define UI_ONESITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onesite
{
public:
    QWidget *centralwidget;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label_17;
    QLabel *label;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *name;
    QLabel *id;
    QLabel *area;
    QLabel *level;
    QGroupBox *groupBox;
    QLabel *pricehigh;
    QLabel *begintime;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *pricelow;
    QLabel *endtime;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *time;
    QLabel *agetype;
    QPushButton *add;
    QPushButton *add_2;
    QLabel *profile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *onesite)
    {
        if (onesite->objectName().isEmpty())
            onesite->setObjectName(QStringLiteral("onesite"));
        onesite->resize(945, 729);
        centralwidget = new QWidget(onesite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 140, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_12->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(480, 70, 91, 21));
        label_10->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 81, 21));
        label_2->setFont(font);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(540, 310, 91, 21));
        label_17->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 81, 21));
        label->setFont(font);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 310, 111, 21));
        label_14->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(480, 20, 91, 21));
        label_13->setFont(font);
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(180, 20, 81, 21));
        name->setFont(font);
        id = new QLabel(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(180, 70, 81, 21));
        id->setFont(font);
        area = new QLabel(centralwidget);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(610, 20, 91, 21));
        area->setFont(font);
        level = new QLabel(centralwidget);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(610, 70, 91, 21));
        level->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 390, 871, 201));
        pricehigh = new QLabel(groupBox);
        pricehigh->setObjectName(QStringLiteral("pricehigh"));
        pricehigh->setGeometry(QRect(210, 50, 71, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pricehigh->setFont(font1);
        begintime = new QLabel(groupBox);
        begintime->setObjectName(QStringLiteral("begintime"));
        begintime->setGeometry(QRect(460, 50, 72, 15));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 50, 81, 20));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 50, 71, 16));
        label_6->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 40, 91, 21));
        label_3->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 120, 61, 16));
        label_9->setFont(font1);
        pricelow = new QLabel(groupBox);
        pricelow->setObjectName(QStringLiteral("pricelow"));
        pricelow->setGeometry(QRect(210, 80, 71, 16));
        pricelow->setFont(font1);
        endtime = new QLabel(groupBox);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(620, 50, 72, 15));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 80, 61, 16));
        label_8->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 50, 51, 16));
        label_7->setFont(font1);
        time = new QLabel(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(250, 310, 81, 21));
        time->setFont(font);
        agetype = new QLabel(centralwidget);
        agetype->setObjectName(QStringLiteral("agetype"));
        agetype->setGeometry(QRect(670, 310, 81, 21));
        agetype->setFont(font);
        add = new QPushButton(centralwidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(680, 600, 151, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        add->setFont(font2);
        add_2 = new QPushButton(centralwidget);
        add_2->setObjectName(QStringLiteral("add_2"));
        add_2->setGeometry(QRect(510, 610, 131, 41));
        add_2->setFont(font);
        profile = new QLabel(centralwidget);
        profile->setObjectName(QStringLiteral("profile"));
        profile->setGeometry(QRect(170, 140, 581, 101));
        profile->setFont(font);
        onesite->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(onesite);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        onesite->setStatusBar(statusbar);

        retranslateUi(onesite);

        QMetaObject::connectSlotsByName(onesite);
    } // setupUi

    void retranslateUi(QMainWindow *onesite)
    {
        onesite->setWindowTitle(QApplication::translate("onesite", "MainWindow", nullptr));
        label_12->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\347\256\200\344\273\213", nullptr));
        label_10->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\347\272\247\345\210\253", nullptr));
        label_2->setText(QApplication::translate("onesite", "\346\231\257\347\202\271ID", nullptr));
        label_17->setText(QApplication::translate("onesite", "\351\200\202\345\220\210\344\272\272\347\276\244", nullptr));
        label->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_14->setText(QApplication::translate("onesite", "\346\270\270\350\247\210\346\211\200\351\234\200\346\227\266\351\227\264", nullptr));
        label_13->setText(QApplication::translate("onesite", "\346\211\200\345\234\250\345\214\272\345\237\237", nullptr));
        name->setText(QString());
        id->setText(QString());
        area->setText(QString());
        level->setText(QString());
        groupBox->setTitle(QApplication::translate("onesite", "\351\227\250\347\245\250\344\277\241\346\201\257", nullptr));
        pricehigh->setText(QString());
        begintime->setText(QString());
        label_5->setText(QApplication::translate("onesite", "\346\227\272\345\255\243\347\224\261\346\257\217\345\271\264", nullptr));
        label_6->setText(QApplication::translate("onesite", "\346\227\272\345\255\243\347\245\250\344\273\267", nullptr));
        label_3->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\347\245\250\344\273\267", nullptr));
        label_9->setText(QApplication::translate("onesite", "\347\211\271\346\256\212\347\245\250\344\273\267", nullptr));
        pricelow->setText(QString());
        endtime->setText(QString());
        label_8->setText(QApplication::translate("onesite", "\346\267\241\345\255\243\347\245\250\344\273\267", nullptr));
        label_7->setText(QApplication::translate("onesite", "\350\207\263", nullptr));
        time->setText(QString());
        agetype->setText(QString());
        add->setText(QApplication::translate("onesite", "\345\212\240\345\205\245\350\256\242\345\215\225", nullptr));
        add_2->setText(QApplication::translate("onesite", "\350\277\224\345\233\236", nullptr));
        profile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class onesite: public Ui_onesite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONESITE_H
