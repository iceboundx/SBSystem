#ifndef SHOW_ADMIN_SITE_H
#define SHOW_ADMIN_SITE_H

#include <QWidget>
#include "moreadminsite.h"

namespace Ui {
class show_admin_site;
}

class show_admin_site : public QWidget
{
    Q_OBJECT

public:
    explicit show_admin_site(QWidget *parent = 0);
    ~show_admin_site();
    void send_info(site now);

private slots:

    void on_more_info_clicked();

private:
    Ui::show_admin_site *ui;
    moreadminsite *More;
    site now_site;
};

#endif // SHOW_ADMIN_SITE_H
