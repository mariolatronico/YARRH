#include "headcontrol.h"

headControl::headControl(QWidget* parent)
{

    this->scene= new QGraphicsScene(this);
    this->setScene(this->scene);
    this->setBackgroundBrush(QBrush(QColor(78,78,127), Qt::SolidPattern));
    //Populate the scene
        for(int x = 0; x <= 200; x = x + 10) {
            for(int y = 0; y <= 200; y = y + 10) {
               this->scene->addLine(x+2, 0, x+2, y,QPen(QColor(179,179,179)));
                this->scene->addLine(0, y+2, x, y+2,QPen(QColor(179,179,179)));
            }
        }
        for(int x = 0; x <= 200; x = x + 10) {
            for(int y = 0; y <= 200; y = y + 10) {
                HeadControlLine* controlPoint = new HeadControlLine(QPoint(x,y));
                connect(controlPoint, SIGNAL(clicked(QPoint)), this, SIGNAL(clicked(QPoint)));
                scene->addItem(controlPoint);
            }
        }
}
//destructor
headControl::~headControl(){

}
