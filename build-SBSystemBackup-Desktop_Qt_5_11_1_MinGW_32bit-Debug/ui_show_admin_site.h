/********************************************************************************
** Form generated from reading UI file 'show_admin_site.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ADMIN_SITE_H
#define UI_SHOW_ADMIN_SITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_admin_site
{
public:
    QLabel *name;
    QLabel *all_order;
    QLabel *area;
    QLabel *price_low;
    QLabel *price_high;
    QLabel *profit;
    QLabel *ma_price;
    QLabel *all_num;
    QLabel *autumn;
    QLabel *winter;
    QLabel *summer;
    QLabel *spring;
    QPushButton *more_info;

    void setupUi(QWidget *show_admin_site)
    {
        if (show_admin_site->objectName().isEmpty())
            show_admin_site->setObjectName(QStringLiteral("show_admin_site"));
        show_admin_site->resize(715, 119);
        name = new QLabel(show_admin_site);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 10, 281, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        name->setFont(font);
        all_order = new QLabel(show_admin_site);
        all_order->setObjectName(QStringLiteral("all_order"));
        all_order->setGeometry(QRect(120, 90, 201, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        all_order->setFont(font1);
        area = new QLabel(show_admin_site);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(10, 90, 101, 16));
        area->setFont(font1);
        price_low = new QLabel(show_admin_site);
        price_low->setObjectName(QStringLiteral("price_low"));
        price_low->setGeometry(QRect(300, 20, 161, 16));
        price_low->setFont(font1);
        price_high = new QLabel(show_admin_site);
        price_high->setObjectName(QStringLiteral("price_high"));
        price_high->setGeometry(QRect(300, 40, 161, 16));
        price_high->setFont(font1);
        profit = new QLabel(show_admin_site);
        profit->setObjectName(QStringLiteral("profit"));
        profit->setGeometry(QRect(300, 80, 161, 16));
        profit->setFont(font1);
        ma_price = new QLabel(show_admin_site);
        ma_price->setObjectName(QStringLiteral("ma_price"));
        ma_price->setGeometry(QRect(300, 60, 161, 16));
        ma_price->setFont(font1);
        all_num = new QLabel(show_admin_site);
        all_num->setObjectName(QStringLiteral("all_num"));
        all_num->setGeometry(QRect(450, 85, 251, 31));
        all_num->setFont(font1);
        autumn = new QLabel(show_admin_site);
        autumn->setObjectName(QStringLiteral("autumn"));
        autumn->setGeometry(QRect(470, 50, 161, 16));
        autumn->setFont(font1);
        winter = new QLabel(show_admin_site);
        winter->setObjectName(QStringLiteral("winter"));
        winter->setGeometry(QRect(470, 70, 161, 16));
        winter->setFont(font1);
        summer = new QLabel(show_admin_site);
        summer->setObjectName(QStringLiteral("summer"));
        summer->setGeometry(QRect(470, 30, 161, 16));
        summer->setFont(font1);
        spring = new QLabel(show_admin_site);
        spring->setObjectName(QStringLiteral("spring"));
        spring->setGeometry(QRect(470, 10, 161, 16));
        spring->setFont(font1);
        more_info = new QPushButton(show_admin_site);
        more_info->setObjectName(QStringLiteral("more_info"));
        more_info->setGeometry(QRect(600, 40, 93, 28));

        retranslateUi(show_admin_site);

        QMetaObject::connectSlotsByName(show_admin_site);
    } // setupUi

    void retranslateUi(QWidget *show_admin_site)
    {
        show_admin_site->setWindowTitle(QApplication::translate("show_admin_site", "Form", nullptr));
        name->setText(QApplication::translate("show_admin_site", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        all_order->setText(QApplication::translate("show_admin_site", "\346\200\273\351\242\204\350\256\242\351\207\217\357\274\2321000\345\274\240", nullptr));
        area->setText(QApplication::translate("show_admin_site", "\345\234\260\345\214\272", nullptr));
        price_low->setText(QApplication::translate("show_admin_site", "\346\267\241\345\255\243\347\245\250\344\273\267:1000", nullptr));
        price_high->setText(QApplication::translate("show_admin_site", "\346\227\272\345\255\243\347\245\250\344\273\267:1000", nullptr));
        profit->setText(QApplication::translate("show_admin_site", "\345\210\251\346\266\246:1000000", nullptr));
        ma_price->setText(QApplication::translate("show_admin_site", "\347\273\264\346\212\244\350\264\271\347\224\250:1000000", nullptr));
        all_num->setText(QApplication::translate("show_admin_site", "\346\200\273\350\256\277\351\227\256\344\272\272\346\225\260:10000000", nullptr));
        autumn->setText(QApplication::translate("show_admin_site", "\347\247\213\345\255\243\344\272\272\346\225\260:1000", nullptr));
        winter->setText(QApplication::translate("show_admin_site", "\345\206\254\345\255\243\344\272\272\346\225\260:1000", nullptr));
        summer->setText(QApplication::translate("show_admin_site", "\345\244\217\345\255\243\344\272\272\346\225\260:1000", nullptr));
        spring->setText(QApplication::translate("show_admin_site", "\346\230\245\345\255\243\344\272\272\346\225\260:1000", nullptr));
        more_info->setText(QApplication::translate("show_admin_site", "\345\271\264\351\276\204\345\210\206\345\270\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_admin_site: public Ui_show_admin_site {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ADMIN_SITE_H
