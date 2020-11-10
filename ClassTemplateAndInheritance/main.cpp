#include <iostream>
#include "SearchableVector.h"
using namespace std;

int main()
{
    const int SIZE = 10;
    int count;
    int result;

    SearchableVector<int> intTable(SIZE);
    SearchableVector<double> doubleTable(SIZE);

    for(count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
        doubleTable[count] = (count * 2.14);
    }

     for(count = 0; count < SIZE; count++)
    {
        cout<<intTable[count]<<endl;
        cout<<doubleTable[count]<<endl;
    }

    cout<<"Searching for 6 in INT table.\n";
    result = intTable.findItem(6);

    if(result == -1)
    {
        cout<<"6 is not in intTable.\n";
    }
    else
    {
        cout<<"6 is found at subscript.\n";
    }

    cout<<"Searching for 12.84 in doubleTable.\n";
    if(result == -1)
    {
        cout<<"12.84 is not in intTable.\n";
    }
    else
    {
        cout<<"12.84 is found at subscript.\n";
    }
    
    return 0;
}