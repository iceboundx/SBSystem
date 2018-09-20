/********************************************************************************
** Form generated from reading UI file 'allsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSITE_H
#define UI_ALLSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allsite
{
public:
    QWidget *centralwidget;
    QCheckBox *ticket;
    QCheckBox *discount;
    QCommandLinkButton *name_s;
    QListWidget *site_list;
    QCommandLinkButton *area_s;
    QLineEdit *search;
    QLabel *label;
    QLabel *label_2;
    QPushButton *save_order;
    QPushButton *clear_o_list;
    QLabel *time_La;
    QListWidget *o_list;
    QPushButton *pushButton;
    QComboBox *sort_by;
    QPushButton *pushButton_2;
    QLabel *tip;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *allsite)
    {
        if (allsite->objectName().isEmpty())
            allsite->setObjectName(QStringLiteral("allsite"));
        allsite->resize(1199, 611);
        centralwidget = new QWidget(allsite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ticket = new QCheckBox(centralwidget);
        ticket->setObjectName(QStringLiteral("ticket"));
        ticket->setGeometry(QRect(90, 130, 91, 21));
        QFont font;
        font.setPointSize(9);
        ticket->setFont(font);
        ticket->setChecked(false);
        ticket->setTristate(false);
        discount = new QCheckBox(centralwidget);
        discount->setObjectName(QStringLiteral("discount"));
        discount->setGeometry(QRect(300, 130, 91, 21));
        discount->setFont(font);
        name_s = new QCommandLinkButton(centralwidget);
        name_s->setObjectName(QStringLiteral("name_s"));
        name_s->setGeometry(QRect(400, 60, 161, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        name_s->setFont(font1);
        site_list = new QListWidget(centralwidget);
        site_list->setObjectName(QStringLiteral("site_list"));
        site_list->setGeometry(QRect(20, 160, 731, 351));
        site_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        site_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        area_s = new QCommandLinkButton(centralwidget);
        area_s->setObjectName(QStringLiteral("area_s"));
        area_s->setGeometry(QRect(570, 60, 181, 41));
        area_s->setFont(font1);
        search = new QLineEdit(centralwidget);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(120, 60, 271, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(940, 160, 171, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(19);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(870, 210, 231, 16));
        save_order = new QPushButton(centralwidget);
        save_order->setObjectName(QStringLiteral("save_order"));
        save_order->setGeometry(QRect(250, 530, 211, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(16);
        save_order->setFont(font3);
        clear_o_list = new QPushButton(centralwidget);
        clear_o_list->setObjectName(QStringLiteral("clear_o_list"));
        clear_o_list->setGeometry(QRect(910, 530, 161, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        clear_o_list->setFont(font4);
        time_La = new QLabel(centralwidget);
        time_La->setObjectName(QStringLiteral("time_La"));
        time_La->setGeometry(QRect(230, 10, 511, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(14);
        time_La->setFont(font5);
        o_list = new QListWidget(centralwidget);
        o_list->setObjectName(QStringLiteral("o_list"));
        o_list->setGeometry(QRect(770, 240, 411, 271));
        o_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        o_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(750, 10, 131, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font6.setPointSize(11);
        pushButton->setFont(font6);
        sort_by = new QComboBox(centralwidget);
        sort_by->addItem(QString());
        sort_by->addItem(QString());
        sort_by->addItem(QString());
        sort_by->setObjectName(QStringLiteral("sort_by"));
        sort_by->setGeometry(QRect(500, 130, 121, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 71, 31));
        tip = new QLabel(centralwidget);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(10, 60, 111, 20));
        allsite->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(allsite);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        allsite->setStatusBar(statusbar);

        retranslateUi(allsite);

        QMetaObject::connectSlotsByName(allsite);
    } // setupUi

    void retranslateUi(QMainWindow *allsite)
    {
        allsite->setWindowTitle(QApplication::translate("allsite", "\346\237\245\347\234\213\346\231\257\347\202\271", nullptr));
        ticket->setText(QApplication::translate("allsite", "\346\234\211\347\245\250", nullptr));
        discount->setText(QApplication::translate("allsite", "\346\212\230\346\211\243", nullptr));
        name_s->setText(QApplication::translate("allsite", "\346\214\211\345\220\215\345\255\227\346\220\234\347\264\242", nullptr));
        area_s->setText(QApplication::translate("allsite", "\346\214\211\345\234\260\345\214\272\346\220\234\347\264\242", nullptr));
        label->setText(QApplication::translate("allsite", "\350\264\255\347\211\251\350\275\246", nullptr));
        label_2->setText(QApplication::translate("allsite", "\347\202\271\345\207\273\345\257\271\345\272\224\351\241\271\345\217\257\345\260\206\345\205\266\344\273\216\350\264\255\347\211\251\350\275\246\344\270\255\345\210\240\351\231\244", nullptr));
        save_order->setText(QApplication::translate("allsite", "\347\273\223\347\256\227", nullptr));
        clear_o_list->setText(QApplication::translate("allsite", "\346\270\205\347\251\272\350\264\255\347\211\251\350\275\246", nullptr));
        time_La->setText(QApplication::translate("allsite", "\346\202\250\347\232\204\345\207\272\346\270\270\346\227\266\351\227\264\344\270\272\357\274\2322018\345\271\26412\346\234\21012\346\227\24510:20", nullptr));
        pushButton->setText(QApplication::translate("allsite", "\344\277\256\346\224\271\345\207\272\346\270\270\346\227\266\351\227\264", nullptr));
        sort_by->setItemText(0, QApplication::translate("allsite", "\346\216\250\350\215\220\346\216\222\345\272\217", nullptr));
        sort_by->setItemText(1, QApplication::translate("allsite", "\344\273\267\346\240\274\346\216\222\345\272\217", nullptr));
        sort_by->setItemText(2, QApplication::translate("allsite", "\351\242\204\350\256\242\351\207\217\346\216\222\345\272\217", nullptr));

        pushButton_2->setText(QApplication::translate("allsite", "\345\217\226\346\266\210\346\220\234\347\264\242", nullptr));
        tip->setText(QApplication::translate("allsite", "\345\267\262\346\214\211\347\205\247\345\220\215\345\255\227\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class allsite: public Ui_allsite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSITE_H
