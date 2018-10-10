#include "piece.h"

Piece::Piece(char c, int x, int y) : QGraphicsPixmapItem()
{
    this->color = c;
    this->x = x;
    this->y = y;


}


Piece::~Piece()
{

}

