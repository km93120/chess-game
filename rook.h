#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook : public Piece
{
public:
    Rook(char,int,int);
    void moveAcrossBoard(){};
};

#endif // ROOK_H
