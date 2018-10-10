#include "board.h"

Board::Board() : QGraphicsPixmapItem()
{
    setPixmap(QPixmap(":/board.png").scaled(400,400));

}
