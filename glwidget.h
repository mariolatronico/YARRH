#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QDebug>
#include <math.h>
#include "gcodeobject.h"


//widget for 3d wiev of Gcode

class GlWidget : public QGLWidget
{
    Q_OBJECT
public:
    GlWidget(QWidget *parent = 0);
    ~GlWidget();
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void addObject(GCodeObject* object);
    void clearObjects();
    void setLayers(int layers);
    void setTableSize(int x, int y);
public slots:
    void showTravel(bool show);
    void setCurrentLayer(int layer);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent * event);
private:
    GLfloat eyeX,eyeY,eyeZ;
    GLfloat upX,upY,upZ;
    GLfloat theta,phi;
    GLfloat r;
    int sizeX, sizeY;
    float xMove;
    float yMove;
    float zoom;
    int layers;
    int currentLayer;
    bool show_travel;
    QPoint lastPos;
    QColor qtGreen;
    QColor qtPurple;
    void drawAxis();
    void drawGrid();
    QList<GCodeObject*> objects;
    QPointF screenToWorld(int x, int y);
};

#endif // GLWIDGET_H
