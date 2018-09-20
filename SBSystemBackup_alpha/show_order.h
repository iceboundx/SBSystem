#ifndef SHOW_ORDER_H
#define SHOW_ORDER_H

#include <QWidget>
#include "global.h"
namespace Ui {
class show_order;
}

class show_order : public QWidget
{
    Q_OBJECT

public:
    explicit show_order(QWidget *parent = 0);
    ~show_order();
    void send_info(order_site o_site);

private:
    Ui::show_order *ui;
};

#endif // SHOW_ORDER_H
