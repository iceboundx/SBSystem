/********************************************************************************
** Form generated from reading UI file 'timelim.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELIM_H
#define UI_TIMELIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timelim
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *addtimelim;
    QSpinBox *ticketnum;
    QPushButton *cancel;
    QDateTimeEdit *begin;
    QDateTimeEdit *end;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *timelim)
    {
        if (timelim->objectName().isEmpty())
            timelim->setObjectName(QStringLiteral("timelim"));
        timelim->resize(576, 398);
        centralwidget = new QWidget(timelim);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 150, 72, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label_3->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 100, 111, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_7->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 60, 31, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 100, 72, 21));
        label_5->setFont(font1);
        addtimelim = new QPushButton(centralwidget);
        addtimelim->setObjectName(QStringLiteral("addtimelim"));
        addtimelim->setGeometry(QRect(370, 270, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        addtimelim->setFont(font2);
        ticketnum = new QSpinBox(centralwidget);
        ticketnum->setObjectName(QStringLiteral("ticketnum"));
        ticketnum->setGeometry(QRect(170, 150, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ticketnum->setFont(font3);
        ticketnum->setFrame(false);
        ticketnum->setMinimum(1000);
        ticketnum->setMaximum(999999);
        ticketnum->setSingleStep(100);
        ticketnum->setValue(1000);
        ticketnum->setDisplayIntegerBase(10);
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(260, 280, 91, 31));
        cancel->setFont(font2);
        begin = new QDateTimeEdit(centralwidget);
        begin->setObjectName(QStringLiteral("begin"));
        begin->setGeometry(QRect(130, 60, 194, 22));
        begin->setFrame(false);
        end = new QDateTimeEdit(centralwidget);
        end->setObjectName(QStringLiteral("end"));
        end->setGeometry(QRect(130, 100, 194, 22));
        end->setFrame(false);
        timelim->setCentralWidget(centralwidget);
        menubar = new QMenuBar(timelim);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 576, 26));
        timelim->setMenuBar(menubar);
        statusbar = new QStatusBar(timelim);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        timelim->setStatusBar(statusbar);

        retranslateUi(timelim);

        QMetaObject::connectSlotsByName(timelim);
    } // setupUi

    void retranslateUi(QMainWindow *timelim)
    {
        timelim->setWindowTitle(QApplication::translate("timelim", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("timelim", "\351\227\250\347\245\250\351\207\217\344\270\272", nullptr));
        label_7->setText(QApplication::translate("timelim", "\346\255\244\346\227\266\351\227\264\346\256\265\345\206\205", nullptr));
        label_4->setText(QApplication::translate("timelim", "\344\273\216", nullptr));
        label_5->setText(QApplication::translate("timelim", "\350\207\263", nullptr));
        addtimelim->setText(QApplication::translate("timelim", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        cancel->setText(QApplication::translate("timelim", "\345\217\226\346\266\210", nullptr));
        begin->setDisplayFormat(QApplication::translate("timelim", "yyyy/Mm/dd HH:mm", nullptr));
        end->setDisplayFormat(QApplication::translate("timelim", "yyyy/Mm/dd HH:mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timelim: public Ui_timelim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELIM_H