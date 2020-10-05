#include <iostream>
using namespace std;

void showArray(int [], int);
int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {2,3,5,6,7};

    showArray(numbers, SIZE);

    return 0;

}

// we pass the empty array as parameter( needs to be set up differently) in order to pass the memory address of the array as it is pass by reference.
void showArray(int num[], int SIZE)
{
    for( int i = 0; i < SIZE; i++)
    {
        cout << num[i]<<endl;
    }
}