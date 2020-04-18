#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double PI = 3.1459;
    double area, radius;
    cout<< "Area of the circle";
    cin>> radius;
    area = PI*pow(radius,2);
    cout<<area<<endl;
    return 0;
}