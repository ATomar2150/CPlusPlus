#include <iostream>
#include <ctime>
using namespace std;

int *getNumbers(int);

int main()
{
    int *number;
    number = getNumbers(5);

    for( int count = 0; count < 5; count ++)
    {
       cout<<number[count]<<endl;
    }

    delete [] number;
    number = 0;

    return 0;
}
int *getNumbers(int num)
{
    int *arr;
    if(num <= 0)
    {
        return NULL;
    }

    arr = new int[num];

    srand(time(0));

    for( int count = 0; count < num; count ++)
    {
        arr[count] = rand();
    }
    return arr;

}