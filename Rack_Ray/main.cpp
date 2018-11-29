#include "ray.h"
#include "connxion.h"
#include <QFile>
#include <QApplication>
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ray w;
    Connxion test;
    QFile file(":/qss/css/qss.css");
    if (!file.open(QIODevice::ReadOnly))
        exit(0);

    QTextStream in(&file);
    QString css = in.readAll();
    qApp->setStyleSheet(css);
    if(test.Open_db()){
       w.show();
    }else{
        QMessageBox::critical(nullptr, QObject::tr("RackoonStore"),
                          QObject::tr("E001:Data Base Not Open !.\n"
                                      "Click Cancel to Exit."), QMessageBox::Cancel);
    }
    return a.exec();
}
