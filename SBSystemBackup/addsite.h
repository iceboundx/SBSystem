#ifndef ADDSITE_H
#define ADDSITE_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "global.h"
#include "timelim.h"

namespace Ui {
class addsite;
}

class addsite : public QMainWindow
{
    Q_OBJECT

public:
    explicit addsite(QWidget *parent = 0);
    ~addsite();
    void clear_all();
private slots:

    void get_lim(t_lim lim);

    void on_save_clicked();

    void on_saveprice_clicked();

    void on_publish_clicked();

    void on_profile_textChanged();

    void on_timelimit_clicked();

    void on_id_textChanged(const QString &arg1);

    void on_date_begin_userDateChanged(const QDate &date);

    void on_date_end_userDateChanged(const QDate &date);

    void on_price_list_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::addsite *ui;
    timelim *Timelim;
    site now_site;
    void save_site();
    void change_date_tip();

};

#endif // ADDSITE_H
