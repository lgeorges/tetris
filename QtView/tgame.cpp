#include "tgame.h"

TGame::TGame(QObject *parent) :
    QObject(parent)
{

    game = new Game();

    TableView* table = game->getGameView();

    frame = new TFrame(table);
    frame->show();
    frame->updateFrame();
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(updateGame()));
    timer->start(1000);
//    this->updateGame();
}

void TGame::updateGame()
{
    game->next();
    frame->updateFrame();
//    emit this->gameUpdated();
}
