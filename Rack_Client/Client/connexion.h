#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>


class Connexion
{
private:
    QSqlDatabase db ;
public:
    Connexion();
    bool ouvrirConnexion();
    void fermerconnexion();
};

#endif // CONNEXION_H
