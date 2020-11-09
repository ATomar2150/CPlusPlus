#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{   
    // double width;
    // double length;

    // Rectangle myRectangle;

    // cout<<"Enter the rectangle's width: ";
    // cin >> width;

    // cout<<"Enter the rectangle's length: ";
    // cin >> length;

    // try
    // {
    //     myRectangle.setWidth(width);
    //     myRectangle.setLength(length);
    //     cout<<"The area of rectangle is "<<myRectangle.getArea() <<endl;
    // }
    // catch(Rectangle::NegativeWidth)
    // {
    //     cout<<"Error: A negative value is entered.\n";
    // }
    // catch(Rectangle::NegativeLength)
    // {
    //     cout<<"Error: A negative value is entered.\n";
    // }
    
    // cout<<"End of the program.\n";

    //SECOND VERSION

    double width;
    double length;
    bool tryAgain = true;

    Rectangle myRectangle;

    cout<<"Enter the rectangle width: ";
    cin >> width;

    while(tryAgain)
    {
        try
        {
            myRectangle.setWidth(width);
            tryAgain = false;
        }
        catch(Rectangle::NegativeWidth e)
        {
            cout<<e.getValue() <<" is a invalid value\n";
            cout<<"Please enter a non-negative value: ";
            cin >> width;
        }
    }

    cout<<"Enter the rectangle length: ";
    cin >> length;

    tryAgain = true; //Set again to true, earlier it was set to false (when upper try is executed.)

    while(tryAgain)
    {
        try
        {
            myRectangle.setLength(length);
            tryAgain = false;
        }
        catch(Rectangle::NegativeLength e)
        {
            cout<<e.getValue() <<" is a invalid value\n";
            cout<<"Please enter a non-negative value: ";
            cin >> length;
        }
    }

    cout<<"The Rectangle area is "<<myRectangle.getArea()<<endl;

    return 0;
}