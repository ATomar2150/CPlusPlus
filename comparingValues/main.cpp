#include <iostream>
using namespace std;



//determine the arraycontains the same data or not.
int main()
{
    const int SIZE = 5;
    int count = 0;
    bool arrayEqual = true;
    int array1[SIZE] = {6,5,8,0,9};
    int array2[SIZE] = {6,8,8,0,9};
    while(arrayEqual && count < SIZE)
    {
        if(array1[count] != array2[count])
        {
            arrayEqual = false;
            break;
            
        }
        count++;
        
    }
    
    if(arrayEqual)
    {
        cout<<" Arrays are equal\n";
    }
    else
    {
        cout<< "Arrays are not equal\n";
    }

return 0;

}

