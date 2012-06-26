#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QDebug>
#include <math.h>
#include "gcodeobject.h"

class GlWidget : public QGLWidget
{
    Q_OBJECT
public:
    GlWidget(QWidget *parent = 0);
    ~GlWidget();
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void addObject(GCodeObject* object);
public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);

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
    QPoint lastPos;
    QColor qtGreen;
    QColor qtPurple;
    void qNormalizeAngle(int &angle);
    void drawAxis();
    void drawGrid();
    QList<GCodeObject*> objects;
};

#endif // GLWIDGET_H
