#include "clientui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClientUI w;
    w.show();

    return a.exec();
}
