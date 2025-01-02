#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stdio.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     getHswValue();


private:
    Ui::MainWindow *ui;


private slots:

    void  on_btnCal_clicked();
    //void on_btnCal_pressed();
   // void on_lineEdit_HSW_textChanged(const QString &arg1);
};

#endif // MAINWINDOW_H
