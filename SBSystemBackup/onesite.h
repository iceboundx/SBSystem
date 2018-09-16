#ifndef ONESITE_H
#define ONESITE_H

#include <QMainWindow>

namespace Ui {
class onesite;
}

class onesite : public QMainWindow
{
    Q_OBJECT

public:
    explicit onesite(QWidget *parent = 0);
    ~onesite();

    void viewsite();

public slots:

signals:
    void hide_now();
private:
    Ui::onesite *ui;
};

#endif // ONESITE_H
