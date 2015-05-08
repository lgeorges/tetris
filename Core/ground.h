#ifndef GROUND_H
#define GROUND_H

#include<list>
#include"Core/tetromino.h"
#include"Core/block.h"
#include"Core/position.h"


using namespace std;

class Ground
{

public:
    Ground();
    void addPiece(Tetromino *);
    bool isTouching(Tetromino *);
    void updateGround();
    list<Position *> *getPositions() const;

private:
    list<Position*> *positions;
    TableColor* color;

    bool isAFullLine(int numLine);
    void deleteLine(int numLine);

};

#endif // GROUND_H
