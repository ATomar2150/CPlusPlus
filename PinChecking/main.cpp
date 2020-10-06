#include <iostream>
using namespace std;

bool checkPIN(int [], int [], int );

int main()
{
    const int SIZE = 4;
    int PIN1[SIZE] = {2, 5, 6, 7};
    int PIN2[SIZE] = {7, 8, 9 , 1};

    if(checkPIN(PIN1, PIN2, SIZE))
    {
        cout<<"PINS MATCHED\n";
    }else
    {
         cout<<"PINS NOT MATCHED\n";
    };
    if(checkPIN(PIN1, PIN1, SIZE))
    {
         cout<<"PINS MATCHED\n";
    }else
    {
         cout<<"PINS NOT MATCHED\n";
    };
    return 0;

}
bool checkPIN(int arr1[], int arr2[], int SIZE)
{   
    for( int i = 0; i < SIZE; i++ )
    {
         if(arr1[i] != arr2[i])
         {
             return false;
         }       
    }
    return true;  
}