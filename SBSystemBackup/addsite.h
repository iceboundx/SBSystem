#ifndef ADDSITE_H
#define ADDSITE_H

#include <QMainWindow>
#include <QListWidgetItem>

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


private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_save_clicked();

    void on_saveprice_clicked();

    void on_id_textChanged();

    void on_comboBox_activated(int index);

    void on_publish_clicked();

    void on_profile_textChanged();

    void on_timelimit_clicked();

private:
    Ui::addsite *ui;
    timelim *Timelim;

};

#endif // ADDSITE_H
