//This program demostrates the function with three paraameters.
#include <iostream>
using namespace std;

//function prototype
void sum(int,int,int);

int main()
{
    int value1, value2, value3;
    cout<<"Enter the value of three numbers.\n";
    cin>>value1>>value2>>value3;

    //function call
    sum(value1, value2, value3);
    
    return 0;
}

//function defination
void sum(int num1,int num2,int num3)
{
    cout<<"The sum of three numbers is: "<< num1 + num2 + num3<<endl;
}