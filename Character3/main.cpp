//This program used to determine whether it is proper format or not.
#include <iostream>
#include <cctype>
using namespace std;

bool getFormat(char customer[], int SIZE);
int main()
{
    const int SIZE = 8;
    char customer[SIZE];

    cout<<"Enter int the format of AAA7896 \n";
    cin.getline(customer, SIZE);

    if(getFormat(customer, SIZE))
    {
        cout << "That is a valid customer number \n";
    }
    else
    {
        cout << "This is not a valid customer number \n";
    }
    
    return 0;
}

bool getFormat(char customer[], int SIZE)
{
    int i;
    for(i = 0; i < 3; i++)
    {
        if(!isalpha(customer[i]))
        {
            return false;
        }
    }
    for(i = 3; i < SIZE - 1; i++)
    {
        if(!isdigit(customer[i]))
        {
            return false;
        }
    }
    return true;
}