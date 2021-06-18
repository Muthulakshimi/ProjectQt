#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
 //       Secwdw secWdw;
 //       secWdw.setModal(true);
 //       secWdw.exec();
        secWdw =new Secwdw(this);
        secWdw -> show();

}


void MainWindow::on_pushButton_2_clicked()
{
    secWdw2 =new Secwdw2(this);
    secWdw2 -> show();


}

