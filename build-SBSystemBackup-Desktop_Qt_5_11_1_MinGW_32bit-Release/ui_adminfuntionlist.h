/********************************************************************************
** Form generated from reading UI file 'adminfuntionlist.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFUNTIONLIST_H
#define UI_ADMINFUNTIONLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminFuntionList
{
public:
    QWidget *centralwidget;
    QPushButton *vieworder;
    QPushButton *allsite;
    QPushButton *orderinfo;
    QPushButton *addsite;
    QPushButton *info;
    QPushButton *pushButton;

    void setupUi(QMainWindow *AdminFuntionList)
    {
        if (AdminFuntionList->objectName().isEmpty())
            AdminFuntionList->setObjectName(QStringLiteral("AdminFuntionList"));
        AdminFuntionList->resize(1148, 667);
        centralwidget = new QWidget(AdminFuntionList);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        vieworder = new QPushButton(centralwidget);
        vieworder->setObjectName(QStringLiteral("vieworder"));
        vieworder->setGeometry(QRect(320, 100, 481, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        vieworder->setFont(font);
        allsite = new QPushButton(centralwidget);
        allsite->setObjectName(QStringLiteral("allsite"));
        allsite->setGeometry(QRect(320, 260, 481, 71));
        allsite->setFont(font);
        orderinfo = new QPushButton(centralwidget);
        orderinfo->setObjectName(QStringLiteral("orderinfo"));
        orderinfo->setGeometry(QRect(320, 180, 481, 71));
        orderinfo->setFont(font);
        addsite = new QPushButton(centralwidget);
        addsite->setObjectName(QStringLiteral("addsite"));
        addsite->setGeometry(QRect(320, 340, 481, 71));
        addsite->setFont(font);
        info = new QPushButton(centralwidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(320, 420, 481, 71));
        info->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 560, 131, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        AdminFuntionList->setCentralWidget(centralwidget);

        retranslateUi(AdminFuntionList);

        QMetaObject::connectSlotsByName(AdminFuntionList);
    } // setupUi

    void retranslateUi(QMainWindow *AdminFuntionList)
    {
        AdminFuntionList->setWindowTitle(QApplication::translate("AdminFuntionList", "\347\256\241\347\220\206\345\221\230", nullptr));
        vieworder->setText(QApplication::translate("AdminFuntionList", "\346\237\245\347\234\213\346\211\200\346\234\211\350\256\242\345\215\225", nullptr));
        allsite->setText(QApplication::translate("AdminFuntionList", "\346\211\200\346\234\211\346\231\257\347\202\271", nullptr));
        orderinfo->setText(QApplication::translate("AdminFuntionList", "\347\273\237\350\256\241\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        addsite->setText(QApplication::translate("AdminFuntionList", "\346\267\273\345\212\240\346\231\257\347\202\271", nullptr));
        info->setText(QApplication::translate("AdminFuntionList", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton->setText(QApplication::translate("AdminFuntionList", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminFuntionList: public Ui_AdminFuntionList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFUNTIONLIST_H
