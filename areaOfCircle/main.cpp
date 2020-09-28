#include <iostream>
using namespace std;

double areaOfCircle(double PI, double square);
double squareRadius(double radius);

int main()
{
  const double PI = 3.14;
  double square;
  double radius;
  double area;

  cout<<"Enter the radius\n";
  cin>> radius;

  square = squareRadius(radius);
  area = areaOfCircle(PI, square);

  cout<<"The area of circle is: "<<area<<endl;
  
  return 0;   
  
}

double areaOfCircle(double PI, double square){
   return PI * square;
}

double squareRadius(double radius){
   return radius * radius ;
}


