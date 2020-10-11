#include <iostream>
using namespace std;

const int SIZE = 5;

int linearSearch(int [], int, int);

int main()
{
    int studentNumber[SIZE] = {10, 5, 7, 9, 3};
    int value = 50;
    int result;
    result = linearSearch(studentNumber, SIZE, value );
    if(result == -1)
    {
        cout<<"You did not have specified score in the list.\n";
    }
    else 
    {
        cout<<"You have got the specified score at "<<(result + 1)<<endl;
    }
    return 0;

}

int linearSearch(int student[], int SIZE, int val)
{
    int position = -1;
    bool found = false;

    for( int i = 0; i < SIZE; i++ )
    {
        if(student[i] == val)
        {
            found = true;
            position = i;
        }
    }
    return position;
}