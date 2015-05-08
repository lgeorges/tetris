#include "tetromino.h"
#include "iostream"

Tetromino::Tetromino()
{
    this->positions=new std::vector<Position *>();
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


void Tetromino::rotate()
{
//    std::cout<<"teromino: rotate \n";

    int diffx=0;
    int diffy=0;

    int newx [4];
    int newy [4];
    bool rotationPossible = true;

    Position* p;

    for(unsigned int i=0; i<this->positions->size(); i++){
        p=positions->at(i);
        diffx=p->getX()-centre->getX();
        diffy=p->getY()-centre->getY();

        newy[i]=centre->getY()-diffx;
        newx[i]=centre->getX()+diffy;

//        std::cout<<diffx<<" "<<diffy<<"\n";
//        std::cout<<newx[i]<<" "<<newy[i]<<"\n";

        if((newy[i]<0) || (newy[i]>H_TABLE-1) || (newx[i]<0) || (newx[i]>W_TABLE-1)){
             rotationPossible=false;
             break;
        }
    }

//    std::cout<<rotationPossible<<"\n";
    if(rotationPossible){
        for(unsigned int i=0; i<this->positions->size(); i++){
                 p=positions->at(i);
                 p->setY(newy[i]);
                 p->setX(newx[i]);
          }
    }
}

vector<Position *> *Tetromino::getPositions() const
{
    return positions;
}

