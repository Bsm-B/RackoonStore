#include "ray.h"
#include "ui_ray.h"
#include <QMessageBox>

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray)
{
    ui->setupUi(this);

}

Ray::~Ray()
{

    delete ui;
}

void Ray::showEvent(QShowEvent* event)
{

    QWidget::showEvent( event );
     ui->comboBox_type->setModel(M.Get_Type());
     ui->dateEdit->setDate(QDate::currentDate());
     ui->Tab_Prod->setModel(M.Afficher());
}

void Ray::on_Btn_Add_clicked()
{
    int tempid = ui->box_id->text().toInt();
    QString tempCode = ui->box_code->text();
    QString tempName = ui->box_name->text();
    int tempQty = ui->box_quantity->text().toInt();
    QString temptype = ui->comboBox_type->currentText();
    int tempprice = ui->box_price->text().toDouble();
    QDate tempDate = ui->dateEdit->date();
    Material MT(tempid,tempCode,tempName,tempQty,temptype,tempprice,tempDate);
    MT.Ajouter();
    ui->Tab_Prod->setModel(M.Afficher());

}
