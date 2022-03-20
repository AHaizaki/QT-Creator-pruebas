#include "person.h"

#include <QDebug>

Person::Person(QObject *parent):QObject(parent) {}

void Person::setName(const QString &name)
{
    this->name = name;
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setSalary(double salary)
{
    this->salary = salary;
}

QString Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

double Person::getSalary() const
{
    return salary;
}

Person::~Person()
{
    qDebug() << name << " ha sido erradicado";
}

QString Person::toString() const
{
     return QString("Name: %1\nAge: %2\nSalary: %3\n")
             .arg(this->name)
             .arg(this->age).arg(this->salary);
}
