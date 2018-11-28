#ifndef MATERIAL_H
#define MATERIAL_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

class Material
{
private:
    int Id,Quantity;
    QString Code,Item_Name,Type;
    double Price;
    QDate Expiration_Date;
public:
    Material();
    Material(int,QString,QString,int,QString,double,QDate);
    QSqlQueryModel * Get_Type();
    QSqlQueryModel * Display();
    QSqlQueryModel * DisplayID();
    QSqlQueryModel * DisplayCode();
    QSqlQueryModel * DisplayName();
    QSqlQueryModel * Search(int,QString);


    bool Add();
    bool Delete(int);
    bool Update();
    bool Check(int);
    int  Get_Count();
    int Get_Sum();
    int Get_Qtn();


};

#endif // MATERIAL_H
