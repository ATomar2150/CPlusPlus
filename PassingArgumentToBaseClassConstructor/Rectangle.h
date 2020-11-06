#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
            double width;
            double length;
    public:
            //Constructor 1
            Rectangle()
            {
                width = 0.0;
                length = 0.0;
            }

            //Constructor 2
            Rectangle(double w, double len)
            {
                width = w;
                length = len;
            }

            //Accessor function
            double getWidth() const
            {
                return width;
            }
            
            double getLength() const
            {
                return length;
            }

            double getArea() const
            {
                return width * length;
            }

};

#endif