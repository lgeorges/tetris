#include "tetrominomodeli.h"
#include <iostream>

TetrominoModelI::TetrominoModelI():Tetromino()
{
    int height = H_TABLE;
    int width = W_TABLE;
    int m=width/2-1;
    positions->push_back(new Position(m-1,height-1));
    positions->push_back(new Position(m,height-1));
    centre=new Position(m+1,height-1);
    positions->push_back(centre);
    positions->push_back(new Position(m+2,height-1));


    this->color=new TableColor(0,255,0);
    }
