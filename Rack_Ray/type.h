#ifndef TYPE_H
#define TYPE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Type
{
private:
    int ID;
    QString Name;
public:
    Type();
    Type(int, QString);
    QSqlQueryModel * Display();
    bool Add();
    bool Delete(int);
};

#endif // TYPE_H
