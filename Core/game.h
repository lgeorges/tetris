#ifndef GAME_H
#define GAME_H

#include "Core/tetrominomodelt.h"
#include "InterfaceOut/tableview.h"
#include "Core/ground.h"

using namespace std;

class Game
{
public:
    Game();
    void updateView();

    TableView *getGameView() const;
    void setGameView(TableView *value);
    void next();
    void right();
    void left();
    void rotate();

private:
    Tetromino* currentPiece;
    TableView* gameView;
    Ground* ground;
};

#endif // GAME_H
