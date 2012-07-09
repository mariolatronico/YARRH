#include "gcodeobject.h"
#include <QtOpenGL>
#include <GL/glu.h>
#include <GL/gl.h>

GCodeObject::GCodeObject(QObject *parent)
{
    currentLayer = -1;
}

//destructor
GCodeObject::~GCodeObject()
 {
 }

void GCodeObject::draw(float scale, int layers, bool show_travel){
    int resolution=1;
    int i,j;
    for(i=0; i<=layers-1; i++){
        for(j=0; j<layerList.at(i)->vertexes.size()-resolution; j+=resolution){
            if(layerList.at(i)->vertexes.at(j+resolution).w()==1 && show_travel==false){
                continue;
            }
            renderCylinder(layerList.at(i)->vertexes.at(j).x()*scale,layerList.at(i)->vertexes.at(j).y()*scale,layerList.at(i)->vertexes.at(j).z()*scale,
                           layerList.at(i)->vertexes.at(j+resolution).x()*scale,layerList.at(i)->vertexes.at(j+resolution).y()*scale,layerList.at(i)->vertexes.at(j+resolution).z()*scale,
                           0.3*scale,5,i==layers-1, layerList.at(i)->vertexes.at(j+resolution).w());
        }
    }
    //draw final layer

}


void GCodeObject::addVertex(qreal xpos, qreal ypos, qreal zpos, qreal travel, int layer){
    QVector4D vector(xpos,ypos,zpos,travel);

    if(this->layerList.size()==0){
       currentLayer=0;
       this->layerList.append(new Layer(layer,this));
    }

    if(layer!=currentLayer){
        currentLayer=layer;
        this->layerList.append(new Layer(layer,this));
    }
    this->layerList.last()->vertexes.append(vector);
}

void GCodeObject::renderCylinder(qreal x1, qreal y1, qreal z1, qreal x2,qreal y2, qreal z2, qreal radius,int subdivisions, bool lastlayer, qreal travel)
{
    GLfloat   gray[4]={0.9,0.9,0.9,1.0};
    GLfloat   red[4]={1.0,0.0,0.0,1.0};
    GLfloat   green[4]={0.0,1.0,0.0,1.0};
    GLfloat fCurrentColor[4];
    qreal vx = x2-x1;
    qreal vy = y2-y1;
    qreal vz = .00000001;
    qreal v = sqrt( vx*vx + vy*vy + vz*vz );
    qreal rx = -vy*vz;
    qreal ry = vx*vz;
    // Get the current color
    glGetFloatv(GL_CURRENT_COLOR, fCurrentColor);
    qDebug() << vx << vy << vz;
    qDebug() << rx <<ry;
//    GLUquadricObj *quadric=gluNewQuadric();
    glPushMatrix();
    glTranslatef( x1,y1,z1 );
    glRotatef(90.0, rx, ry, 0.0);
//    //draw the cylinder
//    if(lastlayer)
//        glColor4fv(red);
//    else
//        glColor4fv(gray);
//    gluCylinder(quadric, radius, radius, v, 2, 1);


//    // Restore the current color
        if(lastlayer)
            glColor4fv(red);
        else
            glColor4fv(gray);

        if(travel==1)
            glColor4fv(green);

        glBegin(GL_TRIANGLE_STRIP);         // Rysujemy kwadraty
                //first rtiangle
                glNormal3f( 0.0f, -1.0f, 0.0f);
                glVertex3f(0, 0, v);        // V0
                glVertex3f( 0, 0, 0);  // V1
                glVertex3f( radius, 0, v);  // V2
                //second triangle
               glNormal3f( 0.0f, -1.0f, 0.0f);
               glVertex3f(radius,0, 0);         // V3
                //third triangle
                glNormal3f( 1.0f, 0.0f, 0.0f);
                glVertex3f(radius, radius, v);         // V4

                glNormal3f( 1.0f, 0.0f, 0.0f);
                glVertex3f( radius, radius, 0);         // V5

                glNormal3f( 0.0f, 1.0f, 0.0f);
                glVertex3f(0, radius, v);         // V6

               glNormal3f( 0.0f, 1.0f, 0.0f);
                glVertex3f( 0, radius, 0);         // V7

                glNormal3f( -1.0f, 0.0f, 0.0f);
                glVertex3f( 0, 0, v);  // V0
                glNormal3f( -1.0f, 0.0f, 0.0f);
                glVertex3f(0, 0, 0);        // V1
        glEnd();
    glPopMatrix();
    glColor4fv(fCurrentColor);

    //gluDeleteQuadric(quadric);
}

//setting layer height
void GCodeObject::setLayerHeight(float layerHeight){
    this->layerHeight=layerHeight;
}


//get layer height
float GCodeObject::getLayerHeight(){
    return this->layerHeight;
}
