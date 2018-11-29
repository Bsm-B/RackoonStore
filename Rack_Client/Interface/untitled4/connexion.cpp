#include "connexion.h"
#include <QDebug>
#include <QSqlError>

Connexion::Connexion()
{

}

bool Connexion::ouvrirConnexion()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("klod");
    db.setPassword("test");
        if(db.open())
        {
            qDebug()<<"Connected";
            return true;
        }
        {
            qDebug()<<db.lastError();
        return false;
        }
}

void Connexion::fermerconnexion()
{
    db.close();
}
