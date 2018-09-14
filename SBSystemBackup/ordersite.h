#ifndef ORDERSITE_H
#define ORDERSITE_H

#include <QMainWindow>

namespace Ui {
class ordersite;
}

class ordersite : public QMainWindow
{
    Q_OBJECT

public:
    explicit ordersite(QWidget *parent = 0);
    ~ordersite();

private:
    Ui::ordersite *ui;
};

#endif // ORDERSITE_H
