/********************************************************************************
** Form generated from reading UI file 'registtour.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTTOUR_H
#define UI_REGISTTOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistTour
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *id;
    QLineEdit *passwd;
    QLineEdit *passwd_2;
    QSpinBox *min_age;
    QSpinBox *max_age;
    QLineEdit *phone;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *pro_id;
    QLabel *pro_pa;
    QLabel *pro_ph;
    QSpinBox *num;
    QLabel *label_7;

    void setupUi(QMainWindow *RegistTour)
    {
        if (RegistTour->objectName().isEmpty())
            RegistTour->setObjectName(QStringLiteral("RegistTour"));
        RegistTour->resize(323, 439);
        centralwidget = new QWidget(RegistTour);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 390, 93, 28));
        id = new QLineEdit(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(150, 35, 141, 21));
        QFont font;
        font.setPointSize(11);
        id->setFont(font);
        passwd = new QLineEdit(centralwidget);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setGeometry(QRect(150, 100, 141, 21));
        QFont font1;
        font1.setPointSize(8);
        passwd->setFont(font1);
        passwd_2 = new QLineEdit(centralwidget);
        passwd_2->setObjectName(QStringLiteral("passwd_2"));
        passwd_2->setGeometry(QRect(150, 140, 141, 21));
        passwd_2->setFont(font1);
        min_age = new QSpinBox(centralwidget);
        min_age->setObjectName(QStringLiteral("min_age"));
        min_age->setGeometry(QRect(110, 220, 46, 22));
        min_age->setMaximum(90);
        max_age = new QSpinBox(centralwidget);
        max_age->setObjectName(QStringLiteral("max_age"));
        max_age->setGeometry(QRect(260, 220, 46, 22));
        max_age->setMaximum(90);
        phone = new QLineEdit(centralwidget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(140, 310, 141, 21));
        phone->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 35, 41, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 51, 21));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 81, 21));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 81, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 220, 81, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 310, 81, 21));
        label_6->setFont(font2);
        pro_id = new QLabel(centralwidget);
        pro_id->setObjectName(QStringLiteral("pro_id"));
        pro_id->setGeometry(QRect(40, 60, 251, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font3.setBold(true);
        font3.setWeight(75);
        pro_id->setFont(font3);
        pro_pa = new QLabel(centralwidget);
        pro_pa->setObjectName(QStringLiteral("pro_pa"));
        pro_pa->setGeometry(QRect(70, 170, 251, 21));
        pro_pa->setFont(font3);
        pro_ph = new QLabel(centralwidget);
        pro_ph->setObjectName(QStringLiteral("pro_ph"));
        pro_ph->setGeometry(QRect(90, 340, 251, 21));
        pro_ph->setFont(font3);
        num = new QSpinBox(centralwidget);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(170, 260, 46, 22));
        num->setAccelerated(true);
        num->setMinimum(1);
        num->setMaximum(10000);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 260, 71, 21));
        label_7->setFont(font2);
        RegistTour->setCentralWidget(centralwidget);

        retranslateUi(RegistTour);

        QMetaObject::connectSlotsByName(RegistTour);
    } // setupUi

    void retranslateUi(QMainWindow *RegistTour)
    {
        RegistTour->setWindowTitle(QApplication::translate("RegistTour", "\346\263\250\345\206\214\346\227\205\350\241\214\345\233\242", nullptr));
        pushButton->setText(QApplication::translate("RegistTour", "\347\241\256\345\256\232", nullptr));
        id->setText(QApplication::translate("RegistTour", "8888888", nullptr));
        passwd->setText(QApplication::translate("RegistTour", "1123213", nullptr));
        passwd_2->setText(QApplication::translate("RegistTour", "1231233", nullptr));
        phone->setText(QApplication::translate("RegistTour", "8888888", nullptr));
        label->setText(QApplication::translate("RegistTour", "ID", nullptr));
        label_2->setText(QApplication::translate("RegistTour", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("RegistTour", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("RegistTour", "\346\234\200\345\260\217\345\271\264\351\276\204", nullptr));
        label_5->setText(QApplication::translate("RegistTour", "\346\234\200\345\244\247\345\271\264\351\276\204", nullptr));
        label_6->setText(QApplication::translate("RegistTour", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        pro_id->setText(QApplication::translate("RegistTour", "ID\345\277\205\351\241\273\344\270\272\345\244\247\344\272\2166\344\275\215\345\271\266\345\260\217\344\272\21611\344\275\215\347\232\204\346\225\260\345\255\227", nullptr));
        pro_pa->setText(QApplication::translate("RegistTour", "\345\257\206\347\240\201\345\277\205\351\241\273\345\244\247\344\272\2166\344\275\215\345\271\266\345\260\217\344\272\21611\344\275\215", nullptr));
        pro_ph->setText(QApplication::translate("RegistTour", "\347\224\265\350\257\235\345\277\205\351\241\273\344\270\27211\344\275\215\346\225\260\345\255\227", nullptr));
        label_7->setText(QApplication::translate("RegistTour", "\344\272\272\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistTour: public Ui_RegistTour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTTOUR_H
