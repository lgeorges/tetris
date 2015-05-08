#ifndef GAME_H
#define GAME_H
#include"stdlib.h"

#include "Core/tetrominomodelc.h"
#include "Core/tetrominomodelt.h"
#include "Core/tetrominomodell.h"
#include "Core/tetrominomodellinv.h"
#include "Core/tetrominomodeli.h"
#include "Core/tetrominomodels.h"
#include "Core/tetrominomodelsinv.h"
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
    Tetromino* randomTetromino();
};

#endif // GAME_H
