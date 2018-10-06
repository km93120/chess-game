#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsItem>


class Piece : public QGraphicsItem
{
protected:

    char color;
    int x;
    int y;

public:
    void virtual moveAcrossBoard()  = 0 ;
    ~Piece();
    Piece();


};

#endif // PIECE_H
