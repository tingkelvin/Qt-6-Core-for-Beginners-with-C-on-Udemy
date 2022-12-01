#include <QCoreApplication>
#include "agecalc.h"


void print(AgeCalc &calc){
    qInfo() << calc.getName();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AgeCalc bryan;
    AgeCalc tammy;
    bryan.setAge(36);
    bryan.setName("Brayn");
    tammy.setAge(27);
    tammy.setName("Tammy");
    print(bryan);
    return a.exec();
}
