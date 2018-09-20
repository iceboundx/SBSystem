/********************************************************************************
** Form generated from reading UI file 'getvistime.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETVISTIME_H
#define UI_GETVISTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getvistime
{
public:
    QPushButton *pushButton;
    QDateTimeEdit *vis_time;
    QLabel *label;

    void setupUi(QDialog *getvistime)
    {
        if (getvistime->objectName().isEmpty())
            getvistime->setObjectName(QStringLiteral("getvistime"));
        getvistime->resize(381, 261);
        getvistime->setWindowOpacity(1);
        pushButton = new QPushButton(getvistime);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 190, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(18);
        pushButton->setFont(font);
        vis_time = new QDateTimeEdit(getvistime);
        vis_time->setObjectName(QStringLiteral("vis_time"));
        vis_time->setGeometry(QRect(90, 110, 194, 22));
        vis_time->setCalendarPopup(true);
        label = new QLabel(getvistime);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 231, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);

        retranslateUi(getvistime);

        QMetaObject::connectSlotsByName(getvistime);
    } // setupUi

    void retranslateUi(QDialog *getvistime)
    {
        getvistime->setWindowTitle(QApplication::translate("getvistime", "\344\277\256\346\224\271\345\207\272\346\270\270\346\227\266\351\227\264", nullptr));
        pushButton->setText(QApplication::translate("getvistime", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("getvistime", "\350\257\267\351\200\211\346\213\251\346\202\250\350\256\241\345\210\222\347\232\204\345\207\272\346\270\270\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getvistime: public Ui_getvistime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETVISTIME_H
