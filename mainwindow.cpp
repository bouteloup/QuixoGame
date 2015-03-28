#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "piece.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene * ma_scene = new QGraphicsScene();

    piece * plateau[5][5];

    QPixmap * img_rond = new QPixmap(":/rond.jpg");
    QPixmap * img_croix = new QPixmap(":/croix.jpg");
    QPixmap * img_blanc = new QPixmap(":/blanc.jpg");

    for (int i = 0; i<5; i++)
      {
        for (int j = 0; j<5; j++)
          {
            plateau[i][j] = new piece();
            plateau[i][j]->setPixmap(* img_blanc);
            ma_scene->addItem(plateau[i][j]);
            plateau[i][j]->setPos(i*43,j*43);
            ui->ma_vue->setScene(ma_scene);
          }
      }
}
MainWindow::~MainWindow()
{
    delete ui;
}
