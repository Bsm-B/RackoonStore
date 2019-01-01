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

void Carte_Fidelite::ajouter_carte(int CIN, int Points, QString RFID)
{
    verifCIN(CIN);
    verifpoints(Points);
    CINExist(CIN);
    CarteUnique(CIN);
    QSqlQuery query;
        query.prepare("INSERT INTO FIDELITY_CARD (CIN, Points, RFID) VALUES (:CIN, :points, :RFID) ");
        query.bindValue(":CIN", CIN);
        query.bindValue(":points", Points);
        query.bindValue(":RFID", RFID);
        query.exec();
}

void Carte_Fidelite::modifier_carte(int Points, QString RFID)
{
    verifpoints(Points);
    RFIDExist(RFID);
    QSqlQuery q;
    q.prepare("update FIDELITY_CARD set Points = :points where RFID= :RFID");
    q.bindValue(":points", Points);
    q.bindValue(":RFID", RFID);
    q.exec();
}

void Carte_Fidelite::supprimer_carte(QString RFID)
{
    RFIDExist(RFID);
    QSqlQuery q;
    q.prepare("delete from FIDELITY_CARD where RFID=:RFID");
    q.bindValue(":RFID", RFID);
    q.exec();
}

void Carte_Fidelite::supprimer_tout()
{
    QSqlQuery q;
    q.exec("delete from Carte_Fidelite");
}

void Carte_Fidelite::Afficher(QTableWidget *t, QLabel *l)
{
    QSqlQuery query;
    t->setRowCount(0);
    query.exec("SELECT * from FIDELITY_CARD");
                while (query.next())
                {
    t->insertRow(t->rowCount());
    t->setItem(t->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    t->setItem(t->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    t->setItem(t->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
                }
    l->setText(QString::number(CalculNbrCarte()));
}

void Carte_Fidelite::verifpoints(int points)
{
    if( points <= 0 || points > 10000 )
        throw QString("Nombre De Points Non Acceptable");
}

void Carte_Fidelite::CarteUnique(int CIN)
{
    QSqlQuery query ;
    query.prepare("SELECT * from FIDELITY_CARD where CIN = :CIN");
    query.bindValue(":CIN", CIN);
    query.exec();

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    if( i != 0 )
    {
        throw QString("La Carte existe Déja");
    }
}

int Carte_Fidelite::CalculNbrCarte()
{
    QSqlQuery query ;
    query.exec("SELECT * from FIDELITY_CARD");

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    return i ;
}

void Carte_Fidelite::RFIDExist(QString RFID)
{
    QSqlQuery query ;
    query.prepare("SELECT * from FIDELITY_CARD where RFID = :RFID");
    query.bindValue(":RFID", RFID);
    query.exec();

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    if( i == 0 )
    {
        throw QString("La Carte Demandé N'existe Pas");
    }
}

void Carte_Fidelite::VerifRFID(QString RFID)
{
    if( RFID[2] != ':' || RFID[5] != ':' || RFID[8] != ':' )
    {
        throw QString("La Carte RFID N'est Pas Valide");
    }
}
