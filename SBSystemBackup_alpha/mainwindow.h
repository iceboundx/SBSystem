#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "touristfunctionlist.h"
#include "adminfuntionlist.h"
#include "global.h"
#include "registtour.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_touristlogin_clicked();

    void on_adminlogin_clicked();

    void on_cancel_2_clicked();

    void on_cancel_3_clicked();

    void on_ausername_textChanged();

    void on_tusername_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    TouristFunctionList *touristfunction;
    AdminFuntionList *adminfunction;
    RegistTour *regtour;

};

#endif // MAINWINDOW_H
