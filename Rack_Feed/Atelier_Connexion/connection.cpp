#include "connection.h"
#include <QDebug>
#include <QSqlError>

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("mytest");
db.setUserName("safamaalej");//inserer nom de l'utilisateur
db.setPassword("esprit18");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

qDebug()<<db.lastError().text();


    return  test;
}

