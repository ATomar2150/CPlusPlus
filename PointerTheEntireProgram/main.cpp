#include <iostream>
using namespace std;

void selectionSortArr(int* [], int);
void showArrPtr(int arr[], int NUM);
void showArrPtr(int* arr[], int NUM);

int main()
{
    const int NUM = 5;
    int donations[NUM] = {5, 100, 5, 25, 10};

    int* arr[NUM];
    
    for(int i = 0; i < NUM; i++)
    {
        arr[i] = &donations[i];
    }

    selectionSortArr(arr, NUM);

    cout<<endl;
    cout<<endl;
    
    //Displaying the array.
    cout<<"The sorted array is: "<<endl;
    showArrPtr(arr, NUM);

    cout<<endl;

    //Displaying the array.
    cout<<"The original array is: "<<endl;
    showArrPtr(donations, NUM);
    
    return 0;
}

//Selection Sort.
void selectionSortArr(int* arr[], int NUM)
{   
    int key;
    int i; 
    int* minElem;

    for(i = 0; i < NUM-1; i++)
    {
        key = i;
        minElem = arr[i];

        for(int j = i + 1; j < NUM; j++)
        {
            if(*(arr[j]) < *minElem)
            {
                minElem = arr[j];
                key = j;
            }
        }
        arr[key] = arr[i];
        arr[i] = minElem;
    }
}


void showArrPtr(int arr[], int NUM)
{
    for(int i = 0; i < NUM; i++)
    {
       cout<<arr[i]<<" ";
    }
}
     

void showArrPtr(int* arr[], int NUM)
{

    for(int i = 0; i < NUM; i++)
    {
       cout<<*(arr[i])<<" ";
    }
}
