#ifndef LAYER_H
#define LAYER_H

#include <QObject>
#include <QVector3D>

//just a simple class to hold info about single object layer
//maybee i will expant it, once o know what i need exactly
class Layer : public QObject
{
    Q_OBJECT
public:
    explicit Layer(QObject *parent = 0);
    QList<QVector3D> vertexes;
signals:

public slots:

};

#endif // LAYER_H
