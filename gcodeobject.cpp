﻿#include "gcodeobject.h"
#include <QtOpenGL>
#ifdef Q_OS_MAC
#include <OpenGL/glu.h>
#else
#include <GL/glu.h>
#endif
//#include <GL/gl.h>

GCodeObject::GCodeObject(QObject *parent) :
    QObject(parent)
{
    currentLayer = -1;
}

//destructor
GCodeObject::~GCodeObject()
 {
 }

void GCodeObject::draw(float scale, int layers, bool show_travel, int current_layer){
    int resolution=1;
    int i;
    for(i=0; i<=layers-1; i++){
        layerList.at(i)->display(scale,i==layers-1, show_travel, current_layer);
    }
   //renderCylinder(0,0,1,1,1,1,1,0,false,0);
    //draw final layer

}


void GCodeObject::addVertex(qreal xpos, qreal ypos, qreal zpos, qreal travel, int layer){
    QVector4D vector(xpos,ypos,zpos,travel);

    if(this->layerList.size()==0){
       currentLayer=0;
       this->layerList.append(new Layer(layerList.size(),this));
    }

    if(layer!=currentLayer){
        currentLayer=layer;
        this->layerList.append(new Layer(layerList.size(),this));
    }
    this->layerList.last()->vertexes.append(vector);
}

//setting layer height
void GCodeObject::setLayerHeight(float layerHeight){
    this->layerHeight=layerHeight;
}


//get layer height
float GCodeObject::getLayerHeight(){
    return this->layerHeight;
}

void GCodeObject::render(float scale){
    for(int i=0; i<layerList.size(); i++){
        layerList.at(i)->render(scale);
    }
}

void GCodeObject::freeLists(){
    for(int i=0; i<layerList.size(); i++){
        layerList.at(i)->freeLists();
    }
}
