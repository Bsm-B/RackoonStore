#include "supprimer.h"
#include "ui_supprimer.h"
#include <QMessageBox>

Supprimer::Supprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supprimer)
{
    ui->setupUi(this);
    setWindowTitle("Supprimer Un Client");
}

Supprimer::~Supprimer()
{
    delete ui;
}

QString Supprimer::getNom()
{
    return ui->lineEdit->text();
}


void Supprimer::on_pushButton_2_clicked()
{
    this->close();
}

void Supprimer::on_pushButton_clicked()
{
    if(ui->lineEdit->text() != "")
        accept();
    else
        QMessageBox::information(this, "Erreur", "Le CIN Ne Doit Pas etre vide");
}
