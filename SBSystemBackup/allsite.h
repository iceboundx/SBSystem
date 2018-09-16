#ifndef ALLSITE_H
#define ALLSITE_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class allsite;
}

class allsite : public QMainWindow
{
    Q_OBJECT

public:
    explicit allsite(QWidget *parent = 0);
    ~allsite();

    void create_item( );

private slots:

    void on_ticket_stateChanged(int arg1);

    void on_discount_stateChanged(int arg1);

    void on_back_clicked();

private:
    Ui::allsite *ui;

};

#endif // ALLSITE_H
