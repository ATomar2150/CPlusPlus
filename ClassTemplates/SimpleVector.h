#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new> //Needed for bad_alloc exception
#include <cstdlib> //Needed for exit function
using namespace std;

template <class T>
class SimpleVector
{
    private:
            T *aptr; //To point to the allocated array
            int arraySize; //Needed for the members in the array
            void memError(); //Handles memory allocation errors
            void subError(); //Handles subscript out of range

    public:
            //Default Constructor
            SimpleVector()
            {
                aptr = 0;
                arraySize = 0;
            }

            //Constructor Declaration
            SimpleVector(int);

            //Copy constructor declaration
            SimpleVector(const SimpleVector &);

            //Destructor declaration
            ~SimpleVector();

            //Accessor to return the array size.
            int size() const
            {
                return arraySize;
            }

            //Accessor to return the specific element
            T getElementAt(int position);

            //Overload [] operator declaration
            T &operator[](const int &);

};

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    try
    {
        aptr = new T [s]; //T *aptr = new T [s]
    }
    catch (bad_alloc)
    {
        memError();
    }

    for(int count = 0; count < arraySize; count++)
    {
        *(aptr + count) = 0;
    }
}


//Copy Contructor
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    arraySize = obj.arraySize;

    //Allocate memory for the array
    aptr = new T [arraySize];
    if(aptr == 0)
    {
        memError();
    }

    for(int count = 0; count < arraySize; count++)
    {
        *(aptr + count) = *(obj.aptr + count);
    }
}

//Destructor for SimpleVector class
template <class T>
SimpleVector<T>::~SimpleVector()
{
    if(arraySize > 0)
    {
        delete [] aptr;
    }
}

template <class T>
void SimpleVector<T>::memError()
{
    cout<<"Error: Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
    if(sub > 0 || sub >= arraySize)
    {
        subError();
        return aptr[sub];
    }
}

template <class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if(sub < 0 || sub >= arraySize)
    {
        subError();
        return aptr[sub];
    }
}

#endif;