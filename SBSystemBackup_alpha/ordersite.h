#ifndef ORDERSITE_H
#define ORDERSITE_H

#include <QMainWindow>
#include "global.h"
#include "show_order.h"
namespace Ui {
class ordersite;
}

class ordersite : public QMainWindow
{
    Q_OBJECT

public:
    explicit ordersite(QWidget *parent = 0);
    ~ordersite();
    void send_info(order noworder);
signals:
    void del_ok();
private slots:
    void on_del_clicked();

private:
    Ui::ordersite *ui;
    order now_order;
    void create_item(order_site o_site);
};

#endif // ORDERSITE_H
