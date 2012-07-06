#include "graphwidget.h"

Path::Path(const QVector<double> &x, const QVector<double> &y)
{
        Path();
        int N = std::min(x.size(), y.size());
        for (int i=0; i<=N; i++)
        {
                v_data.append(QPointF(x[i], y[i]));
        }
}

Path::Path() : s_color(Qt::red)
{
}

GraphWidget::GraphWidget(QWidget *parent/*=NULL*/) : QWidget(parent), trans(0, 0), s_scale(defaultScale)
{
        setFocusPolicy(Qt::StrongFocus);
        t1 = new Path();
        t1->addPoint(QPointF(0,0));
        t2 = new Path();
        t2->addPoint(QPointF(0,0));
        t3 = new Path();
        t3->addPoint(QPointF(0,0));

}

bool GraphWidget::addPath(Path* p)
{
        if (!paths.contains(p))
        {
                paths.insert(p);
                return true;
        }
        else
                return false;
}

Path* GraphWidget::takePath(Path *p)
{
        paths.remove(p);
        return p;
}

void GraphWidget::clearPaths(bool del /* = no */)
{
        if (del)
                foreach (Path* p, paths)
                        delete p;
        paths.clear();
}

QSize GraphWidget::minimumSizeHint() const
 {
     return QSize(50, 50);
 }

 QSize GraphWidget::sizeHint() const
 {
     return QSize(80, 80);
 }

void GraphWidget::paintEvent(QPaintEvent *event)
{
        int i=0;
        QPainter p(this);

        p.fillRect(this->rect(), QColor(78,78,127));

        p.setRenderHint(QPainter::Antialiasing, true);
        //draw t1 //could make some loop but mehh...

        if (t1->size()>0){
            p.setPen(t1->color());
            for (i=1; i<t1->size(); i++)
            {
                    p.drawLine( xToCanvX((*t1)[i-1].x()), yToCanvY((*t1)[i-1].y()),
                                            xToCanvX((*t1)[i].x()), yToCanvY((*t1)[i].y()) );
            }
        }

        if (t2->size()>0){
            p.setPen(t2->color());
            for (i=1; i<t2->size(); i++)
            {
                    p.drawLine( xToCanvX((*t2)[i-1].x()), yToCanvY((*t2)[i-1].y()),
                                            xToCanvX((*t2)[i].x()), yToCanvY((*t2)[i].y()) );
            }
        }

        if (t3->size()>0){
            p.setPen(t3->color());
            for (i=1; i<t3->size(); i++)
            {
                    p.drawLine( xToCanvX((*t3)[i-1].x()), yToCanvY((*t3)[i-1].y()),
                                            xToCanvX((*t3)[i].x()), yToCanvY((*t3)[i].y()) );
            }
        }

        if(xToCanvX((*t2)[i-1].x())>this->width()){
            trans.setX(trans.x()-((double)width()/(double)120));
        }

        p.end();
}

void GraphWidget::mousePressEvent(QMouseEvent *event)
{
        prevPos = event->pos();
}

void GraphWidget::mouseMoveEvent(QMouseEvent *event)
{
        trans += event->pos() - prevPos;
        prevPos = event->pos();
        repaint();
}


void GraphWidget::addMeasurment(double temp1, double temp2, double temphb){
    t1->addPoint(QPointF(t1->size(),temp1));
    t2->addPoint(QPointF(t2->size(),temp2));
    t3->addPoint(QPointF(t3->size(),temphb));
    repaint();
}
