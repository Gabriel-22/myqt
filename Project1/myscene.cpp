#include "myscene.h"

MyScene::MyScene()
{
    setBackgroundBrush(Qt::lightGray);
}

void MyScene::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
    if(event->mimeData()->hasFormat("application/x-qabstractitemmodeldatalist"))
    event->setAccepted(true);
}

void MyScene::dragMoveEvent(QGraphicsSceneDragDropEvent *event)
{
    if(event->mimeData()->hasFormat("application/x-qabstractitemmodeldatalist"))
    event->setAccepted(true);
}

void MyScene::dropEvent(QGraphicsSceneDragDropEvent *event)
{
    QByteArray encoded = event->mimeData()->data("application/x-qabstractitemmodeldatalist");
    QDataStream stream(&encoded, QIODevice::ReadOnly);

    QStringList colors;

    while (!stream.atEnd())
    {
        int row, col;
        QMap<int,  QVariant> roleDataMap;
        stream >> row >> col >> roleDataMap;
        colors << roleDataMap[Qt::DisplayRole].toString();
    }

    int xPos = -75;
    int yPos = -25;
    QPointF posView = event->scenePos() + QPointF(xPos, yPos);

    for(const QString & color: colors)
    {
        Block *newBlock = new Block(color);
        newBlock->setPos(posView);
        addItem(newBlock);
    }
}
