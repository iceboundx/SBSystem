/********************************************************************************
** Form generated from reading UI file 'timelim.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELIM_H
#define UI_TIMELIM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timelim
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *addtimelim;
    QSpinBox *ticketnum;
    QPushButton *cancel;
    QListWidget *time_list;
    QDateEdit *datesta;
    QTimeEdit *timesta;
    QTimeEdit *timeed;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateed;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *timelim)
    {
        if (timelim->objectName().isEmpty())
            timelim->setObjectName(QStringLiteral("timelim"));
        timelim->resize(743, 326);
        centralwidget = new QWidget(timelim);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 31, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 40, 72, 21));
        label_5->setFont(font1);
        addtimelim = new QPushButton(centralwidget);
        addtimelim->setObjectName(QStringLiteral("addtimelim"));
        addtimelim->setGeometry(QRect(150, 220, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        addtimelim->setFont(font2);
        ticketnum = new QSpinBox(centralwidget);
        ticketnum->setObjectName(QStringLiteral("ticketnum"));
        ticketnum->setGeometry(QRect(90, 170, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ticketnum->setFont(font3);
        ticketnum->setFrame(false);
        ticketnum->setAccelerated(true);
        ticketnum->setMinimum(0);
        ticketnum->setMaximum(999999);
        ticketnum->setSingleStep(100);
        ticketnum->setValue(0);
        ticketnum->setDisplayIntegerBase(10);
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(20, 230, 91, 31));
        cancel->setFont(font2);
        time_list = new QListWidget(centralwidget);
        time_list->setObjectName(QStringLiteral("time_list"));
        time_list->setGeometry(QRect(340, 50, 391, 211));
        datesta = new QDateEdit(centralwidget);
        datesta->setObjectName(QStringLiteral("datesta"));
        datesta->setGeometry(QRect(40, 40, 110, 22));
        datesta->setMaximumDateTime(QDateTime(QDate(2017, 12, 31), QTime(23, 59, 59)));
        datesta->setMinimumDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));
        timesta = new QTimeEdit(centralwidget);
        timesta->setObjectName(QStringLiteral("timesta"));
        timesta->setGeometry(QRect(30, 100, 118, 22));
        timeed = new QTimeEdit(centralwidget);
        timeed->setObjectName(QStringLiteral("timeed"));
        timeed->setGeometry(QRect(170, 100, 118, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 72, 15));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 80, 72, 15));
        dateed = new QDateEdit(centralwidget);
        dateed->setObjectName(QStringLiteral("dateed"));
        dateed->setGeometry(QRect(190, 40, 110, 22));
        dateed->setMaximumDateTime(QDateTime(QDate(2017, 12, 31), QTime(23, 59, 59)));
        dateed->setMinimumDateTime(QDateTime(QDate(2017, 1, 1), QTime(0, 0, 0)));
        dateed->setDate(QDate(2017, 12, 31));
        timelim->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(timelim);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        timelim->setStatusBar(statusbar);

        retranslateUi(timelim);

        QMetaObject::connectSlotsByName(timelim);
    } // setupUi

    void retranslateUi(QMainWindow *timelim)
    {
        timelim->setWindowTitle(QApplication::translate("timelim", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("timelim", "\346\257\217\346\227\245\347\232\204\350\257\245\346\227\266\346\256\265\351\231\220\345\210\266\351\227\250\347\245\250\351\207\217\344\270\272", nullptr));
        label_4->setText(QApplication::translate("timelim", "\344\273\216", nullptr));
        label_5->setText(QApplication::translate("timelim", "\350\207\263", nullptr));
        addtimelim->setText(QApplication::translate("timelim", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        cancel->setText(QApplication::translate("timelim", "\345\217\226\346\266\210", nullptr));
        datesta->setDisplayFormat(QApplication::translate("timelim", "MM/dd", nullptr));
        timesta->setDisplayFormat(QApplication::translate("timelim", "HH:mm", nullptr));
        timeed->setDisplayFormat(QApplication::translate("timelim", "HH:mm", nullptr));
        label->setText(QApplication::translate("timelim", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_2->setText(QApplication::translate("timelim", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        dateed->setDisplayFormat(QApplication::translate("timelim", "MM/dd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timelim: public Ui_timelim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELIM_H
