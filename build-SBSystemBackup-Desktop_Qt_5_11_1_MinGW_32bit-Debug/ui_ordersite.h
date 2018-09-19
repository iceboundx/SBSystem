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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ordersite
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *all_price;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *tour_id;
    QLabel *order_time;
    QLabel *id;
    QLabel *tour_id_r;
    QListWidget *o_list;
    QPushButton *del;

    void setupUi(QMainWindow *ordersite)
    {
        if (ordersite->objectName().isEmpty())
            ordersite->setObjectName(QStringLiteral("ordersite"));
        ordersite->resize(762, 552);
        centralwidget = new QWidget(ordersite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 160, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_5->setFont(font);
        all_price = new QLabel(groupBox_2);
        all_price->setObjectName(QStringLiteral("all_price"));
        all_price->setGeometry(QRect(130, 160, 241, 31));
        QFont font1;
        font1.setPointSize(10);
        all_price->setFont(font1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 40, 81, 21));
        label_6->setFont(font);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 90, 81, 31));
        label_7->setFont(font);
        tour_id = new QLabel(groupBox_2);
        tour_id->setObjectName(QStringLiteral("tour_id"));
        tour_id->setGeometry(QRect(440, 90, 81, 31));
        tour_id->setFont(font);
        order_time = new QLabel(groupBox_2);
        order_time->setObjectName(QStringLiteral("order_time"));
        order_time->setGeometry(QRect(130, 90, 261, 31));
        order_time->setFont(font1);
        id = new QLabel(groupBox_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(130, 30, 491, 31));
        id->setFont(font1);
        tour_id_r = new QLabel(groupBox_2);
        tour_id_r->setObjectName(QStringLiteral("tour_id_r"));
        tour_id_r->setGeometry(QRect(520, 90, 241, 31));
        tour_id_r->setFont(font1);
        o_list = new QListWidget(groupBox_2);
        o_list->setObjectName(QStringLiteral("o_list"));
        o_list->setGeometry(QRect(160, 200, 411, 271));
        o_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        o_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        del = new QPushButton(groupBox_2);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(320, 490, 93, 28));

        horizontalLayout->addWidget(groupBox_2);

        ordersite->setCentralWidget(centralwidget);

        retranslateUi(ordersite);

        QMetaObject::connectSlotsByName(ordersite);
    } // setupUi

    void retranslateUi(QMainWindow *ordersite)
    {
        ordersite->setWindowTitle(QApplication::translate("ordersite", "MainWindow", nullptr));
        groupBox_2->setTitle(QApplication::translate("ordersite", "\351\242\204\350\256\242\344\277\241\346\201\257", nullptr));
        label_5->setText(QApplication::translate("ordersite", "\346\200\273\347\245\250\344\273\267", nullptr));
        all_price->setText(QApplication::translate("ordersite", "10000000000000000", nullptr));
        label_6->setText(QApplication::translate("ordersite", "\350\256\242\345\215\225ID", nullptr));
        label_7->setText(QApplication::translate("ordersite", "\351\242\204\345\256\232\346\227\266\351\227\264", nullptr));
        tour_id->setText(QApplication::translate("ordersite", "\351\242\204\345\256\232\344\272\272ID", nullptr));
        order_time->setText(QApplication::translate("ordersite", "2018\345\271\26412\346\234\21012\346\227\24523\346\227\26659\345\210\20659\347\247\222", nullptr));
        id->setText(QApplication::translate("ordersite", "2018\345\271\26412\346\234\21012\346\227\24523\346\227\26659\345\210\20659\347\247\222", nullptr));
        tour_id_r->setText(QApplication::translate("ordersite", "10000000000000000", nullptr));
        del->setText(QApplication::translate("ordersite", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ordersite: public Ui_ordersite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSITE_H
