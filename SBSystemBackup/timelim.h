#ifndef TIMELIM_H
#define TIMELIM_H

#include <QMainWindow>

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

private:
    Ui::timelim *ui;
};

#endif // TIMELIM_H
