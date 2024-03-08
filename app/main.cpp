#include <QCoreApplication>
#include <QDebug>
#include "func.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double coef_a = 2.0;
    double b = -3.0;
    double c = 1.0;

    double root1, root2;
    quadraticEquation(coef_a, b, c, root1, root2);

    qDebug() << "Root 1:" << root1;
    qDebug() << "Root 2:" << root2;

    return a.exec();
}
