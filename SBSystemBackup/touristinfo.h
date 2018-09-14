#ifndef TOURISTINFO_H
#define TOURISTINFO_H

#include <QMainWindow>

namespace Ui {
class touristinfo;
}

class touristinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit touristinfo(QWidget *parent = 0);
    ~touristinfo();

private slots:
    void on_changePasswd_2_clicked();

    void on_changeTel_2_clicked();

    void on_save_clicked();

private:
    Ui::touristinfo *ui;
};

#endif // TOURISTINFO_H
