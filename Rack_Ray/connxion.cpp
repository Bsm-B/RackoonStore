#include "connxion.h"

Connxion::Connxion()
{

}
bool Connxion::Open_db()
{
    bool Test(false);
    MyDatabase = QSqlDatabase::addDatabase("QODBC");
    MyDatabase.setDatabaseName("Project");
    MyDatabase.setUserName("bsx");
    MyDatabase.setPassword("google2100");
    if (MyDatabase.open()) Test=true;
    return  Test;
}

void Connxion::Close_db()
{
    MyDatabase.close();
}
