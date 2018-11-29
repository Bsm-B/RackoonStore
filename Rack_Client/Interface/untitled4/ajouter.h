#ifndef AJOUTER_H
#define AJOUTER_H

#include <QDialog>

namespace Ui {
class Ajouter;
}

class Ajouter : public QDialog
{
    Q_OBJECT

public:
    explicit Ajouter(QWidget *parent = nullptr);
    QString Getnom();
    QString GetPrenom();
    QString GetxD() ;
    QString GetCIN() ;
    ~Ajouter();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Ajouter *ui;
};

#endif // AJOUTER_H
