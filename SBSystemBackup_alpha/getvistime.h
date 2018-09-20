#ifndef GETVISTIME_H
#define GETVISTIME_H

#include <QDialog>
#include "global.h"
namespace Ui {
class getvistime;
}

class getvistime : public QDialog
{
    Q_OBJECT

public:
    explicit getvistime(QWidget *parent = 0);
    void init();
    ~getvistime();
signals:
    void send_time(QDateTime vis_time);
private slots:
    void on_pushButton_clicked();

private:
    Ui::getvistime *ui;
};

#endif // GETVISTIME_H
