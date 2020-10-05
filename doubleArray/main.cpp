#include <iostream>
using namespace std;

void showArray(int number[], int);
void doubleArray(int array[], int SIZE);

int main()
{
    const int SIZE = 3;
    int number[SIZE];

    for(int i = 0; i<SIZE; i++)
    {
        cout<<"Enter the element at index: "<<(i)<<endl;
        cin>> number[i];
    }

    showArray(number, SIZE);
    cout<<"===================================="<<endl;
    doubleArray(number, SIZE);
    cout<<"===================================="<<endl;
    showArray(number, SIZE);
    cout<<"===================================="<<endl;
    return 0;
    
}
    void showArray(int array[], int SIZE)
    {
        for( int i = 0; i < SIZE; i++)
        {
            cout<<"The array elements are: "<<array[i]<<endl;    
        }
    }

    void doubleArray(int array[], int SIZE)
    {
        cout<<"We are going to double the array."<<endl;
        for( int i = 0; i < SIZE; i++)
        {
            array[i] *= 2;
        }
    }
