#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>



class Piece : public QGraphicsPixmapItem
{
protected:

    char color;
    int x;
    int y;

public:
    void virtual moveAcrossBoard() = 0;
    ~Piece();
    Piece(char,int,int);


};

#endif // PIECE_H
