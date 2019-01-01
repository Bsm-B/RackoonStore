#include "client.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>


Client::Client()
{
    nom = "" ;
    prenom = "" ;
    derniere_visite = "" ;
    CIN = 0 ;
}

QString Client::getnom()
{
    return nom;
}

QString Client::getprenom()
{
    return prenom ;
}

QString Client::getderniere_visite()
{
    return derniere_visite ;
}

int Client::getCIN()
{
    return CIN ;
}

void Client::Ajouter(int CIN, QString name, QString surname, QString Birth_date, QString D_V, QString Email, QString photo)
{
    verifCIN(CIN);
    verifnom(name);
    verifprenom(surname);
    verifD_V(Birth_date);
    verifD_V(D_V);
    CINUnique(CIN);
    QSqlQuery query;
            query.prepare("INSERT INTO Client (CIN, NAME, SURNAME, BIRTH_DATE, LAST_VISIT, E_MAIL, PHOTO) VALUES (:CIN, :NAME, :SURNAME, TO_DATE(:BIRTH_DATE, 'YYYY/MM/DD'), TO_DATE(:D_V, 'YYYY/MM/DD'), :E_MAIL, :PHOTO)");
            query.bindValue(":CIN", CIN);
            query.bindValue(":NAME", name);
            query.bindValue(":SURNAME", surname);
            query.bindValue(":BIRTH_DATE", Birth_date);
            query.bindValue(":D_V", D_V);
            query.bindValue(":E_MAIL", Email);
            query.bindValue(":PHOTO", photo);
            query.exec();
}

void Client::Modifier(int CIN, QString name, QString surname, QString Birth_date, QString D_V, QString Email, QString photo)
{
    verifCIN(CIN);
    verifnom(name);
    verifprenom(surname);
    verifD_V(Birth_date);
    verifD_V(D_V);
    CINExist(CIN);
    QSqlQuery q;
    q.prepare("update Client set NAME = :NAME, SURNAME = :SURNAME, LAST_VISIT = TO_DATE(:D_V, 'YYYY/MM/DD'), BIRTH_DATE = TO_DATE(:BIRTH_DATE, 'YYYY/MM/DD'), E_MAIL = :E_MAIL, PHOTO = :PHOTO  where CIN= :CIN");
    q.bindValue(":CIN", CIN);
    q.bindValue(":NAME", name);
    q.bindValue(":SURNAME", surname);
    q.bindValue(":BIRTH_DATE", Birth_date);
    q.bindValue(":D_V", D_V);
    q.bindValue(":E_MAIL", Email);
    q.bindValue(":PHOTO", photo);
    q.exec();
}

void Client::Supprimer(int CIN)
{
    verifCIN(CIN);
    CINExist(CIN);
    QSqlQuery q;
    q.prepare("delete from FIDELITY_CARD where CIN=:CIN");
    q.bindValue(":CIN", CIN);
    q.exec();

    q.prepare("delete from Client where CIN=:CIN");
    q.bindValue(":CIN", CIN);
    q.exec();
}


void Client::Supprimer_tout()
{
    QSqlQuery q;
    q.exec("delete from Client");
}

