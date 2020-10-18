#include <iostream>
using namespace std;

void selectionSortArr(int* arr, int);
void showArrPtr(int* arr, int NUM);

int main()
{
    const int NUM = 5;
    int* arr = new int[NUM];

    
    for(int i = 0; i < NUM ; i++)
    {
        cout<<"Key in the value of donations "<<i<<" : ";

        cin >> arr[i];
        cout<<endl;
    }

    selectionSortArr(arr, NUM);
    cout<<endl;
    
    //Displaying the array.
    cout<<"The sorted array is: "<<endl;
    showArrPtr(arr, NUM);

    return 0;
}

//Selection Sort.
void selectionSortArr(int* arr, int NUM)
{   
    int key;
    int temp;
    for(int i = 0; i < NUM-1; i++)
    {
        key = i;
        for( int j = i + 1; j < NUM; j++)
        {
            if((arr[key]) > (arr[j]) )
            {
                key = j;
            }
        }
        temp = arr[key];
        arr[key] = arr[i];
        arr[i] = temp;
    }
}


void showArrPtr(int* arr, int NUM)
{
    for(int i = 0; i < NUM; i++)
    {
       cout<<arr[i]<<" ";
    }
}
     

