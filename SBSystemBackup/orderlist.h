#ifndef ORDERLIST_H
#define ORDERLIST_H

#include <QMainWindow>
#include "global.h"
namespace Ui {
class orderlist;
}

class orderlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit orderlist(QWidget *parent = 0);
    ~orderlist();

    void create_item( );

private slots:

signals:
    void hide_now();
private:
    Ui::orderlist *ui;
};

#endif // ORDERLIST_H
