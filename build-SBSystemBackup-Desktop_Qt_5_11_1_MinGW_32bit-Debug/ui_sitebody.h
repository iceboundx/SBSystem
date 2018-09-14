/********************************************************************************
** Form generated from reading UI file 'sitebody.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITEBODY_H
#define UI_SITEBODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sitebody
{
public:

    void setupUi(QWidget *sitebody)
    {
        if (sitebody->objectName().isEmpty())
            sitebody->setObjectName(QStringLiteral("sitebody"));
        sitebody->resize(400, 300);

        retranslateUi(sitebody);

        QMetaObject::connectSlotsByName(sitebody);
    } // setupUi

    void retranslateUi(QWidget *sitebody)
    {
        sitebody->setWindowTitle(QApplication::translate("sitebody", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sitebody: public Ui_sitebody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITEBODY_H
