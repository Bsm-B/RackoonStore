#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Notification
{
public:
    Notification();
    Notification(QString,QString);
    int Add();
    int Delete(int);
    QSqlQueryModel * Display();
private:
    int ID = 0;
    QString Info,Type;
};

#endif // NOTIFICATION_H
