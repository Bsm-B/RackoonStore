#include "type.h"

Type::Type()
{

}

Type::Type(int id, QString name)
{
     this->ID = id;
     this->Name = name;
}

QSqlQueryModel * Type::Display()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from Type");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Num"));
        return model;
}


bool Type::Add()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Type (ID,\"Num\") "
                        "VALUES (:id, :name) ");
    query.bindValue(":id", QString::number(ID));
    query.bindValue(":name", Name);
    return query.exec();
}

bool Type::Delete(int idd)
{
QSqlQuery query;
QString Qid = QString::number(idd);
query.prepare("Delete from Type where ID = :id ");
query.bindValue(":id", Qid);
return    query.exec();
}
