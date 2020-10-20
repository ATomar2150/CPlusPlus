#include <iostream>
using namespace std;

int main()
{
    char response;
    do
    {
    cout<<"Philip is asking user if he or she wants to repeat the program? ENTER (Y or N)\n";
    cin >> response;
    if(toupper(response) != 'Y' && toupper(response) != 'N')
    {
        cout<<"Please enter the response again.\n";
        cin >> response;
    }
    }while(toupper(response) == 'Y');
    return 0;
}