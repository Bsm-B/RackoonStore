#ifndef CARTE_FIDELITE_H
#define CARTE_FIDELITE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QTableWidget>
#include "client.h"
#include <QLabel>


class Carte_Fidelite : public Client
{
    int CIN, points ;
    QString RFID ;
public:
    Carte_Fidelite();
    void verifpoints(int points);
    int getCIN();
    int getpoints();
    void CarteUnique(int CIN);
    int CalculNbrCarte();
    void VerifRFID(QString);
    void RFIDExist(QString);
    void Afficher(QTableWidget *t, QLabel *l);
    void ajouter_carte(int, int, QString);
    void modifier_carte(int, QString);
    void supprimer_carte(QString);
    void supprimer_tout();
};

#endif // CARTE_FIDELITE_H
