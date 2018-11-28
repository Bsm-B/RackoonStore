#include "ray.h"
#include "ui_ray.h"


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
     ui->label_3->setText(QString::number(M.Get_Sum()));
     ui->label_5->setText(QString::number(M.Get_Count()));
     ui->label_14->setText(QString::number(M.Get_Qtn()));
}

void Ray::on_Btn_Add_clicked()
{
     ui->box_id->setText("");
     ui->box_code->setText("");
     ui->box_name->setText("");
     ui->box_quantity->setText("");
     ui->box_price->setText("");
     ui->dateEdit->setDate(QDate::currentDate());
     ui->comboBox_type->setModel(M.Get_Type());

     M.Add();
     ui->Tab_Prod->setModel(M.Display());
     ui->Tab_Prod->scrollToBottom();
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

void Ray::on_Tab_Prod_activated(const QModelIndex &index)
{
    QString val = ui->Tab_Prod->model()->data(index).toString();
    ui->Tab_Prod->selectRow(index.column());
    QSqlQuery Q;
    QString Rq = ("select * from item where ID = "+ val);
    Q.prepare(Rq);
   if (Q.exec())
   {
       while (Q.next())
       {
          ui->box_id->setText(Q.value(0).toString());
          ui->box_code->setText(Q.value(1).toString());
          ui->box_name->setText(Q.value(2).toString());
          ui->comboBox_type->setCurrentText(Q.value(3).toString());
          ui->box_price->setText(Q.value(4).toString());
          ui->box_quantity->setText(Q.value(5).toString());
          ui->dateEdit->setDate(QDate::fromString(Q.value(4).toString(),"yyyy/MM/dd"));
       }

   }

}
