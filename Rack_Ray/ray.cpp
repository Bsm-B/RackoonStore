#include "ray.h"
#include "ui_ray.h"
#include <QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include "add_type.h"


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
     ui->tableView_2->setModel(C.Display());
     ui->comboBox->setModel(C.Get_Prodid());
     ui->tableView->setModel(N.Display());
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

}

void Ray::on_Btn_Save_clicked()
{
       int tempid = ui->box_id->text().toInt();
       QString tempCode = ui->box_code->text();
       QString tempName = ui->box_name->text();
       int tempQty = ui->box_quantity->text().toInt();
       QString temptype = ui->comboBox_type->currentText();
       int tempprice = ui->box_price->text().toDouble();
       QDate tempDate = ui->dateEdit->date();
       Material MT(tempid,tempCode,tempName,tempQty,temptype,tempprice,tempDate);
       MT.Update();
       ui->Tab_Prod->setModel(M.Display());
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
    ui->Tab_Prod->selectRow(index.row());
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

void Ray::on_pushButton_3_clicked()
{
     ui->Tab_Prod->setModel(M.DisplayID());
}

void Ray::on_pushButton_4_clicked()
{
     ui->Tab_Prod->setModel(M.DisplayCode());
}

void Ray::on_pushButton_5_clicked()
{
     ui->Tab_Prod->setModel(M.DisplayName());
}


void Ray::on_pushButton_2_clicked()
{
    ui->Tab_Prod->setModel(M.Display());

}



void Ray::on_Serach_Btn_clicked()
{

    ui->Tab_Prod->setModel(M.Search(ui->lineEdit->text().toInt(),ui->lineEdit_2->text()));

}

void Ray::on_Btn_Print_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->Tab_Prod->model()->rowCount();
    const int columnCount = ui->Tab_Prod->model()->columnCount();
    QString TT = QDate::currentDate().toString("yyyy/MM/dd");
    out <<"<html>\n"
          "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << "<title>Rackoonstore - Item List</title>\n "
        << "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<h1 style=\"text-align: center;\"><strong>LIST ITEL "+TT+"</strong></h1>"
        "<table style=\"text-align: center; font-size: 18px;\" border=0>\n "
          "</br> </br>";
    // headers
    out << "<thead><tr bgcolor=#d6e5ff>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->Tab_Prod->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->Tab_Prod->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->Tab_Prod->isColumnHidden(column)) {
                QString data =ui->Tab_Prod->model()->data(ui->Tab_Prod->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;
}

void Ray::on_pushButton_6_clicked()
{
    D = new DialogType(this);
    D->TDis();
    D->show();
}
void Ray::UpdateChech(){
    ui->comboBox_type->setModel(M.Get_Type());
}


void Ray::on_pushButton_8_clicked()
{
    ui->lineEdit_3->setText("");
     ui->lineEdit_4->setText("");
      ui->lineEdit_6->setText("");
       ui->lineEdit_7->setText("");
       ui->comboBox->setModel(C.Get_Prodid());
    C.Add();
    ui->tableView_2->setModel(C.Display());
}

void Ray::on_pushButton_10_clicked()
{
    int id = ui->lineEdit_3->text().toInt();
    bool Test= C.Delete(id);
    if(Test)
    {
        ui->tableView_2->setModel(C.Display());//refresh
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

void Ray::on_tableView_2_activated(const QModelIndex &index)
{
    QString val = ui->tableView_2->model()->data(index).toString();
    ui->tableView_2->selectRow(index.row());
    QSqlQuery Q;
    QString Rq = ("select * from CONT where ID = "+ val);
    Q.prepare(Rq);
   if (Q.exec())
   {
       while (Q.next())
       {
          ui->lineEdit_3->setText(Q.value(0).toString());
          ui->comboBox->setCurrentText(Q.value(1).toString());
          ui->lineEdit_6->setText(Q.value(2).toString());
          ui->lineEdit_7->setText(Q.value(3).toString());
          ui->lineEdit_4->setText(Q.value(4).toString());
       }

}
}

void Ray::on_pushButton_9_clicked()
{
    int tempid = ui->lineEdit_3->text().toInt();
    int prod_id = ui->comboBox->currentText().toInt();
    int qt_prod = ui->lineEdit_6->text().toInt();
    float price = ui->lineEdit_7->text().toDouble();
    QString alert = ui->lineEdit_4->text();
    container C(tempid,prod_id,qt_prod,price,alert);
    C.Update();
    ui->tableView_2->setModel(C.Display());
}

void Ray::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();
    ui->tableView->selectRow(index.row());
    QSqlQuery Q;
    QString Rq = ("select * from NOTIFI where ID = "+ val);
    Q.prepare(Rq);
   if (Q.exec())
   {
       while (Q.next())
       {
          ui->lineEdit_5->setText(Q.value(0).toString());
       }

}
}

void Ray::on_pushButton_clicked()
{
    int x = ui->lineEdit_5->text().toInt();
    N.Delete(x);
    ui->tableView->setModel(N.Display());
    ui->lineEdit_5->setText("0");
}
