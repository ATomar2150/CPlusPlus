#include "Instructor.h"
#include <string>
using namespace std;

 //default constructor
Instructor::Instructor()
{
    lastName = " ";
    firstName = " ";
    officeNumber = " ";
};

//constructor
Instructor::Instructor(string LN, string FN, string ON)
{
    lastName = LN;
    firstName = FN;
    officeNumber = ON;
};

void Instructor::set(string LN, string FN, string ON)
{
    lastName = LN;
    firstName = FN;
    officeNumber = ON;
};

void Instructor::print() const
{
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"First Name: "<<firstName<<endl;
    cout<<"Office Number: "<<officeNumber<<endl;
};



void Instructor::setLastName(string LN)
{
    lastName = LN;
};
void Instructor::setFirstName(string FN)
{
    firstName = FN;
};
void Instructor::setOfficeNumber(string ON)
{
    officeNumber = ON;
};

string Instructor::getLastName() const
{
    return lastName;
};
string Instructor::getFirstName() const
{
    return firstName;
};
string Instructor::getOfficeNumber() const
{
    return officeNumber;
};




