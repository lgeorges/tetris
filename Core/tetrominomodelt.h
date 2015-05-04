#ifndef TETROMINOMODELT_H
#define TETROMINOMODELT_H

#include"Core/tetromino.h"
#include"constantes.h"


class TetrominoModelT : public Tetromino
{
public:
    TetrominoModelT();
    void rotate();
};

#endif // TETROMINOMODELT_H
