#include <wall.h>

Wall::Wall(qreal x1, qreal y1=0, qreal x2=0, qreal y2=0, qreal thickness=0, int wallType=0)
{
    this-> conductivity = conductivity; this->permittivity = permittivity; this->thickness = thickness;
    this->setLine(x1,y1,x2,y2);
    switch (wallType) {

    case 0 : this->outlinePen.setColor(QColor(0,0,0,255)); // represent concrete, mainly external walls
             this->outlinePen.setWidth(3);
             this->permittivity = 5; this->conductivity = 0.014;
             break;

    case 1 : this->outlinePen.setColor(Qt::cyan); //partition wall
             this->outlinePen.setWidth(3);
             this->permittivity = 2.25; this->conductivity = 0.04;
             break;

    case 2 : this->outlinePen.setColor(QColor(139,0,0,255)); //bricks wall
             this->outlinePen.setWidth(3);
             this->permittivity = 4.6; this->conductivity = 0.02;
             break;
    }
}
