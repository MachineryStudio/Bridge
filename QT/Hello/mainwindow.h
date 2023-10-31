#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include<QMessageBox>
//#include<QtPrintSupport/QPrinter>
#include<QDialog>
//#include <QtPrintSupport/QPrintDialog>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionopen_triggered();

    void on_actionSaveAs_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    //ui is a pointer, therefore, you need -> arrow operator.
    Ui::MainWindow *ui;
    QString currentFile = "";

};

#endif // MAINWINDOW_H
