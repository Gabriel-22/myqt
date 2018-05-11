#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsItem>
#include <QGraphicsPathItem>
#include <QPen>
#include <QPainter>
#include <QFontMetrics>
#include <QtGui>

class Block : public QGraphicsPathItem
{
public:
    Block(QString color, QGraphicsItem *parent = NULL);

private:
    int width;
    int height;
};

#endif // BLOCK_H
