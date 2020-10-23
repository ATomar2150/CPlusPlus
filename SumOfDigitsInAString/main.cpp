#include <iostream>
#include <string>

using namespace std;

int printTotal(char* array);
int largestDigit(char* array);
int smallestDigit(char* array);

int main()
{
    const int SIZE = 50;
    char array[SIZE];
    cout<<"Enter the number of digits\n";
    cin.getline(array, SIZE);

    cout<< "The total of digits is: "<<endl;
    cout<<printTotal(array)<<endl;

    cout<<"The largest number is: "<<endl;
    cout<<largestDigit(array)<<endl;

    cout<<"The smallest number is: "<<endl;
    cout<<smallestDigit(array)<<endl;

    return 0;
}

int printTotal(char* array)
{
    int num;
    int total = 0;

    num = atoi(array);
    while(num > 0)
    {
    int digit = num % 10;
    total = total + digit;
    num = num / 10;
    }
    return total;
}

int largestDigit(char* array)
{
    int highest;
    int num;

    num = atoi(array); //154
    int i = num % 10; //4
    highest = i; //highest 4
    
    while(num > 0)
    {
        num = num / 10; //15
        i = num % 10; // 5
        if(highest < i) // (4 < 5)
        {
            highest = i; // highest 5
        }
    }

    return highest;
}

int smallestDigit(char* array)
{
    int smallest;
    int num;

    num = atoi(array); //145
    int i = num % 10; //5
    smallest = i; //smallest 5
    
    while(num > 0)
    {
        num = num / 10; //14
        i = num % 10; // 4
        if(smallest > i) // (5 < 4)
        {
            smallest = i; // highest 5
        }
        
    }

    return smallest;
}