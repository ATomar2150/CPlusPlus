#include <iostream>
using namespace std;

const int SIZE = 7;

int main()
{
    int numbers[SIZE] = {4,1,0,2,19,2,5};
    int key;
    int temp;

    for( int i = 0; i < SIZE - 1; i++ )
    {
        key = i;
        for( int j = i+1 ; j < SIZE; j++ )
        {
            if(numbers[key] > numbers[j])
            {
                key = j;
            }
        }

        temp = numbers[i];
        numbers[i] = numbers[key];
        numbers[key] = temp;
    }

    for(int k = 0; k < SIZE ; k++)
    {
        cout<<numbers[k]<<" ";
    }
    return 0;
}