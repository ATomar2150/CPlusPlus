#include <iostream>
#include <string>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void showContent(Rectangle arg);
void showInfo(Rectangle &ref);
Rectangle returnStruct();
void pointStruct(Rectangle* ptr);
int main()
{
    Rectangle arg;
    Rectangle ref;
    Rectangle ret;
    Rectangle ptr;
    arg.length = 10;
    arg.width = 20;

    cout<<"PASSING AS ARGUMENT"<<endl;
    showContent(arg);

    cout<<endl<<endl;
    cout<<"PASSING AS REFERENCE"<<endl;
    showInfo(ref);
    cout<<"The length of the Rectangle is: "<< ref.length<<endl;
    cout<<"The width of the Rectangle is: "<<ref.width<<endl;

    cout<<endl<<endl;
    ret = returnStruct();
    cout<<"The length of the Rectangle RETURNING AS STRUCT is: "<< ret.length<<endl;
    cout<<"The width of the Rectangle RETURNING AS STRUCT is: "<<ret.width<<endl;

    cout<<endl<<endl;
    pointStruct(&ptr);
    cout<<"The length of the Rectangle PASSING AS POINTER is: "<< ptr.length<<endl;
    cout<<"The width of the Rectangle PASSING AS POINTER is: "<<ptr.width<<endl;
    return 0;
}

void showContent(Rectangle arg)
{
    cout<<"The length of the Rectangle is: "<< arg.length<<endl;
    cout<<"The width of the Rectangle is: "<<arg.width<<endl;
}

void showInfo(Rectangle &ref)
{
    ref.length = 15;
    ref.width = 30;
}

Rectangle returnStruct()
{
    Rectangle str;
    cout<<"ENTER The length of the Rectangle is, return type is struct: ";
    cin >> str.length;
    cout<<"ENTER The width of the Rectangle is, return type is struct: ";
    cin >> str.width;

    return str;
}

void pointStruct(Rectangle* ptr)
{
    cout<<"ENTER The length of the Rectangle is: ";
    cin >> ptr->length;
    cout<<"ENTER The width of the Rectangle is: ";
    cin >> ptr->width;
}