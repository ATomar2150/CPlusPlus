#include <iostream>

using namespace std;

int doSomething(int* x, int* y);

int main()
{
    int x;
    int* xtr;
    xtr = &x;
    int y;
    int* ytr;
    ytr = &y;
    cout<<"Performing Calculations.\n";
    int result = doSomething(xtr,ytr);
    cout<<"The value is: "<<result;
    
    return 0;
}

int doSomething(int* x , int* y)
{
    cout<<"Enter the value of x: ";
    cin >> *x;
    int temp = *x;
    *x = (*x) * 10;
    *y = (temp) * 10;
    return *x + *y;
}