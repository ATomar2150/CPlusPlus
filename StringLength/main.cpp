#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int countCharacters(string); //char* 

int main()
{
    //  const int SIZE = 50;
    //  char line[SIZE];

    string line;
     cout << "Enter the line as having less than 50 characters as Input: "<<endl;
     //cin.getline(line, SIZE);

     getline(cin, line);

     int ct = countCharacters(line);

     cout<<ct<<endl;
     
     return 0;

}
int countCharacters(string line) //if u need to do with cin.getline then the parameter should be (char* line)
{
    int ct = 0;
    while(line[ct] != '\0')
    {
        ct++;
    }
    return ct;
}