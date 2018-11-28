#include "dialogtype.h"
#include "ui_dialogtype.h"
#include "ray.h"


DialogType::DialogType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogType)
{
    ui->setupUi(this);
}

DialogType::~DialogType()
{
    delete ui;
}

void DialogType::on_pushButton_clicked()
{
    int id = ui->lineEdit->text().toInt();
    QString nom= ui->lineEdit_2->text();
    Type T(id,nom);
    if(T.Add()){
       ui->tableView->setModel(TType.Display());
        Ray R;
        R.UpdateChech();
    }else{

    }

}

void DialogType::on_pushButton_2_clicked()
{
        int id = ui->lineEdit->text().toInt();
        TType.Delete(id);
        ui->tableView->setModel(TType.Display());
}

void DialogType::TDis()
{
    ui->tableView->setModel(TType.Display());
}
