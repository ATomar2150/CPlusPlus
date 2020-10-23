#include <iostream>
#include <string>
using namespace std;

struct Circle
{
    double radius;
    double PI;
    double area;
    double diameter;
};

int main()
{
    Circle cir;

    cout<<"Please enter radius: ";
    cin>> cir.radius;

    cir.PI = 3.14;

    cir.area = cir.PI * cir.radius * cir.radius;
    cir.diameter = 2 * cir.radius;

    cout<<"The area is: "<<cir.area<<endl;
    cout<<"The diameter is: "<<cir.diameter<<endl;

    return 0;
}