#include <iostream>
using namespace std;

void arrSorting(int* ptr, int SIZE);
double median(int* ptr, int SIZE);

int main()
{
    int SIZE;
    cout<<"What size you want the array: \n";
    cin >> SIZE;
    cout<<"========================================\n";
    int* ptr = new int[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        
        cout<<"Enter the value of "<<i+1<<" : "<<endl;
        cin >> *(ptr + i);

        while(*(ptr + i) < 0)
        {
            cout<<"Enter the value od "<<i+1<<" again: "<<endl;
            cin >> *(ptr + i);
        }
    }

    arrSorting(ptr,SIZE);

    double MEDIAN = median(ptr,SIZE);
    cout<<"The median of the array is: "<<MEDIAN<<endl;
    return 0;
}

void arrSorting(int* ptr, int SIZE)
{
    bool swap;
    do
    {
        bool swap = false;
        for( int i = 0; i < SIZE; i++)
        {
            if(ptr[i + 1] < ptr[i])
            {
                int temp = ptr[i];
                ptr[i] = ptr[i+1];
                ptr[i+1] = temp;
                swap = true;
            }
        }      

    }while(swap == true);

}

double median(int* ptr, int SIZE)
{
    if(SIZE % 2 == 0)
    {
        int val1 = SIZE / 2;
        int val2 = val1 - 1;

        double result = (ptr[val1] + ptr[val2]) / 2.0;
        return result;
    }
    else if(SIZE % 2 != 0)
    {
        int val1 = SIZE/2;
        double result = ptr[val1]/1.0;

        return result;
    }
    
}