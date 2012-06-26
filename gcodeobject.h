#ifndef GCODEOBJECT_H
#define GCODEOBJECT_H


#include <QVector3D>
#include <QObject>
#include <QtOpenGL>

class GCodeObject : public QObject
{
    Q_OBJECT
public:
    GCodeObject(QObject *parent);
    ~GCodeObject();
    void addVertex(qreal xpos, qreal ypos, qreal zpos);
    void draw(float scale);
private:
    QList<QVector3D> vertexList;
    QMap<int, QVector4D> cylinderList;
    void renderCylinder(float x1, float y1, float z1, float x2,float y2, float z2, float radius,int subdivisions);
};

#endif // GCODEOBJECT_H
