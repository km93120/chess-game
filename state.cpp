#include "state.h"

QVector<Piece *> State::getWhitePieces() const
{
    return whitePieces;
}

QVector<Piece *> State::getBlackPieces() const
{
    return blackPieces;
}

State::State()
{
    for(int i = 0 ;i < 8; i++)
    {
        whitePieces.append(new Pawn('w',i,6));
    }

    whitePieces.append(new Knight('w',1,7));
    whitePieces.append(new Knight('w',6,7));
    whitePieces.append(new Rook  ('w',0,7));
    whitePieces.append(new Rook  ('w',7,7));
    whitePieces.append(new Bishop('w',5,7));
    whitePieces.append(new Bishop('w',2,7));
    whitePieces.append(new Queen ('w',3,7));
    whitePieces.append(new King  ('w',4,7));

    for(int i = 0 ; i < 8; i++)
    {
      blackPieces.append(new Pawn('b',i,1));
    }

    blackPieces.append(new Knight('b',1,0));
    blackPieces.append(new Knight('b',6,0));
    blackPieces.append(new Rook  ('b',0,0));
    blackPieces.append(new Rook  ('b',7,0));
    blackPieces.append(new Bishop('b',5,0));
    blackPieces.append(new Bishop('b',2,0));
    blackPieces.append(new Queen ('b',3,0));
    blackPieces.append(new King  ('b',4,0));


    board = new Board();

}
