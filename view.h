#ifndef VIEW_H
#define VIEW_H
#include "control.h"

#include <QGraphicsScene>
#include <QGraphicsView>


class Control;
class View : public QGraphicsView
{

    Control *           control;
    QGraphicsScene *    scene;

public:
    View();
};

#endif // VIEW_H
