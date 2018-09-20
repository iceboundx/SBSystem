#ifndef TOURISTINFO_H
#define TOURISTINFO_H

#include <QMainWindow>
#include "global.h"

namespace Ui {
class touristinfo;
}

class touristinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit touristinfo(QWidget *parent = 0);
    void send_info(tourist usr);
    ~touristinfo();

private slots:
    void on_changePasswd_2_clicked();

    void on_changeTel_2_clicked();

    void on_save_clicked();

    void on_changeTel_textChanged();

signals:
    void hide_now();
private:
    Ui::touristinfo *ui;
    tourist user;
};

#endif // TOURISTINFO_H
