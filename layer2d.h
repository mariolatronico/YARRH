#ifndef LAYER2D_H
#define LAYER2D_H

#include <QGraphicsItem>
#include <QPainter>
#include <QDebug>

class Layer2D : public QObject, public QGraphicsItem
{
    Q_OBJECT
private:
    QList<QPointF*> printedPoints;
    int sizeX;
    int sizeY;
public:
    explicit Layer2D(int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool showLayer;
signals:

public slots:
    void addPrintedPoint(QPointF);
    void resetLayer();
    void setShow(bool);
};

#endif // LAYER2D_H
