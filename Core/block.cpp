#include "block.h"
#include<iostream>

Block::Block()
{
    this->positions=new std::vector<Position *>();
}
vector<Position *> *Block::getPositions() const
{
    return positions;
}