void Client::Afficher(QTableWidget *t, QLabel *l)
{
    QSqlQuery query;
    t->setRowCount(0);
    query.exec("SELECT * from CLIENT");
                while (query.next())
                {
    t->insertRow(t->rowCount());
    t->setItem(t->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    t->setItem(t->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    t->setItem(t->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    t->setItem(t->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 4, new QTableWidgetItem(query.value(4).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 5, new QTableWidgetItem(query.value(5).toString()) );
    t->setItem(t->rowCount() - 1, 6, new QTableWidgetItem(query.value(6).toString()) );
    //qDebug() << query.value(3).toString() ;
                }
    l->setText(QString::number(CalculNbrClient()));
}

void Client::tri(QTableWidget *t, int checked_column)
{
    QSqlQuery query;
    t->setRowCount(0);

    if(checked_column == 2)
    {
        query.exec("SELECT * from Client order by NAME");
    }
    else if (checked_column == 1)
    {
        query.exec("SELECT * from Client order by CIN");
    }
    else if (checked_column == 3)
    {
        query.exec("SELECT * from Client order by SURNAME");
    }
                while (query.next()) {
    t->insertRow(t->rowCount());
    t->setItem(t->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    t->setItem(t->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    t->setItem(t->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    t->setItem(t->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 4, new QTableWidgetItem(query.value(4).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 5, new QTableWidgetItem(query.value(5).toString()) );
    t->setItem(t->rowCount() - 1, 6, new QTableWidgetItem(query.value(6).toString()) );
                }
}

void Client::rech_avancee(QTableWidget *t, QString str, int checked_column, int checked_spot)
{
    QSqlQuery query;
    t->setRowCount(0);

    QString  cmd  = "SELECT * from Client where " ;

    if(checked_column == 1)
    {
        cmd += "NAME LIKE " ;
    }
    else if (checked_column == 2)
    {
        cmd += "SURNAME LIKE " ;
    }
    else if (checked_column == 3)
    {
        cmd += "CIN LIKE " ;
    }

    if(checked_spot == 1)
    {
        cmd += "'" + str + "%'" ;
    }
    else if (checked_spot == 2)
    {
        cmd += "'%" + str + "'" ;
    }
    else if (checked_spot == 3)
    {
        cmd += "'%" + str + "%'" ;
    }

    query.exec(cmd);
                while (query.next()) {
    t->insertRow(t->rowCount());
    t->setItem(t->rowCount() - 1, 0, new QTableWidgetItem(query.value(0).toString()) );
    t->setItem(t->rowCount() - 1, 1, new QTableWidgetItem(query.value(1).toString()) );
    t->setItem(t->rowCount() - 1, 2, new QTableWidgetItem(query.value(2).toString()) );
    t->setItem(t->rowCount() - 1, 3, new QTableWidgetItem(query.value(3).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 4, new QTableWidgetItem(query.value(4).toString().mid(0, 10) ));
    t->setItem(t->rowCount() - 1, 5, new QTableWidgetItem(query.value(5).toString()) );
    t->setItem(t->rowCount() - 1, 6, new QTableWidgetItem(query.value(6).toString()) );
                }
}

void Client::stat()
{
    QSqlQuery query ;

    query.exec("SELECT * from Client where LAST_VISIT LIKE '%14'");
    int i = 0 ;

    QBarSet *set0 = new QBarSet("Nombre Des Derniéres Visites Par Ans(Pour les dérnieres 5 ans)");
    while (query.next()) {
        i++ ;
    }
    *set0 << i ;

    query.exec("SELECT * from Client where LAST_VISIT LIKE '%15'");
    i = 0 ;
    while (query.next()) {
        i++ ;
    }
    *set0 << i ;

    query.exec("SELECT * from Client where LAST_VISIT LIKE '%16'");
    i = 0 ;
    while (query.next()) {
        i++ ;
    }
    *set0 << i ;

    query.exec("SELECT * from Client where LAST_VISIT LIKE '%17'");
    i = 0 ;
    while (query.next()) {
        i++ ;
    }
    *set0 << i ;

    query.exec("SELECT * from Client where LAST_VISIT LIKE '%18'");
    i = 0 ;
    while (query.next()) {
        i++ ;
    }
    *set0 << i ;

    //*set0 << 900 << 1100 << 1000 << 1500 << 1600 ;
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques Des Clients");
    chart->setAnimationOptions(QChart::AllAnimations);
    QStringList categories;
    categories << "2015" << "2016" << "2017" << "2018" << "2019";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setWindowTitle("Statistique");
    chartView->resize(1000, 500);
    chartView->show();
}

void Client::verifCIN(int CIN)
{
    if( CIN > 99999999 )
        throw QString("CIN Supérieure A 8 Chiffres");
    else if ( CIN <= 0 )
        throw QString("CIN Ne Doit Pas Contenir Des Charactéres et Ne Doit Pas Etre Un 0");
}

void Client::verifnom(QString nom)
{
    if ( nom.size() == 0 )
        throw QString("La Taille Du Nom Ne Doit Pas Etre 0");
    else if ( nom.size() > 255 )
        throw QString("La Taille Du Nom Ne Doit Pas Etre Supérieur a 255");

    int i = 0 ;

    while( i < nom.size() )
    {
        if( ( nom[i] >= "a" && nom[i] <= "z" ) || ( nom[i] >= "A" && nom[i] <= "Z" ) )
        {
            i++ ;
        }
        else
            break ;
    }
    if( i < nom.size() )
        throw QString("Le Nom Ne Doit Pas Contenir Des Chiffres Ou Des Symboles");
}

void Client::verifprenom(QString prenom)
{
    if ( prenom.size() == 0 )
        throw QString("La Taille Du Prénom Ne Doit Pas Etre 0");
    else if ( prenom.size() > 255 )
        throw QString("La Taille Du Prénom Ne Doit Pas Etre Supérieur a 255");

    int i = 0 ;

    while( i < prenom.size() )
    {
        if( ( prenom[i] >= "a" && prenom[i] <= "z" ) || ( prenom[i] >= "A" && prenom[i] <= "Z" ) )
        {
            i++ ;
        }
        else
            break ;
    }
    if( i < prenom.size() )
        throw QString("Le Prénom Ne Doit Pas Contenir Des Chiffres Ou Des Symboles");
}

void Client::verifD_V(QString D_V)
{
    if ( D_V.size() == 0 )
        throw QString("La Taille Du Date Ne Doit Pas Etre 0");
    else if ( D_V.size() > 10 )
        throw QString("La Taille Du Date Ne Doit Pas Etre Supérieur a 10 Charactéres");
    else if ( D_V.size() < 10 )
        throw QString("La Taille Du Date Ne Doit Pas Etre Inférieur a 10 Charactéres");

    if( ( D_V[4] != "-" ) )
    {
        throw QString("La Date Doit Etre Sous La Forme (aaaa-mm-jj)");
    }
    else if( ( D_V[7] != "-" ) )
    {
        throw QString("La Date Doit Etre Sous La Forme (aaaa-mm-jj)");
    }
    else if( ( D_V[0] != "2" && D_V[0] != "1" ) || ( D_V[1] < "0" || D_V[1] > "9" ) || ( D_V[2] < "0" || D_V[2] > "9" ) || ( D_V[3] < "0" || D_V[3] > "9" ) )
    {
        throw QString("Verifier L'année");
    }
    else if ( ( D_V[5] < "0" || D_V[5] > "3" ) || ( D_V[6] < "0" || D_V[6] > "9" ) || ( D_V[5] == "0" && D_V[6] == "0" ) )
    {
        throw QString("Verifier Le Mois");
    }
    else if ( ( D_V[8] < "0" || D_V[8] > "3" ) || ( D_V[9] < "0" || D_V[9] > "9" ) || ( D_V[8] == "0" && D_V[9] == "0" ) )
    {
        throw QString("Verifier Le Jour");
    }
}

void Client::CINExist(int CIN)
{
    QSqlQuery query ;
    query.prepare("SELECT * from Client where CIN = :CIN");
    query.bindValue(":CIN", CIN);
    query.exec();

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    if( i == 0 )
    {
        throw QString("Le Client Demandé N'existe Pas");
    }
}

void Client::CINUnique(int CIN)
{
    QSqlQuery query ;
    query.prepare("SELECT * from Client where CIN = :CIN");
    query.bindValue(":CIN", CIN);
    query.exec();

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    if( i != 0 )
    {
        throw QString("Le Client Demandé existe Déja");
    }
}

int Client::CalculNbrClient()
{
    QSqlQuery query ;
    query.exec("SELECT * from Client");

    int i = 0 ;
    while (query.next()) {
        i++ ;
    }

    return i ;
}
