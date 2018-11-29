#ifndef SUPPRIMER_H
#define SUPPRIMER_H

#include <QDialog>

namespace Ui {
class Supprimer;
}

class Supprimer : public QDialog
{
    Q_OBJECT

public:
    explicit Supprimer(QWidget *parent = nullptr);
    QString getNom();
    ~Supprimer();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Supprimer *ui;
};

#endif // SUPPRIMER_H
