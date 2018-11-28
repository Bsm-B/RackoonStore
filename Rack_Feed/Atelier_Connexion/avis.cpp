#include "avis.h"
#include <QDebug>
#include <QGridLayout>
//CONSTRUCTEUR
avis::avis()
{
id=0;
content="";
enerver="";
demande="";
passable="";
}

//CONSTRUCTEUR PARAMETRE
avis::avis(int id,QString content,QString enerver,QString passable,QString demande)
{
  this->id=id;
  this->content=content;
  this->enerver=enerver;
    this->passable=passable;
    this->demande=demande;

}

//GET

int avis::get_id(){return  id;}
QString avis::get_content(){return  content;}
QString avis::get_enerver(){return  enerver;}
QString avis::get_passable(){return  passable;}
QString avis::get_demande(){return  demande;}


//AJOUTER avis
bool avis::ajouter_avis(int id, int content,int enerver, int passable, int demande)
{

QSqlQuery query;
query.prepare("INSERT INTO avis(ID, CONTENT ,ENERVER,PASSABLE,DEMANDE) "
                    "VALUES (:id, :content, :enerver, :passable,  :demande)");
query.bindValue(":id", id);
query.bindValue(":content", content);
query.bindValue(":enerver", enerver);
query.bindValue(":passable",passable);
query.bindValue(":demande", demande);
return    query.exec();
}

//AFFICHER avis
QSqlQueryModel * avis::afficher_avis()
{
QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from avis");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("CONTENT "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ENERVER"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PASSABLE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("DEMANDE "));
    return model;
}
//SUPPRIMER AVIS
bool avis::supprimer_avis(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from avis where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}
/*
void avis::calculer_avis(QGridLayout * wind)
{

   int content = 0;
   int enerver = 0;
   int demande = 0;
   int passable =0;
   QSqlQuery qry ;
   qry.prepare("select type from avis");
   qry.exec();
    while(qry.next())

    {

        if(qry.value(0).toString()=="content")
        {
            content++;

        }

        if(qry.value(0).toString()=="enerver")
        {
            enerver++;
        }
        if(qry.value(0).toString()=="passable")
        {
            passable++;
        }
        if(qry.value(0).toString()=="demande")
        {
            demande++;
        }
    }
*/
