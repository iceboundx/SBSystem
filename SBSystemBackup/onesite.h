#ifndef ONESITE_H
#define ONESITE_H

#include <QMainWindow>
#include "global.h"

namespace Ui {
class onesite;
}

class onesite : public QMainWindow
{
    Q_OBJECT

public:
    explicit onesite(QWidget *parent = 0);
    ~onesite();
    void get_info(site now_site,QDateTime v_time);
    void get_price();
public slots:

private slots:
    void on_buy_num_valueChanged(int arg1);

    void on_dis_type_currentIndexChanged(int index);

    void on_add_clicked();
signals:
    void save_order_site();
private:
    Ui::onesite *ui;
    site Site;
    QDateTime vis_time;
};

#endif // ONESITE_H
