#ifndef ADMININFO_H
#define ADMININFO_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class admininfo;
}

class admininfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit admininfo(QWidget *parent = 0);
    ~admininfo();
    void send_info(admin usr);
private slots:
    void on_editpasswd_clicked();

    void on_edittel_clicked();

    void on_editemail_clicked();

    void on_save_clicked();
signals:
    void hide_now();
private:
    Ui::admininfo *ui;
    admin user;
};

#endif // ADMININFO_H
