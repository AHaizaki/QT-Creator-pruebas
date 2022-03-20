#include <QCoreApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir folder;
    folder.setPath(".");
    for (uint i = 2; i < folder.count(); i++) {
        qDebug() << folder[i];
    }
    return a.exec();
}
