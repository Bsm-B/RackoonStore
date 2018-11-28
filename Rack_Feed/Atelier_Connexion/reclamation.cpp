#include "reclamation.h"
#include <mainwindow.h>
#include <QDebug>



//CONSTRUCTEUR
#include "offre.h"
#include <QDebug>
#include <QCoreApplication>

//CONSTRUCTEUR PAR DEFAUT
reclamation::reclamation()
{
id=0;
nom="";
prenom="";
adresse="";
type="";
contenu="";
}

//CONSTRUCTEUR PARAMETRE
reclamation::reclamation(int id,QString nom,QString prenom,QString adresse,QString type,QString contenu)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->type=type;
    this->adresse=adresse;
    this->contenu=contenu;

}

//GET
int reclamation::get_id(){return  id;}
QString reclamation::get_nom(){return  nom;}
QString reclamation::get_prenom(){return  prenom;}
QString reclamation::get_adresse(){return  adresse;}
QString reclamation::get_type(){return  type;}
QString reclamation::get_contenu(){return  contenu;}

//FONCTION AJOUTER
bool reclamation::ajouter_reclamation()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO reclamation(ID, NOM, PRENOM, ADRESSE, TYPE, CONTENU) "
                    "VALUES (:id, :nom, :prenom, :adresse, :type,  :contenu)");

    query.bindValue(":id", res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":type",type);
    query.bindValue(":contenu", contenu);

return    query.exec();
}

//FONCTION AFFICHER
QSqlQueryModel * reclamation::afficher_reclamation()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from reclamation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CONTENU"));
    return model;
}
//FONCTION SUPPRIMER
bool reclamation::supprimer_reclamation(int idd)
{

    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("Delete from reclamation where ID = :id ");
    query.bindValue(":id", res);
    return    query.exec();
    }



//RECHERCHER RECLAMATION
bool reclamation::rechercher_reclamation(int id)
{
    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("select * from reclamation where id = :id')");
    q.bindValue(":id",res);

    return     q.exec();
 ;
}
//MODIFIER reclamation
bool reclamation:: modifier_reclamation(int id)
{
    QSqlQuery q;
    q.prepare("UPDATE reclamation  SET ID=:ID,NOM=:NOM,PRENOM=:PRENOM, ADRESSE=:ADRESSE ,TYPE=:TYPE ,CONTENU=:CONTENU where ID=:ID");
    q.bindValue(":NOM", this->nom);
    q.bindValue(":PRENOM", this->prenom);
    q.bindValue(":ADRESSE", this->adresse);
    q.bindValue(":TYPE", this->type);
    q.bindValue(":CONTENU", this->contenu);
    q.bindValue(":ID",id);
return q.exec();
}
//AFFICHAGE RECHERCHE AVANCEE RECLAMATION
QSqlQueryModel * reclamation::afficher_reclamationAV(int id)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("select * from RECLAMATION where ( ID LIKE '"+res+"%')");
    q.addBindValue(res);
    q.exec();
    model->setQuery(q);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TYPE "));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CONTENU"));
        return model;

}
