#include <QCoreApplication>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s = "Baldomero original",withoutQuotes;
    QString name = "Baldomero Gonzalez",content, qs = s.c_str();
    int x = 1;
    double y = 6.19;
    char z = '@';
    content = QString("%1 %2 %3").arg(x).arg(y).arg(z);
    qDebug() << name;
    qDebug() << content;
    qDebug() << qs;
    withoutQuotes = name.toStdString();
    qDebug() << withoutQuotes.c_str();
    return a.exec();
}
