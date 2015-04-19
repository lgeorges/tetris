#ifndef TETROMINO_H
#define TETROMINO_H

#include"position.h"
#include<vector>
#include"tablecolor.h"

class Tetromino
{
public:
    Tetromino();


    TableColor *getColor() const;
    std::vector <Position *> * getPositions();
    void down();

protected:
    void setColor(TableColor *value);
    void setPositions(std::vector <Position *> *positions);

private:
    std::vector <Position *> *positions;
    TableColor* color;
};

#endif // TETROMINO_H
