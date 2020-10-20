#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //strlen
    // char name[] = "Sundar Tinku Billa";
    // int length;
    // length = strlen(name);
    // cout << length;

    //strcat
    // const int SIZE = 13;
    // char string1[SIZE] = "Hello ";
    // char string2[]= "World!";

    // strcat(string1, string2);
    // cout << string1 <<endl; 

    //strcpy
    // cout << string1 <<endl; 
    // strcpy(string1, string2);
    // cout << string1 <<endl; 

    //strncat and strncpy
    int maxCharacters;
    const int SIZE_1 = 17;
    const int SIZE_2 = 18;

    char string1[SIZE_1] = "Hulchal ";
    char string2[SIZE_2] = "Hungamaf";

    cout<<string1<<endl;
    cout<<string2<<endl;
    
    maxCharacters = sizeof(string1) - (strlen(string1) + 1);
    strncat(string1, string2, maxCharacters);
    cout << string1 <<endl;

    return 0;
}