#include <QCoreApplication>
#include "person.h"
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Person *pedro = new Person,
            *baldomero = new Person(pedro),
            *baldomera = new Person(pedro);

    pedro->setName("Pedro");
    pedro->setAge(35);
    pedro->setSalary(2000.50);
    baldomero->setName("Baldomero");
    baldomero->setAge(16);
    baldomero->setSalary(0);
    baldomera->setName("Baldomera");
    baldomera->setAge(18);
    baldomera->setSalary(0);

    qDebug() << pedro->toString().toStdString().c_str();
    qDebug() << baldomero->toString().toStdString().c_str();
    qDebug() << baldomera->toString().toStdString().c_str();
    return a.exec();
}
