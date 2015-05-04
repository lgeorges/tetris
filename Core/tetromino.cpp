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

void Tetromino::right()
{
    if(moveRightPossible()){
        for(unsigned int i=0; i<this->positions->size(); i++){
            positions->at(i)->right();
        }
    }
}

void Tetromino::left()
{
    if(moveLeftPossible()){
        for(unsigned int i=0; i<this->positions->size(); i++){
            positions->at(i)->left();
        }
    }
}


bool Tetromino::moveRightPossible()
{
    for(unsigned int i=0; i<this->positions->size(); i++){
        if(positions->at(i)->getX()==W_TABLE-1)
            return false;
    }
    return true;
}

bool Tetromino::moveLeftPossible()
{
    for(unsigned int i=0; i<this->positions->size(); i++){
        if(positions->at(i)->getX()==0)
            return false;
    }
    return true;
}

