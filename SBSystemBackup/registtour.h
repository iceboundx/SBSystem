#ifndef REGISTTOUR_H
#define REGISTTOUR_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class RegistTour;
}

class RegistTour : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistTour(QWidget *parent = 0);
    ~RegistTour();
    void clear_all();
private slots:
    void on_id_textChanged(const QString &arg1);

    void on_passwd_textChanged(const QString &arg1);

    void on_phone_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::RegistTour *ui;
};

#endif // REGISTTOUR_H
