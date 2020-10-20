#include <iostream>
#include <cctype>
#include <string>
using namespace std;


//if we use cin => it will ignore all leading and trailing spaces until a character is entered. 
//And after it stopped reading a character and we hit enter to continue, the \n is stored in keyboard buffer.
//We use cin.get() read all spaces.
int main()
{
    char input;
    cout<<"Enter the character.\n";
    // /This reads the white space character or enter
    cin.get(input); 

    // This ignores the whitespace character.
    //cin >> input;

    if (isalpha(input))
    cout<<"This is an alphabet character\n";
    if (isdigit(input))
    cout<<"This is a numeric digit\n";
    if (islower(input))
    cout<<"The letter you entered is lowercase\n";
    if (isupper(input))
    cout<<"The letter you entered is uppercase\n";
    if (isspace(input))
    cout<<"This is a white space character\n";
    return 0;
}