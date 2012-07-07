#ifndef HEADCONTROLLINE_H
#define HEADCONTROLLINE_H

#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QDebug>

class HeadControlLine : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    HeadControlLine(QPoint p1);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QPoint p1;
    bool hovered;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked(QPoint);
    void isHovered(QPoint);
public slots:
    
};

#endif // HEADCONTROLLINE_H
