#ifndef CARTE_FIDELITE_H
#define CARTE_FIDELITE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>


class Carte_Fidelite
{
    int CIN, points ;
public:
    Carte_Fidelite();
    int getCIN();
    int getpoints();
    bool ajouter_carte(int, int);
    bool modifier_carte(int, int);
    bool supprimer_carte(int);
    bool supprimer_tout();
};

#endif // CARTE_FIDELITE_H
