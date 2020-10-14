#include <iostream>
using namespace std;

/*Passing numeric value */

// void pointerAsParameter(int *val);
// void showArray(int *val);

// int main()
// {
//     int number = 10;
 
//     cout<<"We are passing by reference"<<endl;
//     pointerAsParameter(&number);
// }

// void pointerAsParameter(int *val)
// {
//     *val *=2;
//     cout<<*val<<endl;
// }

/*Passing By String */


const int SIZE = 3;
void pointerAsParameter(int *val);
void showArray(int *val);

int main()
{
    int number[SIZE] = {2, 5, 0};
 
    cout<<"We are passing STRING by reference"<<endl;
    pointerAsParameter(number);

    showArray(number);

}

void pointerAsParameter(int *val)
{
    for( int i = 0; i < SIZE; i++ )
    {
        *val += 4;
         val++;
    }
    
}
void showArray(int *val)
{
    for( int i = 0; i < SIZE; i++ )
    {
        cout<<*val<<endl;
         val++;
    }
}