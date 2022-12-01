#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>

class AgeCalc : public QObject
{
    Q_OBJECT
    int age;
    QString name;
public:
    explicit AgeCalc(QObject *parent = nullptr);

    int getAge() const;
    void setAge(int newAge);

    QString getName() const;

    int dogYears() const;
    int catYears() const;
    int humanYears() const;

    void setName(const QString &newName);

signals:

};

#endif // AGECALC_H
