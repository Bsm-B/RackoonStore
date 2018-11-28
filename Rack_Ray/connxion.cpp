#include "connxion.h"

Connxion::Connxion()
{

}
bool Connxion::Open_db()
{
    bool Test(false);
    MyDatabase = QSqlDatabase::addDatabase("QODBC");
    MyDatabase.setDatabaseName("xxx");
    MyDatabase.setUserName("xxx");//inserer nom de l'utilisateur
    MyDatabase.setPassword("xxx");//inserer mot de passe de cet utilisateur
    if (MyDatabase.open()) Test=true;
    return  Test;
}

void Connxion::Close_db()
{
    MyDatabase.close();
}
