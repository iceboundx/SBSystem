/********************************************************************************
** Form generated from reading UI file 'show_order.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ORDER_H
#define UI_SHOW_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_order
{
public:
    QLabel *name;
    QLabel *time;
    QLabel *all_price;
    QLabel *num;
    QLabel *type;
    QLabel *pe_price;

    void setupUi(QWidget *show_order)
    {
        if (show_order->objectName().isEmpty())
            show_order->setObjectName(QStringLiteral("show_order"));
        show_order->resize(390, 100);
        name = new QLabel(show_order);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 0, 161, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        name->setFont(font);
        name->setAcceptDrops(false);
        name->setWordWrap(true);
        time = new QLabel(show_order);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(50, 70, 291, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        time->setFont(font1);
        all_price = new QLabel(show_order);
        all_price->setObjectName(QStringLiteral("all_price"));
        all_price->setGeometry(QRect(250, 40, 131, 16));
        all_price->setFont(font1);
        num = new QLabel(show_order);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(170, 40, 72, 15));
        num->setFont(font1);
        type = new QLabel(show_order);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(170, 20, 81, 16));
        type->setFont(font1);
        pe_price = new QLabel(show_order);
        pe_price->setObjectName(QStringLiteral("pe_price"));
        pe_price->setGeometry(QRect(250, 20, 151, 16));
        pe_price->setFont(font1);

        retranslateUi(show_order);

        QMetaObject::connectSlotsByName(show_order);
    } // setupUi

    void retranslateUi(QWidget *show_order)
    {
        show_order->setWindowTitle(QApplication::translate("show_order", "Form", nullptr));
        name->setText(QApplication::translate("show_order", "\345\214\227\344\272\254\345\212\250\347\211\251\345\233\255", nullptr));
        time->setText(QApplication::translate("show_order", "\345\207\272\346\270\270\346\227\266\351\227\264\357\274\2322018\345\271\26405\346\234\21005\346\227\24512:30", nullptr));
        all_price->setText(QApplication::translate("show_order", "\346\200\273\344\273\267:10000000\345\205\203", nullptr));
        num->setText(QApplication::translate("show_order", "1000\345\274\240", nullptr));
        type->setText(QApplication::translate("show_order", "\346\231\256\351\200\232\347\245\250", nullptr));
        pe_price->setText(QApplication::translate("show_order", "\345\215\225\344\273\267:100\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_order: public Ui_show_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ORDER_H
