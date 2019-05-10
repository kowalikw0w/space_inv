#include "Game.h"
#include <QTimer>



#include <QFileInfo>
#include <iostream>

Game::Game(QWidget * parent){

    sceneWidth = 1024;
    sceneHeight = 768;

    // screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(sceneWidth, sceneHeight);

    // scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, sceneWidth, sceneHeight);
    setScene(scene);
}


void Game::start(){
    // czyszczenie
    scene->clear();

    // tworzy playera
    player = new Player();
    int playerWidth = 50;
    int playerHeight = 50;
    player->setRect(0,0, playerWidth, playerHeight);
    player->setPos(scene->width()/2 - player->rect().width()/2,
                   scene->height() - player->rect().height());
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

}
