#include "view.h"

View::View() : QGraphicsView()
{
    QScreen * screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,width,height);
    setScene(scene);




}
void View::setControl(Control * control)
{
    this->control = control;
}

void View::setBoard(State * state)
{
      QVector <Piece* > whitePieces = state->getWhitePieces();
      QVector <Piece* > blackPieces = state->getBlackPieces();

      /*std::vector<Piece *  >::const_iterator iterator;
      for (iterator = whitePieces.begin(); iterator != whitePieces.end(); ++iterator)
      {
          scene->addItem(whitePieces.at(iterator));
          scene->addItem(blackPieces.at(iterator));
      }*/

      for(int i = 0; i < whitePieces.size(); i++)
      {
          scene->addItem(whitePieces.at(i));
          scene->addItem(blackPieces.at(i));
      }




}
