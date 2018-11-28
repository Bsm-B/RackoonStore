#ifndef AVIS_H
#define AVIS_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QGridLayout>
class avis
{
private:
    QString content,enerver,demande,passable;
    int id;
public:
    avis();
    avis(int,QString,QString,QString,QString);

    int get_id();
    QString get_content();
    QString get_enerver();
    QString get_demande();
    QString get_passable();


    bool ajouter_avis(int, int ,int,int ,int);
    QSqlQueryModel * afficher_avis();
    bool supprimer_avis(int);
    bool modifier_avis(int);
    void calculer_avis(QGridLayout *);

};

#endif // AVIS_H
