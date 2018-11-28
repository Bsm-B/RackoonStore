#include "add_type.h"
#include "ui_add_type.h"

Add_Type::Add_Type(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Type)
{
    ui->setupUi(this);
}

Add_Type::~Add_Type()
{
    delete ui;
}

void Add_Type::on_pushButton_clicked()
{
    int id = ui->lineEdit->text().toInt();
    QString nom= ui->lineEdit_2->text();
    Type T(id,nom);
    if (T.Add())
            ui->tableView->setModel(temType.Display());
        else{

    }
}
