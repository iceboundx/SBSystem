#ifndef TOURISTFUNCTIONLIST_H
#define TOURISTFUNCTIONLIST_H

#include <QMainWindow>
#include "allsite.h"
#include "touristinfo.h"
#include "orderlist.h"
#include "getvistime.h"

namespace Ui {
class TouristFunctionList;
}

class TouristFunctionList : public QMainWindow
{
    Q_OBJECT

public:
    explicit TouristFunctionList(QWidget *parent = 0);
    ~TouristFunctionList();
public slots:
    void show_all_site(QDateTime vis_time);
private slots:

    void on_allsite_clicked();

    void on_info_clicked();

    void on_order_clicked();
    void reshow();

private:
    Ui::TouristFunctionList *ui;
    allsite *Allsite;
    touristinfo *Touristinfo;
    orderlist *Orderlist;
    getvistime *getVisTime;

};

#endif // TOURISTFUNCTIONLIST_H
