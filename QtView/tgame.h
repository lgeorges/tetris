#ifndef TGAME_H
#define TGAME_H

#include <QObject>
#include <QTimer>
#include "Core/game.h"
#include "QtView/tframe.h"

class TGame : public QObject
{
    Q_OBJECT
public:
    explicit TGame(QObject *parent = 0);

signals:
//    gameUpdated()

public slots:
    void updateGame();

private:
    Game *game;
    TFrame *frame;
};

#endif // TGAME_H
