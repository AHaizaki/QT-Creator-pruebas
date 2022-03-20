#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Probando terminal en QT";
    return a.exec();
}
