#ifndef SHOW_SITE_H
#define SHOW_SITE_H

#include <QWidget>
#include "global.h"
#include "onesite.h"
namespace Ui {
class show_site;
}

class show_site : public QWidget
{
    Q_OBJECT

public:
    explicit show_site(QWidget *parent = 0);
    void send_info(site s,QDateTime v_time);
    ~show_site();
private slots:
    void on_more_clicked();
signals:
    void need_refresh();
public slots:
    void order_change();
private:
    Ui::show_site *ui;
    site now_site;
    QDateTime vis_time;
    onesite* OneSite;
};

#endif // SHOW_SITE_H
