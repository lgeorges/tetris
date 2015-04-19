#include <QApplication>
//#include <QDebug>

#include "tgame.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TGame* game = new TGame();

    return app.exec();
}

