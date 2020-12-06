#include <iostream>
using namespace std;

class Rectangle
{
    private:
            double length;
            double width;
            double area; //NEVER use any member variable , which is dependent on others calculation.
    public:
            void setLength(double);
            void setWidth(double);
            void setArea(double,double);
            double getLength();
            double getWidth();
            double getArea(); 
};

void Rectangle::setLength(double l)
{
    length = l;
}
void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setArea(double l, double w)
{
    area = l * w;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getArea()
{
    return area;
}
int main()
{
    int length;
    int width;
    int area;
    Rectangle house;

    cout<<"Enter the length: ";
    cin >> length;
    house.setLength(length);
    cout<<"Enter the width: ";
    cin >> width;
    house.setWidth(width);
    house.setArea(length, width);
    cout << "The area is: "<<  house.getArea() << endl;

    //One or all of the member variable has changed value but get Area function has old value.
    cout<<"Enter the length: ";
    cin >> length;
    cout<<"Enter the width: ";
    cin >> width;
    cout << "The area is: "<<  house.getArea() << endl;

    return 0;
}