#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "block.h"
#include "optionlist.h"
#include "myscene.h"

#include <QMainWindow>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

#include <QListWidget>
#include <QDrag>
#include <QDragEnterEvent>
#include <QMimeData>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsView *view;
};

#endif // MAINWINDOW_H
