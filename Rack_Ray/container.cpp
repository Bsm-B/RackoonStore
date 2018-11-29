#include "container.h"

container::container()
{

}

container::container(int id,int idprod,int qtprod,float px,QString alrt)
{
    this->id = id;
    this->prod_id = idprod;
    this->qt_prod = qtprod;
    this->price = px;
    this->alert = alrt;
}

bool container::Add()
{
    QSqlQuery query;
    query.prepare("INSERT INTO CONT (\"Prod_ID\", \"Qt_Prod\" ,\"Prix\") VALUES (1, 0, 0.0)");
    return query.exec();

}

bool container::Delete(int idd)
{
    QSqlQuery query;
    QString ID = QString::number(idd);
    query.prepare("Delete from Cont where ID = :id");
    query.bindValue(":id", ID);
    return    query.exec();

}
QSqlQueryModel *  container::Display()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Cont");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prod_ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Qt_Prod"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Alert"));

        return model;

}
bool container::Update(){
    QSqlQuery query;
    QString StrID = QString::number(id);
      query.prepare("UPDATE Cont SET \"Prod_ID\" = :idpro, \"Qt_Prod\" = :qtptod,"
                    " \"Prix\" = :px, \"Alert\" =  :alt "
                     " where ID = "+ StrID);
    query.bindValue(":idpro", QString::number(prod_id));
    query.bindValue(":qtptod", QString::number(qt_prod));
    query.bindValue(":px",  QString::number(price));
    query.bindValue(":alt", alert);
    return query.exec();

}
QSqlQueryModel * container::Get_Prodid(){
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT ID FROM ITEM");
        return model;
}
