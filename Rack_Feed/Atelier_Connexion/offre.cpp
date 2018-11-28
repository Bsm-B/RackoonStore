#include "offre.h"
#include <QDebug>
#include <QCoreApplication>


//CONSTRUCTEUR PAR DEFAUT
offre::offre()
{

titre="";
type="";
date_debut="";
date_fin="";
id=0;
prix=0;
reduction=0;

}

//CONSTRUCTEUR PARAMETRE
offre::offre(int id,QString titre,QString type ,int prix,int reduction,QString date_debut, QString date_fin)
{

  this->id=id;
  this->type=type;
  this->titre=titre;
    this->prix=prix;
    this->reduction=reduction;
    this->date_debut=date_debut;
    this->date_fin=date_fin;

}

//GET
int offre::get_id(){return  id;}
QString offre::get_type(){return  type;}
QString offre::get_titre(){return  titre;}
int offre::get_prix(){return prix;}
int offre::get_reduction(){return reduction;}
QString offre::get_date_debut(){return  date_debut;}
QString offre::get_date_fin(){return date_fin;}

//FONCTION AJOUTER
bool offre::ajouter_offre()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO offre(ID, TYPE, TITRE, PRIX, REDUCTION ,DATE_DEBUT ,DATE_FIN) "
                    "VALUES (:id, :type, :titre, :prix, :reduction,  :date_debut, :date_fin)");
query.bindValue(":id", res);
query.bindValue(":type",type);
query.bindValue(":titre", titre);
query.bindValue(":prix",prix);
query.bindValue(":reduction",reduction);
query.bindValue(":date_debut", date_debut);
query.bindValue(":date_fin",date_fin);

return    query.exec();
}

//FONCTION AFFICHER
QSqlQueryModel * offre::afficher_offre()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from offre");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TITRE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("REDUCTION "));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE_FIN"));
    return model;
}
//FONCTION SUPPRIMER
bool offre::supprimer_offre(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from offre where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

//MODIFIER OFFRE
bool offre:: modifier_offre(int id)
{
    QSqlQuery q;
    q.prepare("UPDATE offre  SET ID=:ID,TITRE=:TITRE,TYPE=:TYPE, PRIX=:PRIX ,REDUCTION=:REDUCTION ,DATE_DEBUT=:DATE_DEBUT ,DATE_FIN=:DATE_FIN where ID=:ID");
    q.bindValue(":TITRE", this->titre);
    q.bindValue(":TYPE", this->type);
    q.bindValue(":PRIX", this->prix);
    q.bindValue(":REDUCTION", this->reduction);
    q.bindValue(":DATE_DEBUT", this->date_debut);
    q.bindValue(":DATE_FIN", this->date_fin);
    q.bindValue(":ID",id);
/*q.exec();
if(q.exec())
qDebug()<<"offre modifiée";*/
return q.exec();
}
//RECHERCHER OFFRE
bool offre::rechercher_offre(int id)
{
    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("select * from offre where id = :id')");
    //    q.prepare("select * from offre where id = :id");

    q.bindValue(":id",res);

    return     q.exec();
 ;
}
QSqlQueryModel * offre::afficher_offreAV(int id)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("select * from offre where ( ID LIKE '"+res+"%')");
    q.addBindValue(res);
    q.exec();
    model->setQuery(q);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TITRE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("REDUCTION"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE_FIN"));
        return model;

}
