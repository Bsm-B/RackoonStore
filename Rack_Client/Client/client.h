#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableWidget>
#include <QLabel>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE


class Client
{
    QString nom, prenom, derniere_visite ;
    int CIN ;
public:
    Client();
    void verifprenom(QString prenom);
    void verifnom(QString nom);
    void verifCIN(int CIN);
    void verifD_V(QString D_V);
    void CINExist(int CIN);
    void CINUnique(int CIN);
    int CalculNbrClient();
    QString getnom();
    QString getprenom();
    QString getderniere_visite();
    int getCIN();
    void Afficher(QTableWidget *t, QLabel *l);
    void Ajouter(int, QString, QString, QString, QString, QString, QString);
    void Supprimer(int);
    void Modifier(int, QString, QString, QString, QString, QString, QString);
    void Supprimer_tout();
    void tri(QTableWidget *t, int checked_column);
    void rech_avancee(QTableWidget *t, QString str, int checked_column, int checked_spot);
    void stat();
};

#endif // CLIENT_H
