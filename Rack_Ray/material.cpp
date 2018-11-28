#include "material.h"

Material::Material()
{
    this->Id = 0;
    this->Code = "";
    this->Item_Name = "";
    this->Quantity = 0;
    this->Type = "";
    this->Price = 0;
    this->Expiration_Date = QDate::currentDate();
}
Material::Material(int Id,QString Cd,QString Nm,int Qty,QString typ,double px,QDate dt)
{
    this->Id = Id;
    this->Code = Cd;
    this->Item_Name = Nm;
    this->Quantity = Qty;
    this->Type = typ;
    this->Price = px;
    this->Expiration_Date = dt;
}

QSqlQueryModel * Material::Get_Type(){
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT  \"Num\" FROM TYPE;");
        return model;
}

QSqlQueryModel * Material::Display(){

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from item");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}


bool Material::Add(){

    QSqlQuery query;
    query.prepare("INSERT INTO ITEM (ID,\"Code\",\"Name\",\"Type\",\"Price\",\"Quantity\",\"Date\")"
                        "VALUES (:id, :code, :name, :type, :price, :quantity, TO_DATE('" +Expiration_Date.toString("yyyy/MM/dd") +"', 'yyyy/mm/dd hh24:mi:ss'))");
    query.bindValue(":id", QString::number(Id));
    query.bindValue(":code", Code);
    query.bindValue(":name", Item_Name);
    query.bindValue(":type", Type);
    query.bindValue(":price", QString::number(Price));
    query.bindValue(":quantity", QString::number(Quantity));
    return query.exec();



}

bool Material::Delete(int idd){

    QSqlQuery query;
    QString ID = QString::number(idd);
    query.prepare("Delete from Item where ID = :id ");
    query.bindValue(":id", ID);
    return    query.exec();
}
