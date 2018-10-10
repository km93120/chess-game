#ifndef VIEW_H
#define VIEW_H
#include "control.h"

#include <QScreen>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include "state.h"

class Control;

class View : public QGraphicsView
{

    Control *           control;
    QGraphicsScene *    scene;

public:
    View();
    void setControl(Control * control);
    void setBoard(State * state );

  //  void setConnection(){};
};

#endif // VIEW_H
