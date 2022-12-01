#include "agecalc.h"

int AgeCalc::getAge() const
{
    return age;
}

void AgeCalc::setAge(int newAge)
{
    age = newAge;
}

int AgeCalc::dogYears() const
{
return age*7;
}

int AgeCalc::catYears() const
{
return age*8;
}

int AgeCalc::humanYears() const
{
return age;
}

void AgeCalc::setName(const QString &newName)
{
    name = newName;
}

QString AgeCalc::getName() const
{
   return name;
}

AgeCalc::AgeCalc(QObject *parent)
    : QObject{parent}
{

}
