#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class piece : public QGraphicsPixmapItem
{
public:
    piece();
    enum COULEUR_PIECE {PIECE_NEUTRE=0, PIECE_ROND, PIECE_CROIX};
    explicit piece(COULEUR_PIECE _couleur, int X, int Y);
    int couleur;
    int x;
    int y;
    bool estJouable();

//protected:
//void mousePressEvent(QGraphicsSceneMouseEvent * event);
//void mouseMoveEvent(QGraphicsSceneMouseEvent * event);

};

#endif // PIECE_H
