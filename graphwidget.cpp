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
        foreach (Path *path, paths)
        {
                if (path->size()<=0)
                        break;

                p.setPen(path->color());
                for (i=1; i<path->size(); i++)
                {
                        p.drawLine( xToCanvX((*path)[i-1].x()), yToCanvY((*path)[i-1].y()),
                                                xToCanvX((*path)[i].x()), yToCanvY((*path)[i].y()) );
                }
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
