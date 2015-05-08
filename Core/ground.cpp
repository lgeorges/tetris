#include "ground.h"
#include <iostream>


Ground::Ground()
{
    this->positions= new list<Position*>();
}

void Ground::addPiece(Tetromino * tetromino)
{
    vector<Position*> * positions=tetromino->getPositions();
    vector<Position*>::iterator index;
    for(index=positions->begin(); index!=positions->end(); index++)
    {
        this->positions->push_back((*index));
    }
    for(int i=H_TABLE-1;i>=0;i--)
        if(isAFullLine(i))
            deleteLine(i);
}

bool Ground::isTouching(Tetromino * tetromino)
{
    list<Position*>::iterator indexGround;
    vector<Position*>::iterator indexPiece;
    vector<Position*> * positionsPiece= tetromino->getPositions();

    for(indexPiece=positionsPiece->begin(); indexPiece != positionsPiece->end(); indexPiece ++){

        if((*indexPiece)->getY()==0)
            return true;
        for(indexGround=this->positions->begin(); indexGround!=this->positions->end(); indexGround++){
            if((*indexPiece)->getX()==(*indexGround)->getX())
                if((*indexPiece)->getY()<=(*indexGround)->getY()+1)
                    return true;
        }

    }
    return false;
}




void Ground::deleteLine(int numLine)
{
//    this->positions->remove_if(isOnLine);
    list<Position*>::iterator indexGround;
    Position* tab[W_TABLE];

    int count=0;
    for(indexGround=this->positions->begin(); indexGround!=this->positions->end(); indexGround++){
        if((*indexGround)->getY()==numLine){
            cout<<count<<"\n";
            tab[count]=(*indexGround);
            count++;
        }
        if((*indexGround)->getY()>numLine)
            (*indexGround)->down();
    }
    cout<<"end delete \n";
    for(int i=0;i<count;i++){
        this->positions->remove(tab[i]);
        delete tab[i];
    }
}

list<Position *> *Ground::getPositions() const
{
    return positions;
}

bool Ground::isAFullLine(int numLine)
{
    list<Position*>::iterator indexGround;

    int count=0;
    for(indexGround=this->positions->begin(); indexGround!=this->positions->end(); indexGround++){
        if((*indexGround)->getY()==numLine){
            count++;
        }
    }
    return count>=W_TABLE;
}
