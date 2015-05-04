#ifndef POSITION_H
#define POSITION_H

#include "constantes.h"

class Position
{
public:
    Position(const int x=0, const int y=0);
    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);
    void down();
    void right();
    void left();

private :
    int x;
    int y;
};

#endif // POSITION_H
