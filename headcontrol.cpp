#include "headcontrol.h"

headControl::headControl(QWidget* parent)
{

    this->layer= new Layer2D();
    this->scene= new QGraphicsScene(this);
    this->setScene(this->scene);
    this->setBackgroundBrush(QBrush(QColor(78,78,127), Qt::SolidPattern));
    //Populate the scene
        for(int x = 0; x <= 200; x = x + 10) {
            for(int y = 0; y <= 200; y = y + 10) {
               this->scene->addLine(x+2, 2, x+2, y+2,QPen(QColor(179,179,179)));
                this->scene->addLine(2, y+2, x+2, y+2,QPen(QColor(179,179,179)));
            }
        }
    scene->addItem(layer);
        for(int x = 0; x <= 200; x = x + 10) {
            for(int y = 0; y <= 200; y = y + 10) {
                HeadControlLine* controlPoint = new HeadControlLine(QPoint(x,y));
                connect(controlPoint, SIGNAL(clicked(QPoint)), this, SIGNAL(clicked(QPoint)));
                connect(controlPoint, SIGNAL(isHovered(QPoint)), this, SIGNAL(hovered(QPoint)));

                scene->addItem(controlPoint);
                controlPoints.append(controlPoint);
            }
        }
       this->resetLayer();
}
//destructor
headControl::~headControl(){

}

//hiding points
void headControl::hidePoints(bool hide){
    for(int i=0; i<this->controlPoints.size(); i++){
        this->controlPoints.at(i)->setShow(!hide);
    }
    this->layer->setShow(hide);
}

void headControl::addPrintedPoint(QPointF point){
    layer->addPrintedPoint(point);
}

void headControl::resetLayer(){
    layer->resetLayer();
}
