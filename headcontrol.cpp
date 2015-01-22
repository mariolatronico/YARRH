#include "headcontrol.h"

HeadControl::HeadControl(QWidget* parent) :
    QGraphicsView(parent)
{

    this->sizeX=20;
    this->sizeY=20;
    this->pointsHidden=true;
    populateScene(this->sizeX, this->sizeY);
}
//destructor
HeadControl::~HeadControl(){

}

void HeadControl::setSize(int x, int y){
    this->sizeX=x;
    this->sizeY=y;
    populateScene(x,y);
}

void HeadControl::populateScene(int x_size, int y_size){
    this->scene= new QGraphicsScene(this);
    this->setScene(this->scene);
    this->setBackgroundBrush(QBrush(QColor(78,78,127), Qt::SolidPattern));
    //Populate the scene
        for(int x = 0; x <= x_size*10; x = x + 10) {
            for(int y = 0; y <= y_size*10; y = y + 10) {
               this->scene->addLine(x+2, 2, x+2, y+2,QPen(QColor(179,179,179)));
                this->scene->addLine(2, y+2, x+2, y+2,QPen(QColor(179,179,179)));
            }
        }
    this->layer= new Layer2D(x_size, y_size);
    scene->addItem(layer);

        for(int x = 0; x <= x_size*10; x = x + 10) {
            for(int y = 0; y <= y_size*10; y = y + 10) {
                HeadControlLine* controlPoint = new HeadControlLine(QPoint(x,y));
                connect(controlPoint, SIGNAL(clicked(QPoint)), this, SIGNAL(clicked(QPoint)));
                connect(controlPoint, SIGNAL(isHovered(QPoint)), this, SIGNAL(hovered(QPoint)));

                scene->addItem(controlPoint);
                controlPoints.append(controlPoint);
            }
        }
       this->resetLayer();
       this->setMaximumSize(sizeHint());
}

QSize HeadControl::sizeHint() const{
    return QSize((this->sizeX*10)+20, (this->sizeY*10)+20);
}

//hiding points
void HeadControl::hidePoints(bool hide){
    this->pointsHidden=hide;
    for(int i=0; i<this->controlPoints.size(); i++){
        this->controlPoints.at(i)->setShow(!hide);
    }
    this->layer->setShow(hide);
}

void HeadControl::addPrintedPoint(QPointF point){
    layer->addPrintedPoint(point);
}

void HeadControl::resetLayer(){
    layer->resetLayer();
}

bool HeadControl::getPointsHidden(){
    return this->pointsHidden;
}
