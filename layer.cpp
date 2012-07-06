#include "layer.h"

Layer::Layer(int layer_num, QObject *parent) :
    QObject(parent)
{
    this->layer_num=layer_num;
}
