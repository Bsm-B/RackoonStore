#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>


class Client
{
    QString nom, prenom, derniere_visite ;
    int CIN ;
public:
    Client();
    QString getnom();
    QString getprenom();
    QString getderniere_visite();
    int getCIN();
    void Ajouter(QString, QString, QString, int);
    bool Supprimer(int);
    bool Modifier(QString, QString, QString, int);
    bool Supprimer_tout();
};

#endif // CLIENT_H
