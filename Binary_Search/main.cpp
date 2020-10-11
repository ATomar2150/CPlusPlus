#include <iostream>
using namespace std;

int searchBinary(double [], int , double );
const int SIZE = 6;

int main()
{
    int binaryResult;
    double hours[SIZE] = {0.0, 1.0, 4.0, 5.0, 8.0, 9.0};

    binaryResult = searchBinary(hours, SIZE, -1.0);

    if( binaryResult == -1)
    {
        cout<<"Element Not Found\n";
    }
    else
    {
        cout<<"The element is found at "<<binaryResult<<endl;
    }
          
    return 0;
}

int searchBinary(double hours[], int SIZE, double val)
{
    //bool is used to get out of while loop.
    bool found = false;
    int position = -1;
    int high = SIZE - 1;
    int low = 0;
    int middle;

    while( !found && low <= high )
    {
        middle = (low + high) / 2;
        if(hours[middle] == val) 
        {
            found = true;
            position = middle;
        }
        else if( hours[middle] > val )
        {
            high = middle - 1;
        }
        else if ( hours[middle] < val )
        {
            low = middle + 1;
        }
       
    }
     return position;
}