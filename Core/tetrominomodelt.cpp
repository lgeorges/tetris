#include "tetrominomodelt.h"

TetrominoModelT::TetrominoModelT()
{
    std::vector<Position *> *positions = this->getPositions();
    int height = H_TABLE;
    int width = W_TABLE;
    int m=width/2-1;

    positions->push_back(new Position(m-1,height-1));
    positions->push_back(new Position(m+1,height-1));
    positions->push_back(new Position(m,height-1));
    positions->push_back(new Position(m,height-2));

    this->setColor(new TableColor(0,0,255));
}
