#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    ri = new QGraphicsRectItem(0, 0, 100, 100);
    ri->setPos(-50, -50);

    ri->setFlag(QGraphicsItem::ItemIsSelectable);
    ri->setFlag(QGraphicsItem::ItemIsMovable);

    QGraphicsRectItem *handle = new QGraphicsRectItem(ri);

    scene->addItem(ri);

    scene->addLine(0, -500, 0, 500);
    scene->addLine(-500, 0, 500, 0);

    connect(ui->pushButtonResize, SIGNAL(clicked(bool)), this, SLOT(resizeButtonClicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeButtonClicked()
{
    ri->setPos(50, 50);
}
