#include "optionlist.h"

OptionList::OptionList(QWidget *parent) : QListWidget(parent)
{
    minWidth = 145;
    minHeight = 245;

    this->setMinimumSize(minWidth, minHeight);
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    setDragEnabled(true);
    setDropIndicatorShown(true);
    setSelectionMode(QAbstractItemView::SingleSelection);
    setDefaultDropAction(Qt::CopyAction);
    setViewMode(QListView::ListMode);

    for(const QString &color : {"Blue", "Red", "Green", "Yellow"})
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(color);
        item->setFlags(Qt::ItemIsEnabled| Qt::ItemIsSelectable| Qt::ItemIsDragEnabled);
        addItem(item);
    }
}

void OptionList::startDrag(Qt::DropActions supportedActions)
{
    if(supportedActions & Qt::CopyAction)
    {
        QList<QListWidgetItem *> m_items = selectedItems();
        if(m_items.isEmpty())
        {
            return;
        }
        QMimeData *data = mimeData(m_items);
        QDrag *drag = new QDrag(this);
        QPixmap pixmap(":/images/Plus_icon.png");
        drag->setPixmap(pixmap);
        drag->setMimeData(data);
        drag->setHotSpot(pixmap.rect().center());
        drag->exec(Qt::MoveAction);
    }
    else
    {
        QListWidget::startDrag(supportedActions);
    }
}
