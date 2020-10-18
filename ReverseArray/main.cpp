#include <iostream>
using namespace std;

const int SIZE = 5;

void reverseArr(int* ptr,int arr[], int SIZE);
void printPTR(const int* ptr, int SIZE);


int main()
{
    int* ptr = new int[SIZE];
    int arr[SIZE] = {2,3,4,5,7};

    reverseArr(ptr, arr, 5);
    printPTR(ptr, SIZE);
    return 0;
}

void reverseArr(int* ptr,int arr[], int SIZE)
{
    int j = 0;
    for(int i = SIZE-1; i >= 0;  i--)
    {
       ptr[j] = arr[i];
       j++;
    }
}

void printPTR(const int* ptr, int SIZE)
{
     for(int i = 0; i < SIZE; i++)
    {
       cout<<"The "<<(i+1)<<" element in reversed array is: "<<ptr[i]<<endl;
    }
}