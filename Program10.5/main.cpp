//This program displays a string stored in a char array.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 80;
    char line[SIZE];
    int count = 0;

    cout<< "Enter the line, the array has "<<(SIZE - 1)<<" characters.\n";
    cin.getline(line, SIZE);
    cout<<"The sentence entered is: \n";
    while(line[count] != '\0')
    {
        cout<<line[count];
        count++;
    }
    return 0;
}