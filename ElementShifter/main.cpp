#include <iostream>
using namespace std;

const int SIZE = 5;

int* elementShifter(int* ptr, int arr[], int SIZE);

int main()
{
    int arr[SIZE] = {2,3,4,5,6};
    int* ptr = new int[SIZE + 1];

    int* result = elementShifter(ptr, arr, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}

int* elementShifter(int* ptr,int arr[], int SIZE)
{
    ptr[0] = 0;
    for(int i = 0; i < SIZE; i++)
    {
        ptr[i+1] = arr[i];
    }

    return ptr;
}