#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Déclaration bloc croix
    QPixmap * image_croix = new QPixmap (":/croix.jpg");
    QGraphicsPixmapItem * item_croix = new QGraphicsPixmapItem(* image_croix);
    QGraphicsScene * scene_croix = new QGraphicsScene();
    scene_croix -> addItem(item_croix);

    // Déclaration bloc rond
    QPixmap * image_rond = new QPixmap (":/rond.jpg");
    QGraphicsPixmapItem * item_rond = new QGraphicsPixmapItem(* image_rond);
    QGraphicsScene * scene_rond = new QGraphicsScene();
    scene_rond -> addItem(item_rond);

    // Declaration bloc blanc
    QPixmap * coul_blanc = new QPixmap ();
    QGraphicsPixmapItem * bloc_blanc = new QGraphicsPixmapItem(* coul_blanc);
    QGraphicsScene * scene_blanc = new QGraphicsScene();
    scene_blanc -> addItem(bloc_blanc);

    // Répétition des scène
    ui->b_1_1->setScene(scene_blanc);
    ui->b_1_2->setScene(scene_croix);
    ui->b_1_3->setScene(scene_rond);
}
MainWindow::~MainWindow()
{
    delete ui;
}
