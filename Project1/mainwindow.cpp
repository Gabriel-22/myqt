#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAcceptDrops(true);

    // Set scene
    MyScene *scene = new MyScene();

    // Set view
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setAcceptDrops(true);

    // Set the list widget in the group box
    OptionList *optionList = new OptionList();
    QVBoxLayout *verticalLayout = new QVBoxLayout;
    verticalLayout->addWidget(optionList);

    ui->blockListGroupBox->setLayout(verticalLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
