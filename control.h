#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include "view.h"
#include "model.h"

class View;

class Control : public QWidget
{
    Q_OBJECT

    View   * view;
    Model  * model;
public:
    explicit Control(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // CONTROL_H
