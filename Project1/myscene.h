#ifndef MYSCENE_H
#define MYSCENE_H

#include "block.h"
#include "optionlist.h"

#include <QGraphicsScene>
#include <QGraphicsSceneDragDropEvent>
#include <QMimeData>
#include <QPointF>

class MyScene : public QGraphicsScene
{
public:
    MyScene();

protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event);
    void dragMoveEvent(QGraphicsSceneDragDropEvent *event);
    void dropEvent(QGraphicsSceneDragDropEvent *event);
};

#endif // MYSCENE_H
