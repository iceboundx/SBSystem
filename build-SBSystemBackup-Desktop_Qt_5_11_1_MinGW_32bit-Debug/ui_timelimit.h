/********************************************************************************
** Form generated from reading UI file 'timelimit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELIMIT_H
#define UI_TIMELIMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timelimit
{
public:
    QWidget *centralwidget;
    QTimeEdit *timeEdit_2;
    QSpinBox *ticketnum;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_5;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit_2;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *timelimit)
    {
        if (timelimit->objectName().isEmpty())
            timelimit->setObjectName(QStringLiteral("timelimit"));
        timelimit->resize(541, 398);
        centralwidget = new QWidget(timelimit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        timeEdit_2 = new QTimeEdit(centralwidget);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(270, 100, 101, 22));
        ticketnum = new QSpinBox(centralwidget);
        ticketnum->setObjectName(QStringLiteral("ticketnum"));
        ticketnum->setGeometry(QRect(160, 150, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ticketnum->setFont(font);
        ticketnum->setFrame(false);
        ticketnum->setMinimum(1000);
        ticketnum->setMaximum(999999);
        ticketnum->setSingleStep(100);
        ticketnum->setValue(1000);
        ticketnum->setDisplayIntegerBase(10);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 100, 72, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_6->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 270, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        pushButton->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 60, 72, 21));
        label_5->setFont(font1);
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(130, 100, 91, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 150, 72, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        label_3->setFont(font3);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 60, 31, 21));
        label_4->setFont(font1);
        dateEdit_2 = new QDateEdit(centralwidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(260, 60, 110, 22));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 100, 111, 21));
        label_7->setFont(font1);
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(110, 60, 110, 22));
        timelimit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(timelimit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 541, 26));
        timelimit->setMenuBar(menubar);
        statusbar = new QStatusBar(timelimit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        timelimit->setStatusBar(statusbar);

        retranslateUi(timelimit);

        QMetaObject::connectSlotsByName(timelimit);
    } // setupUi

    void retranslateUi(QMainWindow *timelimit)
    {
        timelimit->setWindowTitle(QApplication::translate("timelimit", "MainWindow", nullptr));
        timeEdit_2->setDisplayFormat(QApplication::translate("timelimit", "HH:mm", nullptr));
        label_6->setText(QApplication::translate("timelimit", "\350\207\263", nullptr));
        pushButton->setText(QApplication::translate("timelimit", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        label_5->setText(QApplication::translate("timelimit", "\350\207\263", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("timelimit", "HH:mm", nullptr));
        label_3->setText(QApplication::translate("timelimit", "\351\227\250\347\245\250\351\207\217\344\270\272", nullptr));
        label_4->setText(QApplication::translate("timelimit", "\344\273\216", nullptr));
        dateEdit_2->setDisplayFormat(QApplication::translate("timelimit", "MM\346\234\210/dd\346\227\245", nullptr));
        label_7->setText(QApplication::translate("timelimit", "\346\255\244\346\227\266\351\227\264\346\256\265\345\206\205", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("timelimit", "MM\346\234\210/dd\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timelimit: public Ui_timelimit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELIMIT_H
