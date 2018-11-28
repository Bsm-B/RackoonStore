#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reclamation.h"
#include "avis.h"
#include "offre.h"
#include <QMessageBox>
#include <QDebug>
#include <QMediaPlayer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QMediaPlayer *music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/son/son/debut.mp3")) ;
        music->play();

ui->setupUi(this);
ui->tabreclamation->setModel(tmpreclamation.afficher_reclamation());
ui->taboffre->setModel(tmpoffre.afficher_offre());
ui->tabavis->setModel(tmpavis.afficher_avis());
ui->tabrechercher->setModel(tmpreclamation.afficher_reclamation());
ui->taboffre_2->setModel(tmpoffre.afficher_offre());



ui->label_13->setText("<img src=':/new/prefix1/presentation.png' >");
ui->label_7->setText("<img src=':/new/prefix1/angry.png' >");
ui->label_8->setText("<img src=':/new/prefix1/happiness (1).png' >");
ui->label_4->setText("<img src=':/new/prefix1/sad.png' >");
ui->label_6->setText("<img src=':/new/prefix1/help.png' >");

}

MainWindow::~MainWindow()
{
    delete ui;
}



//supprimer reclamation
void MainWindow::on_pb_supprimer_clicked()
{
    QMediaPlayer *music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/son/son/corbeille.mp3")) ;
        music->play();
    int id = ui->lineEdit_id->text().toInt();

    reclamation r;
    QMessageBox::StandardButton reply ;
    reply = QMessageBox::question(this,"","voulez vous vraiment supprimer ce client");
    if(reply==QMessageBox::Yes)
   {
    int id=ui->rechercher_reclamation->text().toInt();
     r.supprimer_reclamation(id);
   }

    bool test=tmpreclamation.supprimer_reclamation(id);
    if(test)
    {ui->tabreclamation->setModel(tmpreclamation.afficher_reclamation());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une reclamation"),
                    QObject::tr("reclamation supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une reclamation"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
//ajouter offre
void MainWindow::on_pushButton_O_clicked()
{
    QMediaPlayer *music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/son/son/clic.mp3")) ;
        music->play();
    int id = ui->lineEdit_Oid_3->text().toInt();
    QString titre= ui->lineEdit_Otitre->text();
    QString type= ui->lineEdit_Oid_6->text();
    int prix= ui->lineEdit_Oprix->text().toInt();
    int reduction= ui->lineEdit_Oreduction->text().toInt();
    QString date_debut= ui->lineEdit_Odatedeb->text();
    QString date_fin= ui->lineEdit_Odatefin->text();
    offre o( id,titre ,type ,prix, reduction,date_debut, date_fin);
  bool test=o.ajouter_offre();
  if(test)
{ui->taboffre->setModel(tmpoffre.afficher_offre());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une offre"),
                  QObject::tr("offre ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une offre"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}
//supprimer offre
void MainWindow::on_pb_Osupprimer_clicked()
{
    QMediaPlayer *music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/son/son/corbeille.mp3")) ;
        music->play();
   int id = ui->lineEdit_Oid_5->text().toInt();
    bool test=tmpoffre.supprimer_offre(id);
    if(test)
    {ui->taboffre->setModel(tmpoffre.afficher_offre());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une offre"),
                    QObject::tr("offre supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une offre"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
  }
//ajouter reclamation
void MainWindow::on_pushButtonR_clicked()
{
    QMediaPlayer *music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/son/son/clic.mp3")) ;
        music->play();

    int id = ui->lineEdit_Rid->text().toInt();
    QString nom= ui->lineEdit_Rnom->text();
    QString prenom= ui->lineEdit_Rprenom->text();
    QString adresse= ui->lineEdit_Radresse->text();
    QString contenu= ui->lineEdit_Rcontenu->text();
    QString type= ui->lineEdit_R->text();
  reclamation r(id,nom,prenom,adresse,type,contenu);
  bool test=r.ajouter_reclamation();
  if(test)
{ui->tabreclamation->setModel(tmpreclamation.afficher_reclamation());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une reclamation"),
                  QObject::tr("Reclamation ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une reclamation"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}



//rechercher reclamation
void MainWindow::on_Rrechercher_clicked()
{
    ui->tabreclamation->setModel(tmpreclamation.afficher_reclamation());

}


//rechercher offre
void MainWindow::on_pb_orechercher_clicked()
{
     ui->taboffre->setModel(tmpoffre.afficher_offre());

}




//MODIFIER RECLAMATION
void MainWindow::on_pushButton_2_clicked()
{
 int id=ui->lineEdit_Rid_2->text().toInt();
        QString adresse= ui->lineEdit_Radresse_2->text();
        QString prenom= ui->lineEdit_Rprenom_2->text();
        QString nom= ui->lineEdit_Rnom_2->text();
        QString type= ui->lineEdit_R_2->text();
        QString contenu= ui->lineEdit_Rcontenu_2->text();

         reclamation r(id,nom,prenom,adresse,type,contenu);
bool test=r.modifier_reclamation(id);

        if(test==true)
      {ui->tabreclamation->setModel(tmpreclamation.afficher_reclamation());//refresh
      QMessageBox::information(nullptr, QObject::tr("Modifer une reclamation"),
                        QObject::tr("reclamation modifiee.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier une reclamation"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}
//MODIFIER OFFRE
void MainWindow::on_pushButton_clicked()
{

        int id=ui->lineEdit_Omid->text().toInt();
        QString titre= ui->lineEdit_Omtitre->text();
        QString type= ui->lineEdit_Omtype->text();
        int prix=ui->lineEdit_Omprix->text().toInt();
        int reduction=ui->lineEdit_Omreduction->text().toInt();
        QString date_debut= ui->lineEdit_Omdatedeb->text();
        QString date_fin= ui->lineEdit_Omdatefin->text();

         offre o(id,titre,type,prix,reduction,date_debut,date_fin);
bool test=o.modifier_offre(id);

        if(test==true)
      {ui->taboffre->setModel(tmpoffre.afficher_offre());//refresh
      QMessageBox::information(nullptr, QObject::tr("Modifer une offre"),
                        QObject::tr("offre modifiee.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier une offre"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
//RECHERCHE AVANCEE RECLAMATION
void MainWindow::on_lineEdit_rid_cursorPositionChanged(int , int )
{
    if(ui->lineEdit_rid->text()=="")
      ui->tabrechercher->setModel(tmpreclamation.afficher_reclamation());

    else
    {
 int id= ui->lineEdit_rid->text().toInt();
 ui->tabrechercher->setModel(tmpreclamation.afficher_reclamationAV(id));
    }
}
//RECHERCHER AVANCEE OFFRE
void MainWindow::on_lineEdit_oid_2_cursorPositionChanged(int , int )
{
    if(ui->lineEdit_oid_2->text()=="")
      ui->taboffre_2->setModel(tmpoffre.afficher_offre());

    else
    {
    int id= ui->lineEdit_oid_2->text().toInt();
    ui->taboffre_2->setModel(tmpoffre.afficher_offreAV(id));
    }
 }
//CALCUL AVIS
void MainWindow::on_radioButton_clicked()
{
    QMessageBox::warning(this,"avis","Content.");
    tmpavis.ajouter_avis(ui->lineEdit->text().toInt(),1,0,0,0);
    ui->tabavis->setModel(tmpavis.afficher_avis());

}

void MainWindow::on_radioButton_4_clicked()
{
    QMessageBox::warning(this,"avis","Enerver.");
    tmpavis.ajouter_avis(ui->lineEdit->text().toInt(),0,1,0,0);
    ui->tabavis->setModel(tmpavis.afficher_avis());
}

void MainWindow::on_radioButton_2_clicked()
{
    QMessageBox::warning(this,"avis","Passable.");
    tmpavis.ajouter_avis(ui->lineEdit->text().toInt(),0,0,1,0);
    ui->tabavis->setModel(tmpavis.afficher_avis());
}

void MainWindow::on_radioButton_3_clicked()
{
    QMessageBox::warning(this,"avis","Demande.");
    tmpavis.ajouter_avis(ui->lineEdit->text().toInt(),0,0,0,1);
    ui->tabavis->setModel(tmpavis.afficher_avis());
}



