#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Game.h"

#include <QDebug>

extern Game * game;

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A){
        // Move left
        if (pos().x() > 0)
            setPos(x()-20, y());
    }
    else if (event->key() == Qt::Key_D)
    {
        // Move right
        if (pos().x() + 100 < (game->sceneWidth))
            setPos(x()+20, y());
    }
    else if (event->key() == Qt::Key_Space)
    {
        // Create a bullet
    }
}
