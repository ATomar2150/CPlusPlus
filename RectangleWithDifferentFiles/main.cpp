#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle box(0.0,2.0);
    double lengthRect;
    double widthRect;

    cout<<"Please enter the length of Rectangle.\n";
    cin >> lengthRect;

    cout<<"Please enter the width of Rectangle.\n";
    cin >> widthRect;

    box.setLength(lengthRect);
    box.setWidth(widthRect);

    cout<<"The length of the rectangle is: "<<box.getLength()<<endl;
    cout<<"The width of the rectangle is: "<<box.getWidth()<<endl;
    cout<<"The Area of the rectangle is: "<<box.getArea()<<endl;
    
    return 0;
}