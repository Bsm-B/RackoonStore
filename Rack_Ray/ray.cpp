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
     ui->Tab_Prod->setModel(M.Display());
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
    MT.Add();
    ui->Tab_Prod->setModel(M.Display());

}

void Ray::on_Btn_Save_clicked()
{

}

void Ray::on_Btn_Del_clicked()
{

    int id = ui->box_id->text().toInt();
    bool Test= M.Delete(id);
    if(Test)
    {
        ui->Tab_Prod->setModel(M.Display());//refresh
        QString msg =  "Item N' " + ui->box_id->text() + " Deleted \n Click Cancel to Exit.";
        QMessageBox::information(nullptr, QObject::tr("RackoonStore"),
                          QObject::tr(qPrintable(msg)), QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("RackoonStore"),
                          QObject::tr("E003: Can not delete !.\n"
                        "Click Cancel to Exit."), QMessageBox::Cancel);
    }


}
