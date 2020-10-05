#include <iostream>
using namespace std;

void showSum(int num);

int main ()
{
    const int SIZE = 8;
    int number[SIZE] = {2,3,5,6,7,9,10,10};

    for(int i = 0; i < SIZE; i++)
    {
        showSum(number[i]);
    }
    return 0;
}

void showSum(int num)
{
    cout<< num << endl;
}

