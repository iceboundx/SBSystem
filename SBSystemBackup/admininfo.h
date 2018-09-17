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
    void on_newpasswd_textChanged();

    void on_newtel_textChanged();

    void on_newemail_textChanged(const QString &arg1);

signals:
    void hide_now();
private:
    Ui::admininfo *ui;
    admin user;
    bool is_email(QString now);
};

#endif // ADMININFO_H
