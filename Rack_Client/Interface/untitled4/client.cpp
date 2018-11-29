#include "client.h"
#include <QSqlQuery>
#include <QSqlDatabase>

Client::Client()
{
    nom = "" ;
    prenom = "" ;
    derniere_visite = "" ;
    CIN = 0 ;
}

QString Client::getnom()
{
    return nom;
}

QString Client::getprenom()
{
    return prenom ;
}

QString Client::getderniere_visite()
{
    return derniere_visite ;
}

int Client::getCIN()
{
    return CIN ;
}

void Client::Ajouter(QString nom, QString prenom, QString D_V, int CIN)
{
    QSqlQuery query;
        query.prepare("INSERT INTO test (nom,prenom) VALUES (?, ?) ");
        //query.addBindValue(this->nom);
        //query.addBindValue(prenom);
        query.exec();
}

bool Client::Modifier(QString nom, QString prenom, QString D_V, int CIN)
{
    QSqlQuery q;
    q.exec("update test set prenom = 'khaled' where nom= 'klod'");
}

bool Client::Supprimer(int CIN)
{
    QSqlQuery q;
    q.prepare("delete from test where nom='khaled'");
    //q.addBindValue(CIN);
    q.exec();
}


bool Client::Supprimer_tout()
{
    QSqlQuery q;
    return q.exec("delete from Client");
}
