#include <QCoreApplication>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFileInfo finfo;
    finfo.setFile("../QFileInfo/Baldomero.txt");
    qDebug() << finfo.exists();
    qDebug() << finfo.fileName();
    qDebug() << finfo.absoluteFilePath();
    qDebug() << finfo.size();
    qDebug() << finfo.suffix();
    return a.exec();
}
