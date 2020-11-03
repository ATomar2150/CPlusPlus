#include "IntArray.h"
#include <iostream>
using namespace std;

IntArray::IntArray(int s)
{
    arraySize = s;
    aptr = new int[s];
    for(int i = 0; i < arraySize; i++)
    {
        *(aptr + i) = 0;
    }
}
//copy constructor
IntArray::IntArray(const IntArray &obj)
{
    arraySize = obj.arraySize;
    aptr = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        *(aptr + i) = *(obj.aptr + i);
    }
}

IntArray::~IntArray()
{
    if(arraySize > 0)
    {
        delete [] aptr;
    }
}

void IntArray::subscriptError()
{
    cout<<"ERROR: Subscript out of range.\n";
    exit(0);
}

int &IntArray::operator[](const int &sub)
{
    if(sub < 0 ||sub >= arraySize)
    {
        subscriptError();
    }
    return aptr[sub];
}