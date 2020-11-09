#include <iostream>
using namespace std;

template <class T>
void swapVars(T &var1,T &var2)
{
    T temp;

    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    char firstChar, secondChar;
    int firstInt, secondInt;
    double firstDouble, secondDouble;

    cout<<"Enter Two characters: ";
    cin>>firstChar;
    cin>> secondChar;
    swapVars(firstChar, secondChar);
    cout<< firstChar <<" "<<secondChar <<endl;

    cout<<"Enter Two Integers: ";
    cin>>firstInt;
    cin>> secondInt;
    swapVars(firstInt, secondInt);
    cout<< firstInt <<" "<<secondInt <<endl;

    cout<<"Enter Two doubles: ";
    cin>>firstDouble;
    cin>> secondDouble;
    swapVars(firstDouble, secondDouble);
    cout<< firstDouble <<" "<<secondDouble <<endl;

    return 0;

}