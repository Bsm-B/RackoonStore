#include "ajouter.h"
#include "ui_ajouter.h"
#include "QMessageBox"

Ajouter::Ajouter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ajouter)
{
    ui->setupUi(this);
    setWindowTitle("Ajouter Un Client");
}

Ajouter::~Ajouter()
{
    delete ui;
}

void Ajouter::on_pushButton_2_clicked()
{
    reject();
}

void Ajouter::on_pushButton_clicked()
{
    if(ui->lineEdit->text() != "" && ui->lineEdit_2->text() != "" && ui->lineEdit_5->text() != "")
        accept();
    else
        QMessageBox::information(this, "Erreur", "Le Nom, Prénom et Le CIN Ne Doivent Pas etre vide");
}

QString Ajouter::Getnom()
{
    return ui->lineEdit->text() ;
}

QString Ajouter::GetPrenom()
{
    return ui->lineEdit_2->text() ;
}

QString Ajouter::GetxD()
{
    return ui->lineEdit_3->text() ;
}

QString Ajouter::GetCIN()
{
    return ui->lineEdit_5->text() ;
}
