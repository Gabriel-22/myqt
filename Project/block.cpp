#include "block.h"

Block::Block(QString color, QGraphicsItem *parent) : QGraphicsPathItem(parent)
{
    QPainterPath p;
    p.addRoundedRect(0, 0, 150, 50, 2, 2);
    setPath(p);
    setPen(QPen(Qt::black));
    if (color == "Blue")
    {
        setBrush(Qt::blue);
    }
    else if (color == "Red")
    {
        setBrush(Qt::red);
    }
    else if (color == "Green")
    {
        setBrush(Qt::green);
    }
    else if (color == "Yellow")
    {
        setBrush(Qt::yellow);
    }
    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);
    width = 20;
    height = 5;
}

