#ifndef ADMINFUNTIONLIST_H
#define ADMINFUNTIONLIST_H

#include <QMainWindow>
#include "allsite.h"
#include "addsite.h"
#include "admininfo.h"
#include "orderlist.h"
#include "admincount.h"
namespace Ui {
class AdminFuntionList;
}

class AdminFuntionList : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminFuntionList(QWidget *parent = 0);
    ~AdminFuntionList();

private slots:
    void on_allsite_clicked();

    void on_addsite_clicked();

    void on_info_clicked();
    void reshow();
    void on_vieworder_clicked();

    void on_orderinfo_clicked();

private:
    Ui::AdminFuntionList *ui;
    allsite *Allsite;
    addsite *Addsite;
    admininfo *Admininfo;
    orderlist *OrderList;
    admincount *AdminCount;
};

#endif // ADMINFUNTIONLIST_H
