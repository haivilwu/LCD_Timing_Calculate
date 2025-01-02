#include "mainwindow.h"
#include <QApplication>
extern getHswValue();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //getHswValue();
    return a.exec();
}
