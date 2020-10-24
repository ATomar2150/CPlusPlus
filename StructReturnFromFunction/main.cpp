#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14;

struct Circle
{
    double radius;
    double diameter;
    double area;
};
Circle getArea();
int main()
{
    Circle c;

    c = getArea(); 

    cout<<"The radius of the circle is: "<<c.radius<<endl;
    cout<<"The diameter of the circle is: "<<c.diameter<<endl;
    c.area = PI * c.radius * c.radius;
    cout<<"The area of the circle is: "<<c.area<<endl;
    
    return 0;
}

Circle getArea()
{
    Circle info;
    cout << "Enter the radius of the Circle."<<endl;
    cin >> info.radius;

    info.diameter = info.radius * 2;

    return info;
}