#include "tetrominomodell.h"

TetrominoModelL::TetrominoModelL()
{
    int height = H_TABLE;
    int width = W_TABLE;
    int m=width/2-1;
    this->positions->push_back(new Position(m-1,height-2));
    positions->push_back(new Position(m,height-2));
    centre=new Position(m+1,height-2);
    positions->push_back(centre);
    positions->push_back(new Position(m+1,height-1));

    this->color=new TableColor(0,255,255);
}
