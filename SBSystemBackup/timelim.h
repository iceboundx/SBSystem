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

private slots:
    void on_addtimelim_clicked();
signals:
    void hide_now();
    void add_lim(t_lim lim);
private:
    Ui::timelim *ui;
};

#endif // TIMELIM_H
