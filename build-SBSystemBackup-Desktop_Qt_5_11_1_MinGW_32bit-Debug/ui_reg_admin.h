/********************************************************************************
** Form generated from reading UI file 'reg_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_ADMIN_H
#define UI_REG_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg_admin
{
public:
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *passEdit;
    QLabel *label_4;
    QLineEdit *emEdit;
    QLabel *label_5;
    QLineEdit *phEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *reg_admin)
    {
        if (reg_admin->objectName().isEmpty())
            reg_admin->setObjectName(QStringLiteral("reg_admin"));
        reg_admin->resize(504, 368);
        label = new QLabel(reg_admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 40, 221, 51));
        idEdit = new QLineEdit(reg_admin);
        idEdit->setObjectName(QStringLiteral("idEdit"));
        idEdit->setGeometry(QRect(200, 110, 113, 21));
        label_2 = new QLabel(reg_admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 72, 15));
        label_3 = new QLabel(reg_admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 150, 72, 15));
        passEdit = new QLineEdit(reg_admin);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(200, 150, 113, 21));
        label_4 = new QLabel(reg_admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 200, 72, 15));
        emEdit = new QLineEdit(reg_admin);
        emEdit->setObjectName(QStringLiteral("emEdit"));
        emEdit->setGeometry(QRect(200, 200, 113, 21));
        label_5 = new QLabel(reg_admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 260, 72, 15));
        phEdit = new QLineEdit(reg_admin);
        phEdit->setObjectName(QStringLiteral("phEdit"));
        phEdit->setGeometry(QRect(200, 260, 113, 21));
        pushButton = new QPushButton(reg_admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 320, 93, 28));
        pushButton_2 = new QPushButton(reg_admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 320, 93, 28));

        retranslateUi(reg_admin);

        QMetaObject::connectSlotsByName(reg_admin);
    } // setupUi

    void retranslateUi(QWidget *reg_admin)
    {
        reg_admin->setWindowTitle(QApplication::translate("reg_admin", "Form", nullptr));
        label->setText(QApplication::translate("reg_admin", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\254\242\350\277\216\346\263\250\345\206\214\347\256\241\347\220\206\345\221\230\357\274\201</span></p></body></html>", nullptr));
        idEdit->setText(QString());
        label_2->setText(QApplication::translate("reg_admin", "\347\256\241\347\220\206\345\221\230id", nullptr));
        label_3->setText(QApplication::translate("reg_admin", "\345\257\206\347\240\201", nullptr));
        passEdit->setText(QString());
        label_4->setText(QApplication::translate("reg_admin", "\351\202\256\347\256\261", nullptr));
        emEdit->setText(QString());
        label_5->setText(QApplication::translate("reg_admin", "\347\224\265\350\257\235", nullptr));
        phEdit->setText(QString());
        pushButton->setText(QApplication::translate("reg_admin", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("reg_admin", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg_admin: public Ui_reg_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_ADMIN_H
