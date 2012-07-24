#ifndef HEADCONTROL_H
#define HEADCONTROL_H

#include <QGraphicsView>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QDebug>
#include "headcontrolline.h"
#include "layer2d.h"

class HeadControl : public QGraphicsView
{
    Q_OBJECT
public:
    HeadControl(QWidget* parent = NULL);
    ~HeadControl();
    QSize sizeHint() const;
    void setSize(int x_size, int y_size);
    bool getPointsHidden();
private:
    bool pointsHidden;
    int sizeX, sizeY;
    QGraphicsScene* scene;
    QList<HeadControlLine*> controlPoints;
    Layer2D* layer;
    void populateScene(int x, int y);
signals:
    void clicked(QPoint);
    void hovered(QPoint);
public slots:
    void hidePoints(bool);
    void addPrintedPoint(QPointF);
    void resetLayer();
};

#endif // HEADCONTROL_H
