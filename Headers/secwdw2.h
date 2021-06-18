#ifndef SECWDW2_H
#define SECWDW2_H

#include <QDialog>

namespace Ui {
class Secwdw2;
}

class Secwdw2 : public QDialog
{
    Q_OBJECT

public:
    explicit Secwdw2(QWidget *parent = nullptr);
    ~Secwdw2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Secwdw2 *ui;
};

#endif // SECWDW2_H
