#include "tetrominomodelsinv.h"

TetrominoModelSInv::TetrominoModelSInv()
{
    int height = H_TABLE;
    int width = W_TABLE;
    int m=width/2-1;
    this->positions->push_back(new Position(m-1,height-1));
    positions->push_back(new Position(m,height-1));
    centre=new Position(m,height-2);
    positions->push_back(centre);
    positions->push_back(new Position(m+1,height-2));

    this->color=new TableColor(0,128,255);
}
