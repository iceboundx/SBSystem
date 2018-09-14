#ifndef ADMININFO_H
#define ADMININFO_H

#include <QMainWindow>

namespace Ui {
class admininfo;
}

class admininfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit admininfo(QWidget *parent = 0);
    ~admininfo();

private slots:
    void on_editpasswd_clicked();

    void on_edittel_clicked();

    void on_editemail_clicked();

    void on_save_clicked();

private:
    Ui::admininfo *ui;
};

#endif // ADMININFO_H
