#ifndef OPTIONLIST_H
#define OPTIONLIST_H

#include "block.h"

#include <QListWidget>
#include <QMimeData>
#include <QDrag>

class OptionList : public QListWidget
{
public:
    OptionList(QWidget *parent = nullptr);

protected:
    //void startDrag(Qt::DropActions supportedActions);

private:
    int minWidth;
    int minHeight;
};

#endif // OPTIONLIST_H
