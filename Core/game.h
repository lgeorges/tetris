#ifndef GAME_H
#define GAME_H

#include "tetrominomodelt.h"
#include "tableview.h"
#include "ground.h"


class Game
{
public:
    Game();
    void updateView();

    TableView *getGameView() const;
    void setGameView(TableView *value);
    void next();

private:
    Tetromino* currentPiece;
    TableView* gameView;
    Ground* ground;
};

#endif // GAME_H
