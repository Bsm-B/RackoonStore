#include "carte_fidelite.h"

Carte_Fidelite::Carte_Fidelite()
{
    this->CIN = 0 ;
    this->points = 0 ;
}

int Carte_Fidelite::getCIN()
{
    return CIN ;
}

int Carte_Fidelite::getpoints()
{
    return points ;
}

bool Carte_Fidelite::ajouter_carte(int CIN, int Points)
{
    /*QSqlQuery query;
        query.prepare("INSERT INTO Carte_Fidelite (CIN, Points) VALUES (:CIN, :points) ");
        query.bindValue(":CIN", CIN);
        query.bindValue(":points", Points);
        return query.exec();*/
}

bool Carte_Fidelite::modifier_carte(int CIN, int Points)
{
    /*QSqlQuery q;
    q.prepare("update Carte_Fidelite set Points = ? where CIN= ?");
    q.addBindValue(Points);
    q.addBindValue(CIN);
    return q.exec();*/
}

bool Carte_Fidelite::supprimer_carte(int CIN)
{
    /*QSqlQuery q;
    q.prepare("delete from Carte_Fidelite where CIN=:CIN");
    q.bindValue(":CIN", CIN);
    return q.exec();*/
}

bool Carte_Fidelite::supprimer_tout()
{
    QSqlQuery q;
    return q.exec("delete from Carte_Fidelite");
}
