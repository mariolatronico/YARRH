#ifndef HEADCONTROLLINE_H
#define HEADCONTROLLINE_H

#include <QGraphicsObject>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QDebug>

class HeadControlLine : public QGraphicsObject
{
    Q_OBJECT
public:
    HeadControlLine(QPoint p1);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QPoint p1;
    bool hovered;
    bool showPoint;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked(QPoint);
    void isHovered(QPoint);
public slots:
    void setShow(bool);
};

#endif // HEADCONTROLLINE_H
