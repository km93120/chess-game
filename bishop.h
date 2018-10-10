#ifndef BISHOP_H
#define BISHOP_H

#include <QPixmap>

#include "piece.h"

class Bishop : public Piece
{
public:
    Bishop(char,int,int);
    void virtual moveAcrossBoard()  ;
};

#endif // BISHOP_H
