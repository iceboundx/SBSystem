/********************************************************************************
** Form generated from reading UI file 'allsiteadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSITEADMIN_H
#define UI_ALLSITEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allsiteadmin
{
public:
    QWidget *centralwidget;
    QListWidget *pub;
    QListWidget *unpub;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *allsiteadmin)
    {
        if (allsiteadmin->objectName().isEmpty())
            allsiteadmin->setObjectName(QStringLiteral("allsiteadmin"));
        allsiteadmin->resize(800, 600);
        centralwidget = new QWidget(allsiteadmin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pub = new QListWidget(centralwidget);
        pub->setObjectName(QStringLiteral("pub"));
        pub->setGeometry(QRect(30, 90, 351, 431));
        unpub = new QListWidget(centralwidget);
        unpub->setObjectName(QStringLiteral("unpub"));
        unpub->setGeometry(QRect(410, 90, 351, 431));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 101, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 50, 101, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 540, 341, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        label_3->setFont(font1);
        allsiteadmin->setCentralWidget(centralwidget);

        retranslateUi(allsiteadmin);

        QMetaObject::connectSlotsByName(allsiteadmin);
    } // setupUi

    void retranslateUi(QMainWindow *allsiteadmin)
    {
        allsiteadmin->setWindowTitle(QApplication::translate("allsiteadmin", "\346\211\200\346\234\211\346\231\257\347\202\271", nullptr));
        label->setText(QApplication::translate("allsiteadmin", "\345\267\262\345\217\221\345\270\203\346\231\257\347\202\271", nullptr));
        label_2->setText(QApplication::translate("allsiteadmin", "\346\234\252\345\217\221\345\270\203\346\231\257\347\202\271", nullptr));
        label_3->setText(QApplication::translate("allsiteadmin", "\345\217\214\345\207\273\346\231\257\347\202\271\345\217\257\344\273\245\344\277\256\346\224\271\346\231\257\347\202\271\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class allsiteadmin: public Ui_allsiteadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSITEADMIN_H
