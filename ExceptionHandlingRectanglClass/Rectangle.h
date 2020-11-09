#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
            double width;
            double length;
    public:

             //Exception class
            class NegativeWidth
            {
                private:
                        double value;
                public:
                        NegativeWidth(double val)
                        {
                            value= val;
                        }
                        double getValue() const
                        {
                            return value;
                        }
            };

            //Exception class
            class NegativeLength
            {
                private:
                        double value;
                public:
                        NegativeLength(double val)
                        {
                            value= val;
                        }
                        double getValue() const
                        {
                            return value;
                        }
            };


            //Default constructor
            Rectangle()
            {
                width = 0.0;
                length = 0.0;
            }

            //Mutator function
            void setWidth(double);
            void setLength(double);

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