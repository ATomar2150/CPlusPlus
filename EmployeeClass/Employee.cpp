#include "Employee.h"
#include <string>
using namespace std;

//constructor_1
Employee::Employee(string n, int id, string d, string p)
{
    name = n;
    idNumber = id;
    department = d;
    position = p;
};
//constructor_2
Employee::Employee(string n, int id)
{
    name = n;
    idNumber = id;
    department = " ";
    position = " ";
};
//default Constructor
Employee::Employee()
{
    name = " ";
    idNumber = 0;
    department = " ";
    position = " ";
};
void Employee::setName(string n)
{
    name = n;
};
void Employee::setIdNumber(int id)
{
    idNumber = id;
};
void Employee::setDepartment(string d)
{
    department = d;
};
void Employee::setPosition(string p)
{
    position = p;
};
string Employee::getName() const
{
    return name;
};
int Employee::getIdNumber() const
{
    return idNumber;
};
string Employee::getDepartment() const
{
    return department;
};
string Employee::getPosition() const
{
    return position;
};