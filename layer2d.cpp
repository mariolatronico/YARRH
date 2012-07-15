#include "layer2d.h"

Layer2D::Layer2D()
{
}


void Layer2D::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(this->showLayer){
        painter->setPen(QColor(255,165,0));
        painter->setBrush(QColor(255,165,0));
        for(int i=0; i<this->printedPoints.size()-1; i++){
            painter->drawLine(this->printedPoints.at(i)->toPoint(),this->printedPoints.at(i+1)->toPoint());
        }
    }
}

void Layer2D::addPrintedPoint(QPointF point){
    QPointF *temp = new QPointF(2,2);
    temp->setX(point.x()+2);
    temp->setY(202-(point.y()));
    this->printedPoints.append(temp);
    this->update(boundingRect());
}

QRectF Layer2D::boundingRect() const{
    return QRectF(0,0,204,204);
}

void Layer2D::resetLayer(){
    this->printedPoints.clear();
    this->update(boundingRect());
}


void Layer2D::setShow(bool show){
    this->showLayer=show;
    this->update(boundingRect());
}
