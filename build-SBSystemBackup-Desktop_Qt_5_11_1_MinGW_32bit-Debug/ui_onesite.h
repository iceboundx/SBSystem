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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onesite
{
public:
    QWidget *centralwidget;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *name;
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
    QLabel *label_y;
    QComboBox *dis_type;
    QLabel *label;
    QLabel *cur_dis;
    QLabel *per_price;
    QLabel *time;
    QLabel *agetype;
    QPushButton *add;
    QLabel *profile;
    QSpinBox *buy_num;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *all_price;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *onesite)
    {
        if (onesite->objectName().isEmpty())
            onesite->setObjectName(QStringLiteral("onesite"));
        onesite->resize(945, 642);
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
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 280, 111, 21));
        label_14->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(480, 20, 91, 21));
        label_13->setFont(font);
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(70, 10, 321, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(25);
        name->setFont(font1);
        area = new QLabel(centralwidget);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(570, 20, 91, 21));
        area->setFont(font);
        level = new QLabel(centralwidget);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(570, 70, 91, 21));
        level->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 320, 871, 201));
        pricehigh = new QLabel(groupBox);
        pricehigh->setObjectName(QStringLiteral("pricehigh"));
        pricehigh->setGeometry(QRect(190, 50, 71, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pricehigh->setFont(font2);
        begintime = new QLabel(groupBox);
        begintime->setObjectName(QStringLiteral("begintime"));
        begintime->setGeometry(QRect(450, 40, 72, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 40, 81, 20));
        label_5->setFont(font2);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 50, 71, 16));
        label_6->setFont(font2);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 91, 21));
        label_3->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 160, 261, 21));
        label_9->setFont(font2);
        pricelow = new QLabel(groupBox);
        pricelow->setObjectName(QStringLiteral("pricelow"));
        pricelow->setGeometry(QRect(190, 80, 71, 16));
        pricelow->setFont(font2);
        endtime = new QLabel(groupBox);
        endtime->setObjectName(QStringLiteral("endtime"));
        endtime->setGeometry(QRect(580, 40, 72, 15));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 80, 61, 16));
        label_8->setFont(font2);
        label_y = new QLabel(groupBox);
        label_y->setObjectName(QStringLiteral("label_y"));
        label_y->setGeometry(QRect(520, 40, 51, 16));
        label_y->setFont(font2);
        dis_type = new QComboBox(groupBox);
        dis_type->setObjectName(QStringLiteral("dis_type"));
        dis_type->setGeometry(QRect(520, 101, 91, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 100, 101, 20));
        cur_dis = new QLabel(groupBox);
        cur_dis->setObjectName(QStringLiteral("cur_dis"));
        cur_dis->setGeometry(QRect(640, 100, 191, 16));
        per_price = new QLabel(groupBox);
        per_price->setObjectName(QStringLiteral("per_price"));
        per_price->setGeometry(QRect(290, 150, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(13);
        per_price->setFont(font3);
        time = new QLabel(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(200, 280, 81, 21));
        time->setFont(font);
        agetype = new QLabel(centralwidget);
        agetype->setObjectName(QStringLiteral("agetype"));
        agetype->setGeometry(QRect(570, 280, 161, 21));
        agetype->setFont(font);
        add = new QPushButton(centralwidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(670, 550, 171, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        add->setFont(font4);
        profile = new QLabel(centralwidget);
        profile->setObjectName(QStringLiteral("profile"));
        profile->setGeometry(QRect(140, 130, 731, 131));
        profile->setFont(font);
        profile->setTextFormat(Qt::PlainText);
        profile->setWordWrap(true);
        buy_num = new QSpinBox(centralwidget);
        buy_num->setObjectName(QStringLiteral("buy_num"));
        buy_num->setGeometry(QRect(150, 550, 91, 31));
        buy_num->setMinimum(1);
        buy_num->setMaximum(1000);
        buy_num->setDisplayIntegerBase(10);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 560, 91, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font5.setPointSize(11);
        label_4->setFont(font5);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(300, 550, 71, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(14);
        label_11->setFont(font6);
        all_price = new QLabel(centralwidget);
        all_price->setObjectName(QStringLiteral("all_price"));
        all_price->setGeometry(QRect(370, 550, 151, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(16);
        all_price->setFont(font7);
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
        label_14->setText(QApplication::translate("onesite", "\346\270\270\350\247\210\346\211\200\351\234\200\346\227\266\351\227\264", nullptr));
        label_13->setText(QApplication::translate("onesite", "\346\211\200\345\234\250\345\214\272\345\237\237", nullptr));
        name->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        area->setText(QApplication::translate("onesite", "\345\214\272\345\237\237", nullptr));
        level->setText(QApplication::translate("onesite", "5\347\272\247", nullptr));
        groupBox->setTitle(QApplication::translate("onesite", "\351\227\250\347\245\250\344\277\241\346\201\257", nullptr));
        pricehigh->setText(QApplication::translate("onesite", "1000", nullptr));
        begintime->setText(QApplication::translate("onesite", "12\346\234\21012\346\227\245", nullptr));
        label_5->setText(QApplication::translate("onesite", "\346\267\241\345\255\243\347\224\261\344\273\212\345\271\264", nullptr));
        label_6->setText(QApplication::translate("onesite", "\346\227\272\345\255\243\347\245\250\344\273\267", nullptr));
        label_3->setText(QApplication::translate("onesite", "\346\231\257\347\202\271\347\245\250\344\273\267", nullptr));
        label_9->setText(QApplication::translate("onesite", "<html><head/><body><p><span style=\" font-weight:600;\">\346\214\211\346\202\250\351\200\211\346\213\251\347\232\204\346\227\266\351\227\264\345\222\214\346\212\230\346\211\243\357\274\214\345\275\223\345\211\215\345\215\225\344\273\267\344\270\272</span></p></body></html>", nullptr));
        pricelow->setText(QApplication::translate("onesite", "1000", nullptr));
        endtime->setText(QApplication::translate("onesite", "12\346\234\21012\346\227\245", nullptr));
        label_8->setText(QApplication::translate("onesite", "\346\267\241\345\255\243\347\245\250\344\273\267", nullptr));
        label_y->setText(QApplication::translate("onesite", "\350\207\263\344\273\212\345\271\264", nullptr));
        label->setText(QApplication::translate("onesite", "\351\200\211\346\213\251\346\212\230\346\211\243\357\274\232", nullptr));
        cur_dis->setText(QApplication::translate("onesite", "\345\275\223\345\211\215\346\212\230\346\211\243\345\217\257\346\211\22385\346\212\230", nullptr));
        per_price->setText(QApplication::translate("onesite", "300\345\205\203", nullptr));
        time->setText(QApplication::translate("onesite", "100\345\210\206\351\222\237", nullptr));
        agetype->setText(QApplication::translate("onesite", "\344\270\215\351\200\202\345\220\210\351\225\277\350\200\205\345\217\212\345\204\277\347\253\245", nullptr));
        add->setText(QApplication::translate("onesite", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        profile->setText(QApplication::translate("onesite", "\345\214\227\344\272\254\345\212\250\347\211\251\345\233\255\344\275\215\344\272\216\345\214\227\344\272\254\345\270\202\350\245\277\345\237\216\345\214\272\350\245\277\347\233\264\351\227\250\345\244\226\345\244\247\350\241\227\357\274\214\344\270\234\351\202\273\345\214\227\344\272\254\345\261\225\350\247\210\351\246\206\345\222\214\350\216\253\346\226\257\347\247\221\351\244\220\345\216\205\357\274\214\345\215\240\345\234\260\351\235\242\347\247\257\347\272\24686\345\205\254\351\241\267\357\274\214\346\260\264\351\235\2428.6\345\205\254\351\241\267\343\200\202\345\247\213\345\273\272\344\272\216\346\270\205\345\205\211\347\273\252\344\270\211\345\215\201\344\272\214\345\271\264\357\274\2101906\345\271\264\357\274\211\357\274\214\346\230\257\344\270\255\345\233\275\345\274\200\346\224\276\346\234\200\346\227\251\343\200\201\351\245\262\345\205\273\345\261\225\345\207\272\345\212\250\347\211\251\347\247\215\347\261\273\346\234\200\345\244\232\347\232\204\345\212\250\347\211\251\345\233\255\343\200\202\351\245"
                        "\262\345\205\273\345\261\225\350\247\210\345\212\250\347\211\251500\344\275\231\347\247\2155000\345\244\232\345\217\252\357\274\233\346\265\267\346\264\213\351\261\274\347\261\273\345\217\212\346\265\267\346\264\213\347\224\237\347\211\251500\344\275\231\347\247\21510000\345\244\232\345\260\276\343\200\202\346\257\217\345\271\264\346\216\245\345\276\205\344\270\255\345\244\226\346\270\270\345\256\242600\345\244\232\344\270\207\344\272\272\346\254\241\343\200\202\346\230\257\344\270\255\345\233\275\346\234\200\345\244\247\347\232\204\345\212\250\347\211\251\345\233\255\344\271\213\344\270\200\357\274\214\344\271\237\346\230\257\344\270\200\346\211\200\344\270\226\347\225\214\347\237\245\345\220\215\347\232\204\345\212\250\347\211\251\345\233\255\343\200\202", nullptr));
        label_4->setText(QApplication::translate("onesite", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        label_11->setText(QApplication::translate("onesite", "\346\200\273\344\273\267\357\274\232", nullptr));
        all_price->setText(QApplication::translate("onesite", "100000\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class onesite: public Ui_onesite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONESITE_H
