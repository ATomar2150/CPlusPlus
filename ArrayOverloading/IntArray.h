#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
    private:
            int *aptr;
            int arraySize;
            void subscriptError();
    public:
            IntArray(int);
            IntArray(const IntArray &); //copy
            ~IntArray();

            int size() const
            {
                return arraySize; 
            }

            int &operator[](const int &);

};
#endif