#ifndef ALLSITEADMIN_H
#define ALLSITEADMIN_H

#include <QMainWindow>
#include "global.h"
#include "addsite.h"

namespace Ui {
class allsiteadmin;
}

class allsiteadmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit allsiteadmin(QWidget *parent = 0);
    ~allsiteadmin();
    void show_info();
public slots:
    void close_sub_window();

private slots:
    void on_pub_doubleClicked(const QModelIndex &index);

    void on_unpub_doubleClicked(const QModelIndex &index);
private:
    Ui::allsiteadmin *ui;
    void create_item_pub(site sites);
    void create_item_unpub(site sites);
    QList<site>buf_pu;
    QList<site>buf_unpu;
    addsite *AddSite;
    QDateTime time;
};


#endif // ALLSITEADMIN_H
