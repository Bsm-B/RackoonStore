#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class reclamation
{
private:
    QString nom,prenom,adresse,type,contenu;
    int id;

public:
    reclamation();
    reclamation(int,QString,QString,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_adresse();
    QString get_type();
    QString get_contenu();
    int get_id();
    bool ajouter_reclamation();
    QSqlQueryModel * afficher_reclamation();
    QSqlQueryModel * afficher_reclamationAV(int);

    bool supprimer_reclamation(int);
    bool modifier_reclamation(int);

    bool rechercher_reclamation(int id);



};

#endif // RECLAMATION_H
