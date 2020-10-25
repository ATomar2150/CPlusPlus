#include <iostream>

using namespace std;

class Rectangle
{   
    //Defining member variables
    private:
            int length;
            int width;
    //Defining MemberFunctions/Procedures in order to access member variables or Data/Attributes
    public:
            void setLength(int); //setters
            void setWidth(int);
            int getLength() const; //getters
            int getWidth() const;
            int getArea() const;
};
//Defining MemberFunction/Procedures
void Rectangle :: setLength(int l)
{
    length = l;
}

void Rectangle :: setWidth(int w)
{
    width = w;
}

int Rectangle :: getLength() const
{
    return length;
}

int Rectangle :: getWidth() const
{
    return width;
}

int Rectangle :: getArea() const
{
    return length * width;
}
int main()
{
    //creating a instance box of Rectangle class.
    Rectangle box;
    
    //For taking user input we have to declare variable

    int lengthRect;
    int widthRect;


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