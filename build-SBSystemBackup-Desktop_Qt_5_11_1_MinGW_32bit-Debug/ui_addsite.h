/********************************************************************************
** Form generated from reading UI file 'addsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSITE_H
#define UI_ADDSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addsite
{
public:
    QWidget *centralwidget;
    QGroupBox *groupbox;
    QTextEdit *name;
    QLabel *label_2;
    QSpinBox *ticketnum;
    QLabel *label;
    QTextEdit *id;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *pricehigh;
    QSpinBox *pricelow;
    QLabel *label_9;
    QListWidget *listWidget;
    QLabel *label_10;
    QSpinBox *level;
    QDateEdit *dateEdit_3;
    QTextEdit *profile;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *maprice;
    QPushButton *timelimit;
    QLabel *label_13;
    QTextEdit *area;
    QLabel *label_14;
    QLabel *label_15;
    QTextEdit *time;
    QTextEdit *newid;
    QLabel *newlabel;
    QLabel *label_16;
    QPushButton *saveprice;
    QLabel *idprompt;
    QPushButton *publish;
    QPushButton *pushButton_2;
    QPushButton *save;
    QLineEdit *newprice;
    QLabel *disprompt;
    QComboBox *comboBox;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addsite)
    {
        if (addsite->objectName().isEmpty())
            addsite->setObjectName(QStringLiteral("addsite"));
        addsite->resize(966, 817);
        centralwidget = new QWidget(addsite);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupbox = new QGroupBox(centralwidget);
        groupbox->setObjectName(QStringLiteral("groupbox"));
        groupbox->setGeometry(QRect(40, 0, 901, 751));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupbox->setFont(font);
        name = new QTextEdit(groupbox);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(160, 20, 231, 41));
        label_2 = new QLabel(groupbox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 81, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        ticketnum = new QSpinBox(groupbox);
        ticketnum->setObjectName(QStringLiteral("ticketnum"));
        ticketnum->setGeometry(QRect(160, 330, 201, 41));
        ticketnum->setFont(font);
        ticketnum->setFrame(false);
        ticketnum->setMinimum(1000);
        ticketnum->setMaximum(999999);
        ticketnum->setSingleStep(100);
        ticketnum->setValue(1000);
        ticketnum->setDisplayIntegerBase(10);
        label = new QLabel(groupbox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 81, 21));
        label->setFont(font1);
        id = new QTextEdit(groupbox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(160, 70, 231, 41));
        label_3 = new QLabel(groupbox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 130, 91, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(groupbox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 340, 91, 21));
        label_4->setFont(font1);
        dateEdit = new QDateEdit(groupbox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(460, 130, 110, 22));
        dateEdit->setFont(font);
        dateEdit->setFrame(false);
        dateEdit->setMinimumDateTime(QDateTime(QDate(1752, 9, 14), QTime(0, 0, 0)));
        label_5 = new QLabel(groupbox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 130, 81, 20));
        label_5->setFont(font);
        label_6 = new QLabel(groupbox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 130, 71, 16));
        label_6->setFont(font);
        label_7 = new QLabel(groupbox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 130, 51, 16));
        label_7->setFont(font);
        label_8 = new QLabel(groupbox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 160, 61, 16));
        label_8->setFont(font);
        pricehigh = new QSpinBox(groupbox);
        pricehigh->setObjectName(QStringLiteral("pricehigh"));
        pricehigh->setGeometry(QRect(240, 130, 46, 22));
        pricehigh->setFont(font);
        pricehigh->setFrame(false);
        pricehigh->setMaximum(9999);
        pricehigh->setSingleStep(1);
        pricelow = new QSpinBox(groupbox);
        pricelow->setObjectName(QStringLiteral("pricelow"));
        pricelow->setGeometry(QRect(240, 160, 46, 22));
        pricelow->setFont(font);
        pricelow->setFrame(false);
        pricelow->setMaximum(9999);
        pricelow->setSingleStep(1);
        label_9 = new QLabel(groupbox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 200, 61, 16));
        label_9->setFont(font);
        listWidget = new QListWidget(groupbox);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(230, 200, 91, 91));
        label_10 = new QLabel(groupbox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 440, 91, 21));
        label_10->setFont(font1);
        level = new QSpinBox(groupbox);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(160, 440, 61, 31));
        level->setFont(font);
        level->setFrame(false);
        level->setMinimum(0);
        level->setMaximum(5);
        level->setSingleStep(1);
        level->setValue(0);
        level->setDisplayIntegerBase(10);
        dateEdit_3 = new QDateEdit(groupbox);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(610, 130, 110, 22));
        dateEdit_3->setFont(font);
        dateEdit_3->setFrame(false);
        profile = new QTextEdit(groupbox);
        profile->setObjectName(QStringLiteral("profile"));
        profile->setGeometry(QRect(160, 560, 561, 121));
        label_11 = new QLabel(groupbox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 380, 91, 21));
        label_11->setFont(font1);
        label_12 = new QLabel(groupbox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 560, 91, 21));
        label_12->setFont(font1);
        maprice = new QSpinBox(groupbox);
        maprice->setObjectName(QStringLiteral("maprice"));
        maprice->setGeometry(QRect(160, 380, 201, 41));
        maprice->setFont(font);
        maprice->setFrame(false);
        maprice->setMinimum(0);
        maprice->setMaximum(999999);
        maprice->setSingleStep(10);
        maprice->setValue(0);
        maprice->setDisplayIntegerBase(10);
        timelimit = new QPushButton(groupbox);
        timelimit->setObjectName(QStringLiteral("timelimit"));
        timelimit->setGeometry(QRect(370, 330, 121, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(8);
        timelimit->setFont(font2);
        label_13 = new QLabel(groupbox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(450, 440, 91, 21));
        label_13->setFont(font1);
        area = new QTextEdit(groupbox);
        area->setObjectName(QStringLiteral("area"));
        area->setGeometry(QRect(540, 430, 231, 41));
        label_14 = new QLabel(groupbox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(60, 510, 111, 21));
        label_14->setFont(font1);
        label_15 = new QLabel(groupbox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(300, 510, 91, 21));
        label_15->setFont(font1);
        time = new QTextEdit(groupbox);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(200, 500, 101, 31));
        newid = new QTextEdit(groupbox);
        newid->setObjectName(QStringLiteral("newid"));
        newid->setGeometry(QRect(360, 200, 91, 31));
        newlabel = new QLabel(groupbox);
        newlabel->setObjectName(QStringLiteral("newlabel"));
        newlabel->setGeometry(QRect(460, 210, 81, 16));
        label_16 = new QLabel(groupbox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(610, 650, 101, 20));
        saveprice = new QPushButton(groupbox);
        saveprice->setObjectName(QStringLiteral("saveprice"));
        saveprice->setGeometry(QRect(640, 200, 61, 28));
        idprompt = new QLabel(groupbox);
        idprompt->setObjectName(QStringLiteral("idprompt"));
        idprompt->setGeometry(QRect(410, 80, 131, 16));
        publish = new QPushButton(groupbox);
        publish->setObjectName(QStringLiteral("publish"));
        publish->setGeometry(QRect(700, 690, 161, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        publish->setFont(font3);
        pushButton_2 = new QPushButton(groupbox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 700, 121, 41));
        pushButton_2->setFont(font1);
        save = new QPushButton(groupbox);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(550, 700, 121, 41));
        save->setFont(font1);
        newprice = new QLineEdit(groupbox);
        newprice->setObjectName(QStringLiteral("newprice"));
        newprice->setGeometry(QRect(540, 200, 81, 31));
        disprompt = new QLabel(groupbox);
        disprompt->setObjectName(QStringLiteral("disprompt"));
        disprompt->setGeometry(QRect(540, 240, 111, 16));
        QFont font4;
        font4.setPointSize(8);
        disprompt->setFont(font4);
        comboBox = new QComboBox(groupbox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(550, 500, 131, 31));
        label_17 = new QLabel(groupbox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(450, 510, 91, 21));
        label_17->setFont(font1);
        addsite->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addsite);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 966, 26));
        addsite->setMenuBar(menubar);
        statusbar = new QStatusBar(addsite);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        addsite->setStatusBar(statusbar);

        retranslateUi(addsite);

        QMetaObject::connectSlotsByName(addsite);
    } // setupUi

    void retranslateUi(QMainWindow *addsite)
    {
        addsite->setWindowTitle(QApplication::translate("addsite", "MainWindow", nullptr));
        groupbox->setTitle(QApplication::translate("addsite", "\346\267\273\345\212\240\346\231\257\347\202\271", nullptr));
        label_2->setText(QApplication::translate("addsite", "\346\231\257\347\202\271ID", nullptr));
        label->setText(QApplication::translate("addsite", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_3->setText(QApplication::translate("addsite", "\346\231\257\347\202\271\347\245\250\344\273\267", nullptr));
        label_4->setText(QApplication::translate("addsite", "\346\231\257\347\202\271\351\227\250\347\245\250\351\207\217", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("addsite", "MM/dd", nullptr));
        label_5->setText(QApplication::translate("addsite", "\346\227\272\345\255\243\347\224\261\346\257\217\345\271\264", nullptr));
        label_6->setText(QApplication::translate("addsite", "\346\227\272\345\255\243\347\245\250\344\273\267", nullptr));
        label_7->setText(QApplication::translate("addsite", "\350\207\263", nullptr));
        label_8->setText(QApplication::translate("addsite", "\346\267\241\345\255\243\347\245\250\344\273\267", nullptr));
        label_9->setText(QApplication::translate("addsite", "\347\211\271\346\256\212\347\245\250\344\273\267", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("addsite", "\346\267\273\345\212\240...", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("addsite", "\345\255\246\347\224\237", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("addsite", "\345\206\233\344\272\272", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_10->setText(QApplication::translate("addsite", "\346\231\257\347\202\271\347\272\247\345\210\253", nullptr));
        dateEdit_3->setDisplayFormat(QApplication::translate("addsite", "MM/dd", nullptr));
        label_11->setText(QApplication::translate("addsite", "\347\273\264\346\212\244\350\264\271\347\224\250", nullptr));
        label_12->setText(QApplication::translate("addsite", "\346\231\257\347\202\271\347\256\200\344\273\213", nullptr));
        timelimit->setText(QApplication::translate("addsite", "\346\267\273\345\212\240\344\272\272\346\225\260\351\231\220\345\210\266\346\227\266\346\256\265", nullptr));
        label_13->setText(QApplication::translate("addsite", "\346\211\200\345\234\250\345\214\272\345\237\237", nullptr));
        label_14->setText(QApplication::translate("addsite", "\346\270\270\350\247\210\346\211\200\351\234\200\346\227\266\351\227\264", nullptr));
        label_15->setText(QApplication::translate("addsite", "\345\210\206\351\222\237", nullptr));
        newlabel->setText(QApplication::translate("addsite", "\350\256\276\347\275\256\346\212\230\346\211\243\344\270\272", nullptr));
        label_16->setText(QApplication::translate("addsite", "(200\345\255\227\347\254\246\344\273\245\345\206\205)", nullptr));
        saveprice->setText(QApplication::translate("addsite", "\344\277\235\345\255\230", nullptr));
        idprompt->setText(QApplication::translate("addsite", "\345\277\205\351\241\273\344\270\2726\344\275\215\346\225\260\345\255\227", nullptr));
        publish->setText(QApplication::translate("addsite", "\345\217\221\345\270\203", nullptr));
        pushButton_2->setText(QApplication::translate("addsite", "\345\217\226\346\266\210", nullptr));
        save->setText(QApplication::translate("addsite", "\344\277\235\345\255\230\350\215\211\347\250\277", nullptr));
        disprompt->setText(QApplication::translate("addsite", "\346\212\230\346\211\243\346\240\274\345\274\217\344\270\215\346\255\243\347\241\256", nullptr));
        comboBox->setItemText(0, QApplication::translate("addsite", "\346\211\200\346\234\211\344\272\272", nullptr));
        comboBox->setItemText(1, QApplication::translate("addsite", "\344\270\215\351\200\202\345\220\210\345\204\277\347\253\245", nullptr));
        comboBox->setItemText(2, QApplication::translate("addsite", "\344\270\215\351\200\202\345\220\210\351\225\277\350\200\205", nullptr));
        comboBox->setItemText(3, QApplication::translate("addsite", "\344\270\215\351\200\202\345\220\210\345\204\277\347\253\245\345\217\212\351\225\277\350\200\205", nullptr));

        comboBox->setCurrentText(QApplication::translate("addsite", "\346\211\200\346\234\211\344\272\272", nullptr));
        label_17->setText(QApplication::translate("addsite", "\351\200\202\345\220\210\344\272\272\347\276\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addsite: public Ui_addsite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSITE_H
