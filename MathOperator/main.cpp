#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    // int feet, inches;

    // FeetInches first, second, third;

    // cout<<"Get the distance in feet and inches for addition operator.\n";
    // cin >> feet >> inches;

    // first.setFeet(feet);
    // first.setInches(inches);

    // cout<<"Get the distance in feet and inches for subtraction operator.\n";
    // cin >> feet >> inches;

    // second.setFeet(feet);
    // second.setInches(inches);

    // third = first + second;

    // cout<<"first + second = ";
    // cout<<third.getFeet()<< "feet, ";
    // cout<<third.getInches()<<" inches.\n";

    // third = first - second;

    // cout<<"first - second = ";
    // cout<<third.getFeet()<< "feet, ";
    // cout<<third.getInches()<<" inches.\n";

    FeetInches firstIteration;
    FeetInches secondIteration(1, 5);

    cout<<"Demonstrationg the prefix ++ opeators.\n";
    for(int i = 0; i < 12; i++)
    {   
        firstIteration= ++secondIteration;
        cout<<"first: "<<firstIteration.getFeet() <<" feet, ";
        cout<<firstIteration.getInches() << " inches. "<<endl;
        
        cout<<"second: "<<secondIteration.getFeet() <<" feet, ";
        cout<<secondIteration.getInches() << " inches. "<<endl;
         cout<<"__________________________________________\n";
    }

    cout<<"===============================================\n"<<endl;
    cout<<"Demonstrationg the postfix ++ opeators.\n";
    for(int i = 0; i < 12; i++)
    {   
        firstIteration = secondIteration++;
        cout<<"first: "<<firstIteration.getFeet() <<" feet, ";
        cout<<firstIteration.getInches() << " inches. "<<endl;
        
        cout<<"second: "<<secondIteration.getFeet() <<" feet, ";
        cout<<secondIteration.getInches() << " inches. "<<endl;
         cout<<"__________________________________________\n";
    }


    return 0;
}