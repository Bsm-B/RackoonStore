#include "connexion.h"
#include <QDebug>
#include <QSqlError>

Connexion::Connexion()
{

}

bool Connexion::ouvrirConnexion()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Rack001");
    db.setUserName("ad1");//inserer nom de l'utilisateur
    db.setPassword("rackteam001");//inserer mot de passe de cet utilisateur
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
