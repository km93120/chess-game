#include "king.h"

King::King(char c , int x, int y) : Piece(color,x,y)
{
    if(c == 'w')
    {
      setPixmap(QPixmap(":/whiteKing.png").scaled(50,50));
    }

    else if(c == 'b')
    {
      setPixmap(QPixmap(":/blackKing.png").scaled(50,50));
    }

    this->x = x;
    this->y = y; setPos(700 + x*50,300 + y*50);
}
