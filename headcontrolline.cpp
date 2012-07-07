#include "headcontrolline.h"

HeadControlLine::HeadControlLine(QPoint p1)
{
    this->p1=p1;
    this->hovered=false;
    this->setAcceptHoverEvents(true);
}

QRectF HeadControlLine::boundingRect() const{
    return QRectF(p1.x()-2,p1.y()-2,8,8);
}

void HeadControlLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(this->hovered){
       painter->setPen(QColor(200,100,100));
       painter->setBrush(QColor(200,100,100));
    }
    else{
         painter->setPen(QColor(179,179,179));
       painter->setBrush(QColor(179,179,179));
    }
    painter->drawRoundedRect(QRectF(p1,QSize(4,4)),2,2);
}

void HeadControlLine::mousePressEvent(QGraphicsSceneMouseEvent *event){
    emit clicked(p1);
}

void HeadControlLine::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    hovered=true;
    emit isHovered(p1);
    this->update(this->boundingRect());
}

void HeadControlLine::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    hovered=false;
    this->update(this->boundingRect());
}
