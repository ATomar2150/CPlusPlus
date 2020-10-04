#include <iostream>
using namespace std;

//summing of array
int main()
{
    double total = 0.0;
    int count;
    double average;
    const int SIZE = 5;
    int number[SIZE] = {1,3,4,6,7};

    for(count=0; count<5; count++)
    {
        total += number[count];
    }
    cout<<"The running total is: "<<total<<endl;
    
     //average of the numbers
     average = total / SIZE;
     cout<<"The average of the array number is: "<<average<<endl;

     //finding the highest
     int highest;
     highest = number[0];
    for(count = 1; count < SIZE; count++)
    {
       
        if(number[count] > highest)
        {
            highest = number[count];
        }
    }
    
    cout<< "The highest element is: "<<highest<<endl;
     //finding the lowest
    int lowest;
     lowest = number[0];
    for(count = 1; count < SIZE; count++)
    {
       
        if(number[count] < lowest)
        {
            lowest = number[count];
        }
    }
    cout<< "The lowest element is: "<<lowest<<endl;

    return 0;
}