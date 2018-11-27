#include "ray.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ray w;
    w.show();

    return a.exec();
}
