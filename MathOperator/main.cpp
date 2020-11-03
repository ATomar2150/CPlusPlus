#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    int feet, inches,f,s;

    FeetInches first, second, third;

    cout<<"Get the distance in feet for addition operator.\n";
    cin >> feet;
    cout<<"Get the distance in inches for addition operator.\n";
    cin >> inches;

    first.setFeet(feet);
    first.setInches(inches);

    cout<<"Get the distance in feet for addition operator.\n";
    cin >> feet;
    cout<<"Get the distance in inches for addition operator.\n";
    cin >> inches;

    second.setFeet(feet);
    second.setInches(inches);

    third = first + second;

    cout<<"first + second = ";
    cout<<third.getFeet()<< "feet, ";
    cout<<third.getInches()<<" inches.\n";

    third = first - second;

    cout<<"first - second = ";
    cout<<third.getFeet()<< "feet, ";
    cout<<third.getInches()<<" inches.\n";

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

        if(first == second)
        {
            cout<<"first is equal to second"<<endl;
        }
        if(first > second)
        {
            cout<<"first is greater than second"<<endl;
        }
        if(first < second)
        {
            cout<<"first is less than second"<<endl;
        }
        cout<<"____________________________"<<endl;
       

    }

     //For cout and cin operators.
        FeetInches distance;
        cout<<"Get the fourth operator.\n";
        cin >> f;
        distance.setFeet(f);
        cout<<"Get the fifth operator.\n";
        cin >> s;
        distance.setInches(s);
        cout <<"The values are: "<<f<<" feet and "<<s<<" inches.\n"<<endl;

    return 0;
}