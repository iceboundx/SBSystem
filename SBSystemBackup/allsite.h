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
public slots:
    void refresh();
private slots:

    void on_ticket_stateChanged(int arg1);

    void on_discount_stateChanged(int arg1);

    void on_back_clicked();

signals:
    void hide_now();
private:
    Ui::allsite *ui;
    void create_item(site sites);
    void create_item(order_site o_site);
    QDateTime vis_time;

};

#endif // ALLSITE_H
