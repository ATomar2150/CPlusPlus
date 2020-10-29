#include "personal.h"
using namespace std;

//default Constructor
Personal::Personal()
{
    name = " ";
    address = " ";
    age = 0;
    phoneNumber = 0;
};
//Constructor 1
Personal::Personal(string Name, string Address, int Age, int PhoneNumber)
{
    name = Name;
    address = Address;
    age = Age;
    phoneNumber = PhoneNumber;
};
void Personal::setName(string Name)
{
    name = Name;
};
void  Personal::setAddress(string Address)
{
    address = Address;
};
void  Personal::setAge(int Age)
{
    age = Age;
};
void  Personal::setPhoneNumber(int PhoneNumber)
{
    phoneNumber = PhoneNumber;
};
string  Personal::getName() const
{
    return name;
};
string  Personal::getAddress() const
{
    return address;
};
int  Personal::getAge() const
{
    return age;
};
int  Personal::getPhoneNumber() const
{
    return phoneNumber;
};