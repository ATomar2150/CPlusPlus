#include "Object.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void FeetInches::simplify()
{
    if(inches >= 12)
    {
        feet = feet + (inches/12);
        inches = inches % 12;
    }
    else if (inches < 0) //-20 inches
    {
        feet = feet - ((abs(inches)/12) + 1); //feet = feet - (20/12 + 1), feet = feet - (1.66 + 1), feet = feet - 1.66 - 1, feet = feet - 2.66. (initially feet ki value di hogi.)
        inches = 12 - (abs(inches) % 12);

    }
    
}

FeetInches::FeetInches()
{
    feet = 0;
    inches = 0;
}

FeetInches::FeetInches(int f, int i)
{
    feet = f;
    inches = i;
    simplify();
}

//Mutator function
void FeetInches::setFeet(int f)
{
    feet = f;
    simplify();
};
void FeetInches::setInches(int i)
{
    inches = i;
    simplify();
};

//Accesor function
int FeetInches::getFeet() const
{
    return feet;
};
int FeetInches::getInches() const
{
    return inches;
};

istream &operator >> (istream &strm, FeetInches &obj)
{
    cout<<"FEET: "<<endl;
    strm >> obj.feet;
    cout<<"INCHES: " <<endl;
    strm >> obj.inches;
    return strm; 
}
ostream &operator << (ostream &strm, const FeetInches &obj)
{
    strm << obj.feet <<" feet "<<obj.inches<<" inches. \n";
    return strm; 
}


//Object Conversion
FeetInches::operator double()
{
    double temp = feet;
    temp = temp + (inches/12.0);
    return temp;
}

FeetInches::operator int()
{
    return feet;
}