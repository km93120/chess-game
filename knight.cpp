#include "knight.h"


Knight::Knight(char c , int x, int y) : Piece(color,x,y)
{
    if(c == 'w')
    {
      setPixmap(QPixmap(":/whiteKnight.png").scaled(50,50));
    }

    else if(c == 'b')
    {
      setPixmap(QPixmap(":/blackKnight.png").scaled(50,50));
    }

    this->x = x;
    this->y = y; setPos(700 + x*50,300 + y*50);
}

void Knight::moveAcrossBoard()
{

}
