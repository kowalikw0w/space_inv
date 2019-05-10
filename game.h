#ifndef GAME_H
#define GAME_H

#include "Player.h"

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Game: public QGraphicsView{
    Q_OBJECT

public:
    Game(QWidget * parent=NULL);

    QGraphicsScene * scene;
    Player * player;
    int sceneWidth;
    int sceneHeight;

public slots:
    void start();
};

#endif // GAME_H
