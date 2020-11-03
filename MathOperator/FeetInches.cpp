#include "FeetInches.h"
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
    void simplify();
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

FeetInches FeetInches::operator+ (const FeetInches &right)
{
    FeetInches temp;

    //length3 = length 1 + length2;
    //length3 = length1.operator+(length2);
    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();
    return temp;
}

FeetInches FeetInches::operator- (const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();
    return temp;
}

/*prefix operators : 
1. In prefix operator there is no need of parameter
2. FirstIncrement increments the inches member. 
3. The simplify function is called and then this pointer is returned.
4. this is a pointer always points to the object that is being used to call the member function. 
*/

FeetInches FeetInches::operator++ ()
{
    ++inches;
    simplify();
    return *this;
}

/* postfix operator:
1. We use dummy parameter. 
2. C++ sees this (int) parameter in operation function, it knows the function is designed to be used in postfix mode.
3. There is a use use of a temporary local variable, the temp object.
4. temp is initialized with feet and inches before the inrement takes place.
5. Inches is incremented
6. simplify function is called.
7. contents of temp is returned.
*/

FeetInches FeetInches::operator++ (int)
{
    FeetInches temp(feet, inches);
    inches++;
    simplify();
    return temp;
}

bool FeetInches::operator < (const FeetInches &right)
{
    bool status;
    if(feet < right.feet)
    {
        status = true;
    }
    else if(feet == right.feet && inches < right.inches)
    {
        status = true;
    }
    else
    {
        return false;
    }
    
    return status;
};
bool FeetInches::operator > (const FeetInches &right)
{
    bool status;
    if(feet > right.feet)
    {
        status = true;
    }
    else if(feet == right.feet && inches > right.inches)
    {
        status = true;
    }
    else
    {
        return false;
    }
    return status;
};
bool FeetInches::operator == (const FeetInches &right)
{
     bool status;
     if(feet == right.feet && inches == right.inches)
    {
        status = true;
    }
    else
    {
        return false;
    }
    return status;
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

