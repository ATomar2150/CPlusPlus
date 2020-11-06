#include "Rectangle.h"
#ifndef CUBE_H
#define CUBE_H


class Cube : public Rectangle
{
    protected:
            double height;
            double volume;
    public:
            //Default Constructor
            Cube() : Rectangle()
            {
                height = 0.0;
                volume = 0.0;
            }

            //Constructor 2
            Cube(double w, double len, double h) : Rectangle(w, len)
            {
                height = h;
                volume = getArea() * h;
            }

            double getHeight() const
            {
                return height;
            }

            double getVolume() const
            {
                return volume;
            }

};

#endif