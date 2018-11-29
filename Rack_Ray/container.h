#ifndef CONTAINER_H
#define CONTAINER_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class container
{
public:
    container();
    container(int,int,int,float,QString);
    bool Add();
    bool Update();
    bool Delete(int);
    QSqlQueryModel * Get_Prodid();
    QSqlQueryModel * Display();
private:
    int id,prod_id,qt_prod;
    float price;
    QString alert;
};

#endif // CONTAINER_H
