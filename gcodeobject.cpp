#include "gcodeobject.h"

GCodeObject::GCodeObject(QObject *parent)
{
    currentLayer = -1;
}

//destructor
GCodeObject::~GCodeObject()
 {
 }

void GCodeObject::draw(float scale, int layers){
    int resolution=1;
    int i,j;
    for(i=0; i<=layers-1; i++){
        for(j=0; j<layerList.at(i)->vertexes.size()-resolution; j+=resolution){
            renderCylinder(layerList.at(i)->vertexes.at(j).x()*scale,layerList.at(i)->vertexes.at(j).y()*scale,layerList.at(i)->vertexes.at(j).z()*scale,
                           layerList.at(i)->vertexes.at(j+resolution).x()*scale,layerList.at(i)->vertexes.at(j+resolution).y()*scale,layerList.at(i)->vertexes.at(j+resolution).z()*scale,
                           0.3/2*scale,5,i==layers-1);
        }
    }
    //draw final layer

}


void GCodeObject::addVertex(qreal xpos, qreal ypos, qreal zpos, int layer){
    QVector3D vector(xpos,ypos,zpos);
    if(layer!=currentLayer){
        currentLayer=layer;
        this->layerList.append(new Layer(this));
    }
    this->layerList.at(layer-1)->vertexes.append(vector);
}

void GCodeObject::renderCylinder(float x1, float y1, float z1, float x2,float y2, float z2, float radius,int subdivisions, bool lastlayer)
{
    GLfloat   gray[4]={0.9,0.9,0.9,1.0};
    GLfloat   red[4]={1.0,0.0,0.0,1.0};
    GLfloat fCurrentColor[4];
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

    // Get the current color
    glGetFloatv(GL_CURRENT_COLOR, fCurrentColor);

    GLUquadricObj *quadric=gluNewQuadric();
    glPushMatrix();
    glTranslatef( x1,y1,z1 );
    glRotatef(ax, rx, ry, 0.0);
    //draw the cylinder
    if(lastlayer)
        glColor4fv(red);
    else
        glColor4fv(gray);
    //gluCylinder(quadric, radius, radius, v, 2, 1);
    glPopMatrix();

    // Restore the current color
    glColor4fv(fCurrentColor);

    gluDeleteQuadric(quadric);
}

//setting layer height
void GCodeObject::setLayerHeight(float layerHeight){
    this->layerHeight=layerHeight;
}


//get layer height
float GCodeObject::getLayerHeight(){
    return this->layerHeight;
}
