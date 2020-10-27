#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//CONSTRUCTOR
Rectangle::Rectangle(double w, double l)
{
    cout<<"Welcome to the constructor"<<endl;
    width = w;
    length = l;
}

void Rectangle::setLength(double l)
{
    //putting validation
    if(length > 0)
    {
        length = l;
    }
    else
    {
        cout<<"ERROR";
        exit(EXIT_FAILURE);
    }
    
    
}

void Rectangle::setWidth(double w)
{
    //putting validation
    if(length > 0)
    {
        width = w;
    }
    else
    {
        cout<<"ERROR";
        exit(EXIT_FAILURE);
    }
    
}

// double Rectangle::getLength() const
// {
//     return length;
// }

// double Rectangle::getWidth() const
// {
//     return width;
// }

// double Rectangle::getArea() const
// {
//     return length * width;
// }