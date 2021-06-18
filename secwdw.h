#ifndef SECWDW_H
#define SECWDW_H

#include <QDialog>

namespace Ui {
class Secwdw;
}

class Secwdw : public QDialog
{
    Q_OBJECT

public:
    explicit Secwdw(QWidget *parent = nullptr);
    ~Secwdw();

private:
    Ui::Secwdw *ui;

};

#endif // SECWDW_H
