#ifndef KNIGHT_H
#define KNIGHT_H
#include "piece.h"

class Knight : public Piece
{
public:
    Knight(char,int,int);
    void moveAcrossBoard();

};

#endif // KNIGHT_H
