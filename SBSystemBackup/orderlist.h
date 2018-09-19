#ifndef ORDERLIST_H
#define ORDERLIST_H

#include <QMainWindow>
#include "global.h"
#include "ordersite.h"

namespace Ui {
class orderlist;
}

class orderlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit orderlist(QWidget *parent = 0);
    ~orderlist();
    void send_info(bool is_admin);
public slots:
    void refresh();
private slots:

    void on_o_list_doubleClicked(const QModelIndex &index);

private:
    Ui::orderlist *ui;
    ordersite *OrderSite;
    void admin_show();
    void tour_show();
    QList<order>order_list;
};

#endif // ORDERLIST_H
