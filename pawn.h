#ifndef PAWN_H
#define PAWN_H

#include "piece.h"
class Pawn : public Piece
{
public:
    Pawn(char,int,int);
    void moveAcrossBoard();
};

#endif // PAWN_H
