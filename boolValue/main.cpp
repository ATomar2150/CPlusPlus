#include <iostream>
using namespace std;

bool numberType(int);

int main()
{
    int val;

    cout << "Please enter the number\n";
    cin >> val;
    
    if(numberType(val))
    {
        cout << "number is even\n";
    }
    else
    {
        cout << "number is odd\n";
    }
    return 0;
}

bool numberType(int num)
{
    bool status;

    if(num % 2==0)
    {
        status = true;
    }else
    {
        status = false;
    }
    return status;

}