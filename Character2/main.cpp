#include <iostream>
using namespace std;

//when we have antered cin, after hitting enter the \n is stored in keyboard buffer.
//cin.ignore() ignores the enter in the buffer.
//cin.get() is used to hold the screen.
int main()
{
    int ch;    
    cout<<"Please enter the number.\n";
    cin >> ch;
    cin.ignore();
    cout <<"Please enter to continue.... ";
    cin.get();
    return 0;
}