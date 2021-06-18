#include "secwdw2.h"
#include "ui_secwdw2.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
Secwdw2::Secwdw2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Secwdw2)
{
    ui->setupUi(this);
}

Secwdw2::~Secwdw2()
{
    delete ui;
}

void Secwdw2::on_pushButton_2_clicked()
{
    QFile file("C:/Users/sridevi/Desktop/Sample.txt");
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "title","file not opened");
    }
    QTextStream out(&file);
    QString text = ui-> plainTextEdit -> toPlainText();
    out << text;
    file.flush();
    file.close();
}
void Secwdw2::on_pushButton_clicked()
{
    QFile file("C:/Users/sridevi/Desktop/Sample.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "title","file not opened");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui -> plainTextEdit ->setPlainText(text);
    file.close();

}







