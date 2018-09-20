#ifndef ALLSITE_H
#define ALLSITE_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "global.h"
#include "show_site.h"
#include "show_order.h"

namespace Ui {
class allsite;
}

class allsite : public QMainWindow
{
    Q_OBJECT

public:
    explicit allsite(QWidget *parent = 0);
    ~allsite();

    void show_info();
    void get_time(QDateTime v_time);
    void clear_sort();
public slots:
    void refresh();
private slots:

    void on_ticket_stateChanged(int arg1);

    void on_discount_stateChanged(int arg1);

    void on_back_clicked();

    void on_clear_o_list_clicked();

    void on_save_order_clicked();

    void on_pushButton_clicked();

    void on_sort_by_currentIndexChanged(int index);

    void on_name_s_clicked();

    void on_area_s_clicked();

    void on_pushButton_2_clicked();

signals:
    void hide_now();
    void change_time();
private:
    Ui::allsite *ui;
    void create_item(site sites);
    void create_item(order_site o_site);
    void fl_info();
    QDateTime vis_time;
    QList<site>all_site;
    int search_type;
};

#endif // ALLSITE_H
