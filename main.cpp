#include <QApplication>
//#include <QDebug>

#include "QtView/tgame.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TGame* game = new TGame();

    return app.exec();
}

