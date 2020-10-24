#include <iostream>

using namespace std;

union ThreeTypes
{
    char letter;
    int whole;
    double real;
};

int main()
{
    const int SIZE = 50;
    ThreeTypes array[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        array[i].real = 2.37;
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout<< array[i].real<<" ";
    }
    cout<<endl<<endl;

    for(int i = 0; i < SIZE; i++)
    {
        array[i].letter = 'A';
    }

     for(int i = 0; i < SIZE; i++)
    {
        cout<< array[i].letter<<" ";
    }
     cout<<endl<<endl;
     for(int i = 0; i < SIZE; i++)
    {
        array[i].real = 10;
    }

     for(int i = 0; i < SIZE; i++)
    {
        cout<< array[i].real<<" ";
    }
    return 0;
}