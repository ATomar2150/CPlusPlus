#include <iostream>
using namespace std;

void displayNumber(int value);

int main()
{
    int number = 12;

    cout<< "Before entering into the function the value of number is: "<<number<<endl;

    displayNumber(number);

    cout<< "Back in main function and value of number is: "<<number<<endl;
    cout<<"When an argument is passed into a parameter, only a copy of the argument's value is passed."<<endl; 
    cout<<"Changes to the parameter do not affect the original argument."<<endl;
    cout<<"This is called as PASS BY VALUE."<<endl;

    return 0;
}

 void displayNumber(int value)
{
    value = 0;
    cout<<"After entering the function and changing the value of number is: "<<value<<endl;
}
