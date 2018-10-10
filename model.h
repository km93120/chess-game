#ifndef MODEL_H
#define MODEL_H

#include <QObject>

#include "state.h"


class Model
{
    State  * state;


public:
    Model();
    State *getState() const;
};

#endif // MODEL_H
