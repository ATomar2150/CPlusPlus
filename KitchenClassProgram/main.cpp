#include <iostream>
using namespace std;

class House
{
    private:
            double length;
            double width;
    public:
            void setLength(double);
            void setWidth(double);
            double getLength() const;
            double getWidth() const;
            double getArea() const;
};

//member variable declaration

void House :: setLength(double l)
{
    length = l;
}
void House :: setWidth(double w)
{
    width = w;
}
double House :: getLength() const
{
    return length;
}
double House :: getWidth() const
{
    return width;
}
double House :: getArea() const
{
    return length * width;
}


int main()
{
    House kitchen;
    House bedroom;
    House den;

    double kitchenLen;
    double kitchenWid;
    double bedroomLen;
    double bedroomWid;
    double denLen;
    double denWid;
    double totalArea;

    //creating local variable for passing into member function as Argument.

    cout<<"Please enter the Length of kitchen: ";
    cin>> kitchenLen;
    cout<<"Please enter the Width of kitchen: ";
    cin>> kitchenWid;
    cout<<"Please enter the Length of kitchen: ";
    cin>> bedroomLen;
    cout<<"Please enter the Width of kitchen: ";
    cin>> bedroomWid;
    cout<<"Please enter the Length of kitchen: ";
    cin>> denLen;
    cout<<"Please enter the Width of kitchen: ";
    cin>> denWid;

    kitchen.setLength(kitchenLen);
    kitchen.setWidth(kitchenWid);
    bedroom.setLength(bedroomLen);
    bedroom.setWidth(bedroomWid);
    den.setLength(denLen);
    den.setWidth(denWid);

    cout<<"The length of the instance Kitchen is: "<<kitchen.getLength()<<endl;
    cout<<"The width of the instance Kitchen is: "<<kitchen.getWidth()<<endl;
    cout<<"The length of the instance Bedroom is: "<<bedroom.getLength()<<endl;
    cout<<"The width of the instance Bedroom is: "<<bedroom.getWidth()<<endl;
    cout<<"The length of the instance den is: "<<den.getLength()<<endl;
    cout<<"The width of the instance den is: "<<den.getWidth()<<endl;
    
    totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

    cout<<"The total Area is: "<<totalArea<<endl;

    return 0;
}