#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QtGui/QWidget>
#include <QtGui/QPainter>
#include <QtCore/QVector>
#include <QtCore/QPointF>
#include <QtCore/QSet>
#include <QtGui/QMouseEvent>
#include <QtCore/QTime>
#include <QtCore/QDebug>
#include <cmath>

class Path {
                QVector < QPointF > v_data;
                QColor s_color;
                double s_target;
        public:
                inline QColor color() { return s_color; }
                inline double target() {return s_target; }
                inline void setColor(QColor clr) { s_color = clr; }
                inline void setTarget(double trg) { s_target = trg; }
                inline QVector < QPointF > data() { return v_data; }
                inline QPointF& operator[] (int i) { return v_data[i]; }
                inline void addPoint(const QPointF& pnt) { v_data.append(pnt); }
                inline int size() { return v_data.size(); }
                void resize(int size) { v_data.resize(size); }
                Path(const QVector<double> &x, const QVector<double> &y);
                Path();
};


class GraphWidget : public QWidget
{
private:
        QSet <Path*> paths;
        QPointF trans;
        double s_scale;
        QPoint prevPos;
        Path *t1;
        Path *t2;
        Path *t3;
        qint64 createTime;
protected:
        virtual void paintEvent(QPaintEvent*);
        virtual void mouseMoveEvent ( QMouseEvent *);
        virtual void mousePressEvent ( QMouseEvent *);
public:
        static const int defaultScale = 1;
        static const int maxScale = 100;
        static const int minScale = 3;

        inline int xToCanvX(double a_x) { return a_x*((double)width()/(double)120) + trans.x(); }
        inline int yToCanvY(double a_y) { return -a_y*((double)height()/(double)300) + height(); }
        inline void setScale(double s) { if (s>minScale && s<maxScale) s_scale = s; }
        inline double scale() { return s_scale; }
        bool addPath(Path* p);
        Path* takePath(Path* p);
        void clearPaths(bool del = false);
        inline int pathCount() { return paths.size(); }
        GraphWidget(QWidget *parent=NULL);
        QSize minimumSizeHint() const;
        QSize sizeHint() const;
        void addMeasurment(double, double, double, qint64);
        void setTargets(double, double, double);
};

#endif // GRAPHWIDGET_H
