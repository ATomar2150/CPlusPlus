#include <iostream>
using namespace std;

int countNumber(char* ptr, char letter);

int main()
{
    //============>slicing first and last name<=======
    // const int SIZE = 15;
    // char arrayName[SIZE];

    // cout<<"Enter the first and last name and put space between them.\n";
    // cin.getline(arrayName, SIZE);

    // int index = 0;

    // while(arrayName[index] != ' ' || arrayName[index] != '\0')
    // {
    //     if(arrayName[index] == ' ')
    //     {
    //         arrayName[index] = '\0';
    //         break;
    //     }
    //     index++;
    // }

    
    // int i = 0;
    // while(arrayName[i] != '\0')
    // {
    //     cout << arrayName[i];
    //     i++;
    // }

    //====================>USING POINTER TO PASS C-STRING ARGUMENT====================

    const int SIZE = 51;
    char userString[SIZE];
    char letter;

    cout<<"Enter a string upto 50 character.\n";
    cin.getline(userString, SIZE);

    cout<<"Enter the characters that you need to check how many times it repeats in the string.\n";
    cin >> letter;

    cout <<"The letter is: "<<letter<<endl;

    cout <<"The letter is repeated "<<countNumber(userString,letter)<< " times"<<endl;
   
    return 0;
}

int countNumber(char* ptr, char letter)
{
    int times = 0;
    while(*ptr != '\0')
    {
        if(*ptr == letter)
        {
            times++;           
        }
        ptr++;
    }
    return times;
}