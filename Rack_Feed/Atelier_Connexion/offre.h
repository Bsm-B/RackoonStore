#ifndef OFFRE_H
#define OFFRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class offre
{
private:
int id;
    QString titre, type, date_debut,date_fin;

    int prix, reduction;

public:
    offre();
    offre(int,QString,QString ,int,int,QString, QString);
    int get_id();
    QString get_titre();
    QString get_type();
    int get_prix();
    int get_reduction();
    QString get_date_debut();
    QString get_date_fin();
    bool ajouter_offre();
    QSqlQueryModel * afficher_offre();
    QSqlQueryModel * afficher_offreAV(int);
    bool supprimer_offre(int);
    bool modifier_offre(int);
    QSqlQueryModel * rechercher_offre(QString);
    bool modifier_offre(QString titre ,int id, QString type ,int prix,int reduction,QString date_debut, QString date_fin);



    bool rechercher_offre(int id);
};
#endif // OFFRE_H

