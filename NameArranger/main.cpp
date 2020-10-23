#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void getFullName(char* fullName, char* first, char* middle, char* last, int lengthfirst, int lengthmiddle, int lengthlast, int SIZE1);

int main()
{
    const int SIZE = 20;
    const int SIZE1 = 70;

    char first[SIZE];
    cout<<"Enter thr first name: "<<endl;
    cin.getline(first, SIZE);
    int lengthfirst = strlen(first);

    char middle[SIZE];
    cout<<"Enter thr second name: "<<endl;
     cin.getline(middle, SIZE);
     int lengthmiddle = strlen(middle);

    char last[SIZE];
    cout<<"Enter the third name: "<<endl;
     cin.getline(last, SIZE);
     int lengthlast = strlen(last);

    char fullName[SIZE1];

    getFullName(fullName, first, middle, last,lengthfirst,lengthmiddle, lengthlast, SIZE1);


    return 0;
}

void getFullName(char* fullName, char* first, char* middle, char* last, int lengthfirst, int lengthmiddle, int lengthlast, int SIZE1)
{
    // cout<<"The size of first name is: "<<lengthfirst<<endl;
    // cout<<"The size of second name is: "<<lengthmiddle<<endl;
    // cout<<"The size of third name is: "<<lengthlast<<endl;
    for(int i = 0; i < lengthlast; i++)
    {
        fullName[i] = last[i];
    }

    
    fullName[lengthlast] = ',';
    fullName[lengthlast + 1] = ' ';
    
    for(int i = 0; i < lengthfirst; i++)
    {
        fullName[lengthlast + 2 + i] = first[i];
    }
    
    int finalLength = lengthlast + 2 + lengthfirst;

    fullName[finalLength] = ' ';
    

     for(int i = 0; i < lengthmiddle; i++)
    {
        
        fullName[(lengthlast + 2) + (lengthfirst + 1) + i] = middle[i];
        
    }

    
    int fullLength = (lengthlast + 2) + (lengthfirst + 1) + (lengthmiddle + 1);
    fullName[fullLength] = '\0';

    cout<<"The correct order is: ";
    for(int i = 0; i < fullLength; i++)
    {
        cout<<fullName[i];
    }


}
