#include <iostream>
using namespace std;

void showArray(int [], int);
void showArray(int [], int);
int main()
{
    const int SIZE1 = 5;
    const int SIZE2 = 3;
    int numbers[SIZE1] = {2,3,5,6,7};
    int number[SIZE2] = {1,2,3};

    showArray(numbers, SIZE1);
    cout<<"=================================="<<endl;
    showArray(number, SIZE2);

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
