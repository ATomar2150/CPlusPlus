#include <iostream>
#include "Object.h"

using namespace std;

int main()
{
    //Object Conversion
        double d;
        int i;

        FeetInches distance;
        cout<<"Enter the value in feet and inches.\n";
        cin >> distance;

        //Convert the distance object to a double
        d = distance;

        //Convert the distance object to an int
        i = distance;

        //Display the values
        cout<<"The value "<<distance;
        cout<<" is equivalent to "<<d<<" feet.\n";
        cout<<" or "<< i << " feet, rounded down.\n";
    return 0;
}