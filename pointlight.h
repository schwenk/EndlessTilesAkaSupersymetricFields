#ifndef POINTLIGHT_H
#define POINTLIGHT_H

#include "Floatbits.h"
#include <QVector>

class PointLight
{
public:
    PointLight();
    PointLight(float x, float y, float emission, unsigned int color);
    unsigned int getAttributeAsPixel(int i);
    static int getSize();
    void setPos(float x, float y);
    float getPosX();
    float getPosY();

    float velX,velY;

private:
    QVector<unsigned int> mData;
};

#endif // POINTLIGHT_H
