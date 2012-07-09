#ifndef GCODEOBJECT_H
#define GCODEOBJECT_H


#include <QVector3D>
#include <QObject>
#include <QtOpenGL>
#include "layer.h"

//this class is for storing 3d pbject parset from raw gcode

class GCodeObject : public QObject
{
    Q_OBJECT
public:
    GCodeObject(QObject *parent);
    ~GCodeObject();
    void addVertex(qreal xpos, qreal ypos, qreal zpos, qreal travel, int layer);
    void draw(float scale, int layers, bool show_travel);
    void setLayerHeight(float layerHeight);
    float getLayerHeight();
private:
    QList<Layer*> layerList;
    QMap<int, QVector4D> cylinderList;
    void renderCylinder(qreal x1, qreal y1, qreal z1, qreal x2,qreal y2, qreal z2, qreal radius,int subdivisions, bool lastlayer, qreal travel);
    float layerHeight;
    int currentLayer;
};

#endif // GCODEOBJECT_H
