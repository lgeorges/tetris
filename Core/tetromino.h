#ifndef TETROMINO_H
#define TETROMINO_H

#include"Core/position.h"
#include"Core/block.h"
#include"constantes.h"
#include<vector>
#include"InterfaceOut/tablecolor.h"

//#include "Core/tetrominomodelt.h"
//#include "Core/tetrominomodell.h"
//#include "Core/tetrominomodellinv.h"
//#include "Core/tetrominomodeli.h"
//#include "Core/tetrominomodels.h"
//#include "Core/tetrominomodelsinv.h"

class Tetromino
{
public:
    Tetromino();

    TableColor *getColor() const;
//    std::vector <Position *> * getPositions();
    void down();
    void right();
    void left();
    void rotate();
    vector<Position *> *getPositions() const;

protected:
    vector<Position*> *positions;
    TableColor* color;
    void setColor(TableColor *value);
    void setPositions(std::vector <Position *> *positions);
    Position* centre;
//    std::vector <Position *> *positions;
//    TableColor* color;

private:
    bool moveRightPossible();
    bool moveLeftPossible();
};

#endif // TETROMINO_H
