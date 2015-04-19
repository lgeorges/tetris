#include "position.h"

Position::Position(int x, int y)
{
    this->x=x;
    this->y=y;
}
int Position::getX() const
{
    return x;
}

void Position::setX(int value)
{
    x = value;
}
int Position::getY() const
{
    return y;
}

void Position::setY(int value)
{
    y = value;
}

void Position::down(){
    if(y>0)
        y=y-1;
}

