#include "mettreajour.h"
#include "ui_mettreajour.h"

MettreAJour::MettreAJour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MettreAJour)
{
    ui->setupUi(this);
    setWindowTitle("Mettre A Jour Un Client");
}

MettreAJour::~MettreAJour()
{
    delete ui;
}

void MettreAJour::on_pushButton_2_clicked()
{
    this->close();
}
