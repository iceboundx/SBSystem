#ifndef TIMELIM_H
#define TIMELIM_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class timelim;
}

class timelim : public QMainWindow
{
    Q_OBJECT

public:
    explicit timelim(QWidget *parent = 0);
    ~timelim();
    QList<t_lim>get_lim();
    void clear_all();
private slots:
    void on_addtimelim_clicked();
signals:
    void hide_now();
private:
    Ui::timelim *ui;
    QList<t_lim>limque;
};

#endif // TIMELIM_H
