#include "material.h"
#include <QDebug>
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

bool Material::Update()
{
    QSqlQuery query;
    QString StrID = QString::number(Id);
      query.prepare("UPDATE ITEM SET "
                    " \"Code\" = :code,  \"Name\" = :name,"
                    "\"Type\" = :type,   \"Price\"= :price, \"Quantity\" = :quantity,"
                    "\"Date\" = :date"
                    " where ID = "+ StrID );
    query.bindValue(":code", Code);
    query.bindValue(":name", Item_Name);
    query.bindValue(":type", Type);
    query.bindValue(":price", QString::number(Price));
    query.bindValue(":quantity", QString::number(Quantity));
    QString DateFormat = Expiration_Date.toString("yyyy/MM/dd");
    query.bindValue(":date",Expiration_Date);
    return query.exec();




}

bool Material::Check(int idd)
{
    QSqlQuery test;
    test.prepare("select ID from Item where ID = :search");
    test.bindValue(":search", QString::number(idd));
    return test.exec();
}


bool Material::Add(){

    int newId(0);
    QSqlQuery query,make;
    make.prepare("Select max(id) from Item");

    if(make.exec()){
        while (make.next())
        {
           newId = make.value(0).toInt();
        }
        qDebug()  << QString::number(newId);
        newId++;
    }
    qDebug() << QString::number(newId);
    query.prepare("INSERT INTO ITEM (ID,\"Code\",\"Name\",\"Type\",\"Price\",\"Quantity\",\"Date\")"
                        "VALUES (:id, :code, :name, :type, :price, :quantity, TO_DATE('" + QDate::currentDate().toString("yyyy/MM/dd") +"', 'yyyy/mm/dd hh24:mi:ss'))");
    query.bindValue(":id", QString::number(newId));
    query.bindValue(":code", "Code");
    query.bindValue(":name", "Item_Name");
    query.bindValue(":type", "Family");
    query.bindValue(":price", "00.0");
    query.bindValue(":quantity", "0");
    return query.exec();
}

bool Material::Delete(int idd){

    QSqlQuery query;
    QString ID = QString::number(idd);
    query.prepare("Delete from Item where ID = :id ");
    query.bindValue(":id", ID);
    return    query.exec();
}



int Material::Get_Count()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select count(id) from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}


int Material::Get_Sum()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select sum(\"Price\") from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}

int Material::Get_Qtn()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select sum(\"Quantity\") from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}


QSqlQueryModel * Material::DisplayID()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM  ORDER BY ID");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}
QSqlQueryModel * Material::DisplayCode()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM  ORDER BY \"Code\" ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}
QSqlQueryModel * Material::DisplayName()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM  ORDER BY \"Name\" ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}


QSqlQueryModel * Material::Search(int i,QString n){

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM Where ID = " + QString::number(i)+ "OR \"Code\" = '"+ n+ "'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}
