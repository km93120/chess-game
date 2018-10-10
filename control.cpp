#include "control.h"

Control::Control(QWidget *parent) : QWidget(parent)
{

}
void Control::setParams(Model * model, View * view)
{
    this->model = model;
    this->view = view;

    view->setControl(this);
    view->setBoard(model->getState());
    //view->setConnection();



}
