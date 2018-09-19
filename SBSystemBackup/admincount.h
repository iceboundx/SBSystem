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
    ~admincount();

private:
    Ui::admincount *ui;
    QList<site>site_list;
};

#endif // ADMINCOUNT_H
