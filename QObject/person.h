#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
public:
    Person(QObject *parent = NULL);

    void setName(const QString &name);

    void setAge(int age);

    void setSalary(double salary);

    QString getName() const;

    int getAge() const;

    double getSalary() const;

    ~Person();

    QString toString() const;
private:
    QString name;
    int age;
    double salary;
};


#endif // PERSON_H
