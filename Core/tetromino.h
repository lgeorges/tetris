#ifndef TETROMINO_H
#define TETROMINO_H

#include"Core/position.h"
#include"Core/block.h"
#include"constantes.h"
#include<vector>
#include"InterfaceOut/tablecolor.h"

class Tetromino: public Block
{
public:
    Tetromino();

    TableColor *getColor() const;
//    std::vector <Position *> * getPositions();
    void down();
    void right();
    void left();
    virtual void rotate() = 0;

protected:
    void setColor(TableColor *value);
    void setPositions(std::vector <Position *> *positions);
//    std::vector <Position *> *positions;
//    TableColor* color;

private:
    bool moveRightPossible();
    bool moveLeftPossible();
};

#endif // TETROMINO_H
