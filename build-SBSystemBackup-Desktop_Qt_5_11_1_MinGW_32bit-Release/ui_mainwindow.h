/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tourist;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *cancel_3;
    QPushButton *touristlogin;
    QLabel *label_3;
    QLabel *warn;
    QLineEdit *tpasswd;
    QLabel *tprompt;
    QLineEdit *tusername;
    QWidget *admin;
    QPushButton *adminlogin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *warn_2;
    QLineEdit *apasswd;
    QLabel *aprompt;
    QLineEdit *ausername;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(902, 601);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 10, 891, 571));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(185, 185, 185, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(220, 220, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(92, 92, 92, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(123, 123, 123, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tourist = new QWidget();
        tourist->setObjectName(QStringLiteral("tourist"));
        label_5 = new QLabel(tourist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 110, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        label_5->setFont(font1);
        label_6 = new QLabel(tourist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 200, 101, 41));
        label_6->setFont(font1);
        cancel_3 = new QPushButton(tourist);
        cancel_3->setObjectName(QStringLiteral("cancel_3"));
        cancel_3->setGeometry(QRect(170, 330, 231, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        cancel_3->setFont(font2);
        touristlogin = new QPushButton(tourist);
        touristlogin->setObjectName(QStringLiteral("touristlogin"));
        touristlogin->setGeometry(QRect(500, 330, 231, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        touristlogin->setFont(font3);
        label_3 = new QLabel(tourist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 20, 331, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        label_3->setFont(font4);
        warn = new QLabel(tourist);
        warn->setObjectName(QStringLiteral("warn"));
        warn->setEnabled(true);
        warn->setGeometry(QRect(310, 270, 271, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        warn->setFont(font5);
        tpasswd = new QLineEdit(tourist);
        tpasswd->setObjectName(QStringLiteral("tpasswd"));
        tpasswd->setGeometry(QRect(310, 200, 351, 51));
        QFont font6;
        font6.setPointSize(11);
        tpasswd->setFont(font6);
        tprompt = new QLabel(tourist);
        tprompt->setObjectName(QStringLiteral("tprompt"));
        tprompt->setGeometry(QRect(680, 120, 171, 20));
        tusername = new QLineEdit(tourist);
        tusername->setObjectName(QStringLiteral("tusername"));
        tusername->setGeometry(QRect(310, 110, 351, 51));
        QFont font7;
        font7.setPointSize(12);
        tusername->setFont(font7);
        tusername->setMaxLength(10);
        tusername->setCursorPosition(0);
        tabWidget->addTab(tourist, QString());
        admin = new QWidget();
        admin->setObjectName(QStringLiteral("admin"));
        adminlogin = new QPushButton(admin);
        adminlogin->setObjectName(QStringLiteral("adminlogin"));
        adminlogin->setGeometry(QRect(300, 350, 231, 71));
        adminlogin->setFont(font3);
        label = new QLabel(admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 110, 101, 41));
        label->setFont(font1);
        label_2 = new QLabel(admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 200, 101, 41));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 40, 331, 51));
        label_4->setFont(font4);
        warn_2 = new QLabel(admin);
        warn_2->setObjectName(QStringLiteral("warn_2"));
        warn_2->setEnabled(true);
        warn_2->setGeometry(QRect(280, 270, 271, 31));
        warn_2->setFont(font5);
        apasswd = new QLineEdit(admin);
        apasswd->setObjectName(QStringLiteral("apasswd"));
        apasswd->setGeometry(QRect(280, 200, 351, 51));
        apasswd->setFont(font6);
        aprompt = new QLabel(admin);
        aprompt->setObjectName(QStringLiteral("aprompt"));
        aprompt->setGeometry(QRect(650, 130, 171, 20));
        ausername = new QLineEdit(admin);
        ausername->setObjectName(QStringLiteral("ausername"));
        ausername->setGeometry(QRect(280, 110, 351, 51));
        ausername->setFont(font7);
        ausername->setMaxLength(10);
        tabWidget->addTab(admin, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SBSystem", nullptr));
        label_5->setText(QApplication::translate("MainWindow", " \347\224\250\346\210\267id", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        cancel_3->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        touristlogin->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\227\205\346\270\270\345\233\242\347\231\273\351\231\206", nullptr));
        warn->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\345\206\215\350\257\225\344\270\200\346\254\241", nullptr));
        tprompt->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\351\225\277\345\272\246\344\270\2726-10", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tourist), QApplication::translate("MainWindow", "Tourist", nullptr));
        adminlogin->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        label->setText(QApplication::translate("MainWindow", "  \347\256\241\347\220\206\345\221\230id", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " \345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("MainWindow", " \347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        warn_2->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\345\206\215\350\257\225\344\270\200\346\254\241", nullptr));
        aprompt->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\351\225\277\345\272\246\344\270\2726-10", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(admin), QApplication::translate("MainWindow", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
