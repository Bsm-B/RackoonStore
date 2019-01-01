#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include "connexion.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Connexion C;
    C.ouvrirConnexion();
    w.show();

    return a.exec();
}
