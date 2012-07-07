#ifndef HEADCONTROL_H
#define HEADCONTROL_H

#include <QGraphicsView>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QDebug>
#include "headcontrolline.h"

class headControl : public QGraphicsView
{
    Q_OBJECT
public:
    headControl(QWidget* parent = NULL);
    ~headControl();
private:
    QGraphicsScene* scene;
signals:
    void clicked(QPoint);
    void hovered(QPoint);
};

#endif // HEADCONTROL_H
