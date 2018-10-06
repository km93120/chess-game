#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "piece.h"


class Model
{
    QVector <Piece *> whitePieces;
    QVector <Piece *> blackPieces;


public:
    Model();
};

#endif // MODEL_H
