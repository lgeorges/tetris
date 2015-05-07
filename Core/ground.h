#ifndef GROUND_H
#define GROUND_H

#include<vector>
#include"Core/tetromino.h"
#include"Core/block.h"
#include"Core/position.h"


using namespace std;

class Ground: public Block
{

public:
    Ground();
    void addPiece(Tetromino *);
    bool isTouching(Tetromino *);
private:
    bool isAFullLine();
    void deleteLine();


//    vector<Position *> *getPositions() const;
};

#endif // GROUND_H
