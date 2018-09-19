/********************************************************************************
** Form generated from reading UI file 'show_site.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_SITE_H
#define UI_SHOW_SITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_site
{
public:
    QLabel *name;
    QLabel *area;
    QPushButton *more;
    QLabel *left;
    QLabel *price;
    QLabel *type;
    QLabel *is_dis;
    QLabel *num;
    QLabel *is_re;

    void setupUi(QWidget *show_site)
    {
        if (show_site->objectName().isEmpty())
            show_site->setObjectName(QStringLiteral("show_site"));
        show_site->resize(705, 91);
        name = new QLabel(show_site);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 0, 271, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);
        area = new QLabel(show_site);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(10, 50, 101, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        area->setFont(font1);
        more = new QPushButton(show_site);
        more->setObjectName(QStringLiteral("more"));
        more->setGeometry(QRect(590, 20, 93, 28));
        left = new QLabel(show_site);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(120, 50, 171, 16));
        left->setFont(font1);
        price = new QLabel(show_site);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(280, 0, 181, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(15);
        price->setFont(font2);
        type = new QLabel(show_site);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(300, 50, 141, 16));
        type->setFont(font1);
        is_dis = new QLabel(show_site);
        is_dis->setObjectName(QStringLiteral("is_dis"));
        is_dis->setGeometry(QRect(480, 20, 72, 15));
        is_dis->setFont(font1);
        num = new QLabel(show_site);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(440, 50, 161, 16));
        num->setFont(font1);
        is_re = new QLabel(show_site);
        is_re->setObjectName(QStringLiteral("is_re"));
        is_re->setGeometry(QRect(600, 60, 71, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        is_re->setFont(font3);

        retranslateUi(show_site);

        QMetaObject::connectSlotsByName(show_site);
    } // setupUi

    void retranslateUi(QWidget *show_site)
    {
        show_site->setWindowTitle(QApplication::translate("show_site", "Form", nullptr));
        name->setText(QApplication::translate("show_site", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        area->setText(QApplication::translate("show_site", "\345\234\260\345\214\272", nullptr));
        more->setText(QApplication::translate("show_site", "\350\257\246\346\203\205", nullptr));
        left->setText(QApplication::translate("show_site", "\344\275\231\347\245\250\351\207\217\357\274\232", nullptr));
        price->setText(QApplication::translate("show_site", "999\345\205\203\350\265\267", nullptr));
        type->setText(QApplication::translate("show_site", "\344\270\215\351\200\202\345\220\210\350\200\201\345\271\264\345\222\214\345\204\277\347\253\245", nullptr));
        is_dis->setText(QApplication::translate("show_site", "\346\234\211\346\212\230\346\211\243", nullptr));
        num->setText(QApplication::translate("show_site", "\345\267\262\345\224\256\345\207\272\357\274\2321000\345\274\240", nullptr));
        is_re->setText(QApplication::translate("show_site", "<font color=\"red\">\347\263\273\347\273\237\346\216\250\350\215\220</font>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_site: public Ui_show_site {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_SITE_H
