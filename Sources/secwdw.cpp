#include "secwdw.h"
#include "ui_secwdw.h"
#include<QPixmap>
Secwdw::Secwdw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Secwdw)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/sridevi/Desktop/delete.jpg");
    ui->label_pic ->setPixmap(pix.scaled(200,200));

}

Secwdw::~Secwdw()
{
    delete ui;
}
