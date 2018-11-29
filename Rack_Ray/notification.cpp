#include "notification.h"

Notification::Notification()
{

}

Notification::Notification(QString text, QString type)
{
    this->ID= 0;
    this->Info = text;
    this->Type = type;
}

int Notification::Add(){
    QSqlQuery query;
    query.prepare("INSERT INTO Notifi (ID, INFO, TYPE) "
                        "VALUES (:info, :type)");
    query.bindValue(":info", Info);
    query.bindValue(":type", Type);
    return    query.exec();
}

QSqlQueryModel * Notification::Display()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("Select * from Notifi");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Text"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    return model;
}

int Notification::Delete(int idd){
    QSqlQuery query;
    QString sid= QString::number(idd);
    query.prepare("Delete from Notifi where ID = :id ");
    query.bindValue(":id", sid);
    return    query.exec();
}
