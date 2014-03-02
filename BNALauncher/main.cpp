#include "mainwindow.h"
#include <QApplication>

OperatingSystem operating_system;

int main(int argc, char *argv[])
{
#ifdef Q_OS_WIN32
    operating_system = win32;
#endif
#ifdef Q_OS_LINUX
    operating_system = linux;
#endif

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
