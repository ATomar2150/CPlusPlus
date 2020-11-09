//This program uses templat function
#include <iostream>

using namespace std;

//template defination fo square fuction
template<class T>
T square(T number)
{
    return number * number;
}

int main()
{
    int userInt;
    double userDouble;

    cout<<"Enter an integer: "; 
    cin >> userInt;
    cout<<"Enter a floating point value: ";
    cin >> userDouble;
    cout<<"Here are the squares: ";
    cout<< square(userInt) <<" and "<<square(userDouble)<<endl;
    return 0;
}