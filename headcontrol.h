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
private:
    QGraphicsScene* scene;
    QList<HeadControlLine*> controlPoints;
    Layer2D* layer;
signals:
    void clicked(QPoint);
    void hovered(QPoint);
public slots:
    void hidePoints(bool);
    void addPrintedPoint(QPointF);
    void resetLayer();
};

#endif // HEADCONTROL_H
