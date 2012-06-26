#include "gcodeobject.h"

GCodeObject::GCodeObject(QObject *parent)
{
}

//destructor
GCodeObject::~GCodeObject()
 {
 }

void GCodeObject::draw(float scale){
    int resolution=1;
    for(int i=0; i<this->vertexList.size()-resolution; i+=resolution){
        //glVertex3f(this->vertexList.at(i).x()*scale, this->vertexList.at(i).y()*scale, this->vertexList.at(i).z()*scale);
        renderCylinder(this->vertexList.at(i).x()*scale,this->vertexList.at(i).y()*scale,this->vertexList.at(i).z()*scale,this->vertexList.at(i+resolution).x()*scale,this->vertexList.at(i+resolution).y()*scale,this->vertexList.at(i+resolution).z()*scale,0.15*scale,5);
    }
}


void GCodeObject::addVertex(qreal xpos, qreal ypos, qreal zpos){
    QVector3D vector(xpos,ypos,zpos);
    this->vertexList.append(vector);
}

void GCodeObject::renderCylinder(float x1, float y1, float z1, float x2,float y2, float z2, float radius,int subdivisions)
{
    float vx = x2-x1;
    float vy = y2-y1;
    float vz = z2-z1;
    //handle the degenerate case with an approximation
    if(vz == 0)
    vz = .00000001;
    float v = sqrt( vx*vx + vy*vy + vz*vz );
    float ax = 57.2957795*acos( vz/v );
    if ( vz < 0.0 )
    ax = -ax;
    float rx = -vy*vz;
    float ry = vx*vz;

    GLUquadricObj *quadric=gluNewQuadric();
    glPushMatrix();
    glTranslatef( x1,y1,z1 );
    glRotatef(ax, rx, ry, 0.0);
    //draw the cylinder
    gluCylinder(quadric, radius, radius, v, 2, 1);
    glPopMatrix();

    gluDeleteQuadric(quadric);
}
