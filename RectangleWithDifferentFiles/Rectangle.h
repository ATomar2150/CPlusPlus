#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
            double length;
            double width;
    public:
            Rectangle(double,double);
            
            void setLength(double);
            void setWidth(double);

            double getLength() const
            {
                //inline function
                return length;
            };
            double getWidth() const
            {
                //inline function
                return width;
            };
            double getArea() const
            {
                //inline function
                return length * width;
            };
            
};

#endif