#ifndef CONNXION_H
#define CONNXION_H
#include <QSqlDatabase>
class Connxion
{
public:
    Connxion();
    bool Open_db();
    void Close_db();
private:
    QSqlDatabase MyDatabase;
};

#endif // CONNXION_H
