#ifndef ADMINCOUNT_H
#define ADMINCOUNT_H

#include <QMainWindow>
#include "global.h"
#include "show_admin_site.h"
namespace Ui {
class admincount;
}

class admincount : public QMainWindow
{
    Q_OBJECT

public:
    explicit admincount(QWidget *parent = 0);
    void send_info();
    void sort_info();
    int sort_type;
    ~admincount();

private slots:
    void on_num_clicked();

    void on_people_clicked();

    void on_pro_clicked();

    void on_season_currentIndexChanged(int index);

private:
    Ui::admincount *ui;
    QList<site>site_list;
};

#endif // ADMINCOUNT_H
