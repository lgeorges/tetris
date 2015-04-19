#include "ground.h"
#include <iostream>


Ground::Ground()
{
    this->positions= new vector<Position*>();
}

void Ground::addPiece(Tetromino * tetromino)
{
    vector<Position*> * positions=tetromino->getPositions();
    vector<Position*>::iterator index;
    for(index=positions->begin(); index!=positions->end(); index++)
    {
        this->positions->push_back((*index));
    }
}

bool Ground::isTouching(Tetromino * tetromino)
{
    vector<Position*>::iterator indexGround;
    vector<Position*>::iterator indexPiece;
    vector<Position*> * positionsPiece= tetromino->getPositions();
    for(indexPiece=positionsPiece->begin(); indexPiece != positionsPiece->end(); indexPiece ++){

//        cout<<(*indexPiece)->getY()<<"\n";

        if((*indexPiece)->getY()==0)
            return true;
        for(indexGround=this->positions->begin(); indexGround!=this->positions->end(); indexGround++){
            if((*indexPiece)->getY()<=(*indexGround)->getY()+1)
                return true;
        }

    }
    return false;
}

vector<Position *> *Ground::getPositions() const
{
    return positions;
}
