#include <QCoreApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file;
    file.setFileName("../QFile/Baldomero.txt");
    if (!file.exists()) {
        qDebug() << "Baldomero son los padres";
    } else {
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        if (!file.isOpen()) {
            qDebug() << "No se pudo abrir el archivo";
        } else {
            QByteArray content;
            content = file.readAll();
            qDebug() << content;
            file.close();
        }
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        if (!file.isOpen()) {
            qDebug() << "No se pudo abrir el archivo";
        } else {
            QByteArray content;
            content = "Jeje";
            file.write(content);
            file.flush();
            file.close();
        }
    }


    return a.exec();
}
