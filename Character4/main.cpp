#include <iostream>
using namespace std;

//toupper() converts the character into capital case, if its 'y' or 'n'. Vice- versa with tolower().

int main()
{
    const double PI = 3.14;
    char response;
    double radius;
    double area;
    cout<<"We are calculating area of the circle\n";

    do
    {
        cout<<"Enter the radius of circle.\n";
        cin >> radius;
        cout << "AREA OF CIRCLE: \n";
        double area = PI * radius * radius;
        cout<< area <<endl;
        cout <<"Calculate Another? (Y OR N)\n";
        cin >> response;
        while(toupper(response) != 'Y' && toupper(response) != 'N')
        {
            cout<<"Please enter Y or N: ";
            cin >> response;
        }
    }while(toupper(response) == 'Y');
    return 0;
}