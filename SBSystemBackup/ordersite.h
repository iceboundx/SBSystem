#ifndef ORDERSITE_H
#define ORDERSITE_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class ordersite;
}

class ordersite : public QMainWindow
{
    Q_OBJECT

public:
    explicit ordersite(QWidget *parent = 0);
    ~ordersite();
    void send_info(site nowsite);
signals:
    void hide_now();
private:
    Ui::ordersite *ui;
    site now_site;
};

#endif // ORDERSITE_H
