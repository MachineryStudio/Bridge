#include "mainwindow.h"
//include the header mainwindow.h
#include <QApplication>

int main(int argc, char *argv[])
{

    //QApplication creates the main app
    QApplication a(argc, argv);
    //object from class MainWindow
    MainWindow w;
    w.show();


    //put the app into a loop
    return a.exec();
}
