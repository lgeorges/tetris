#ifndef GROUND_H
#define GROUND_H

#include<vector>
#include"Core/tetromino.h"
//#include<position.h>


using namespace std;

class Ground
{
private:
    vector<Position*> *positions;

public:
    Ground();
    void addPiece(Tetromino *);
    bool isTouching(Tetromino *);

    vector<Position *> *getPositions() const;
};

#endif // GROUND_H
