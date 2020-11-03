#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
    const int SIZE = 10;

    IntArray table(SIZE); //Define an array with 10 elements

    for(int x = 0; x < SIZE; x++)
    {
        table[x] = (x * 2);
    }

     for(int x = 0; x < SIZE; x++)
    {
        cout<< table[x] <<" ";
        
    }
    
    cout<<endl;

    for(int x = 0; x < SIZE; x++)
    {
        table[x] = table[x] + 5;
    }

    for(int x = 0; x < SIZE; x++)
    {
        cout<< table[x] <<" ";
       
    }

     cout<<endl;

    for(int x = 0; x < SIZE; x++)
    {
        table[x]++;
    }

    for(int x = 0; x < SIZE; x++)
    {
        cout<< table[x] <<" ";
       
    }

     cout<<endl;
    //BOUND CHECKING CAPABILITY
    cout<<"Now attempting to use an invalid subscript.\n";
    table[SIZE + 1] = 0;
    
    return 0;
}