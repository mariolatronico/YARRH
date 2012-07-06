#ifndef LAYER_H
#define LAYER_H

#include <QObject>
#include <QVector4D>

//just a simple class to hold info about single object layer
//maybee i will expant it, once o know what i need exactly
class Layer : public QObject
{
    Q_OBJECT
private:
    int layer_num;
public:
    explicit Layer(int layer_num, QObject *parent = 0);
    QList<QVector4D> vertexes;
    void draw(float scale);
    //generate lists
    void render();
signals:

public slots:

};

#endif // LAYER_H
