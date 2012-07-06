#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QDebug>
#include <math.h>
#include "gcodeobject.h"


//widget for 3d wiev

class GlWidget : public QGLWidget
{
    Q_OBJECT
public:
    GlWidget(QWidget *parent = 0);
    ~GlWidget();
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void addObject(GCodeObject* object);
    void setLayers(int layers);
public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void showTravel(bool show);
signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent * event);
private:
    int xRot;
    int yRot;
    int zRot;
    float xMove;
    float yMove;
    float zoom;
    int layers;
    bool show_travel;
    QPoint lastPos;
    QColor qtGreen;
    QColor qtPurple;
    void qNormalizeAngle(int &angle);
    void drawAxis();
    void drawGrid();
    QList<GCodeObject*> objects;
};

#endif // GLWIDGET_H
