#ifndef BLOCK_H
#define BLOCK_H

#include"InterfaceOut/tablecolor.h"
#include"Core/position.h"
#include<vector>

using namespace std;
class Block
{
public:
    Block();
    vector<Position *> *getPositions() const;

protected:
    vector<Position*> *positions;
    TableColor* color;
};

#endif // BLOCK_H
