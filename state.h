#ifndef STATE_H
#define STATE_H

#include "piece.h"
#include "board.h"
#include "pawn.h"
#include "knight.h"
#include "rook.h"
#include "queen.h"
#include "bishop.h"
#include "king.h"


class State
{

    QVector <Piece *> whitePieces;
    QVector <Piece *> blackPieces;
    Board       *           board;

public:
    State();
    QVector<Piece *> getWhitePieces() const;
    QVector<Piece *> getBlackPieces() const;
};

#endif // STATE_H
