#include "tetromino.h"
#include "iostream"

Tetromino::Tetromino():Block()
{
//    this->super();
}
TableColor *Tetromino::getColor() const
{
    return color;
}

void Tetromino::setColor(TableColor *value)
{
    color = value;
}

void Tetromino::setPositions(std::vector <Position *> *positions)
{
    this->positions=positions;
}

void Tetromino::down(){
    for(unsigned int i=0; i<this->positions->size(); i++){
        positions->at(i)->down();
    }
}

//std::vector <Position *>* Tetromino::getPositions(){
//    return positions;
//}
