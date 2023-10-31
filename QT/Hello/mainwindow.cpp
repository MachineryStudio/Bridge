#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    //constructor MainWindow
    QMainWindow(parent),
    //passing from the UI class to MainWindow class
    ui(new Ui::MainWindow)
{

    //set ui the user interface
    ui->setupUi(this);
    //testEdit is the testEdit from the Form
    this -> setCentralWidget(ui->textEdit);

}

MainWindow::~MainWindow()
{
    //delete the user interface
    delete ui;
}
//botton newAction from icon NewFile
void MainWindow::on_actionNew_triggered()
{

    currentFile.clear();
    //textEdit is the Form
    ui->textEdit->setText(QString());



}
//OpenFile
void MainWindow::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Opening your file");
    QFile file(filename);
    //actualize the file
    currentFile = filename;

    if (!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning",  "The file could not be founded " + file.errorString());
        return;

    }

    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();

    //put the text in UI
    ui->textEdit ->setText(text);
    file.close();


}
//Save as
void MainWindow::on_actionSaveAs_triggered()
{
    QString fileName = QFileDialog:: getSaveFileName(this, "Save as");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning",  "The file could not save this file " + file.errorString());
        //you could return even when this function is void, because this return means out of thie app.
        return;

    }

    currentFile = fileName;
    setWindowTitle(fileName);

    //create the interface
    QTextStream out(&file);
    //ui -> to get out of the UI, textEdit means whatever name
    QString text = ui->textEdit->toPlainText();
    out <<text;
    file.close();



}
//actionPrint
void MainWindow::on_actionPrint_triggered()
{
    //QPrintDialog printer (this);
    //I could not find printer function for this Qt 4.2
    //QPrinter printer1;

    /*if(printer.exec() == QDialog::Rejected)

    {
        QMessageBox::warning(this,"Warning" , "The system could not find a printer");
        return;

    }

 ui->textEdit->actions();

 */
}
//actionExit

void MainWindow::on_actionExit_triggered()
{
  QApplication:: quit();
}
//actionCopy
void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

//actionPaste
void MainWindow::on_actionPaste_triggered()
{

    ui->textEdit->paste();

}
//actionCut
void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}
//undo
void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}
