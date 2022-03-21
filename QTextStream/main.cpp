#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString contenido;
    QTextStream io;
    QFile file;
    file.setFileName("../QTextStream/Baldomero.txt");
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    if (!file.isOpen()) {
        qDebug() << "No se pudo abrir el archivo";
    } else {
        io.setDevice(&file);
        io << "Textito xd owo";
        contenido = io.readAll();
        qDebug() << contenido;
        file.flush();
        file.close();
    }
    return a.exec();
}
