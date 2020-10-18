#include <iostream>
using namespace std;

const int SIZE = 5;

int* arrExpander(int* arr,int* ptr, int SIZE);
int main()
{
    int arr[SIZE];

    int* ptr = new int[SIZE*2];

    for(int i = 0; i < SIZE; i++)
    {
        cout<<"Enter the value of array at "<<(i+1)<<" : "<<endl;
        cin >> arr[i];
    }

    int* result = arrExpander(arr,ptr, SIZE);
    cout<<"======================================"<<endl;
    for(int i = 0; i < SIZE*2; i++)
    {
        cout<<*(result + i)<<endl;
    }

    return 0;
}
int* arrExpander(int* arr,int* ptr, int SIZE)
{
    
    for(int i = 0; i < SIZE; i++)
    {
       ptr[i] = arr[i];

    }
    int j = SIZE;
    while(j < SIZE*2 )
    {
        ptr[j] = 0;
        j++;
    }  

    return ptr;
}