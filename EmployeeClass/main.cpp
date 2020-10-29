#include <iostream>
#include "Employee.h"
using namespace std;

void displayEmployee(Employee e);

int main()
{
    //object emp1 is created
    Employee emp1("Susan Meyers",47899, "Accounting","Vice President");

    Employee emp2("Moark Jones",39119);
    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");

    Employee emp3;
    emp3.setName("Joy Rogers");
    emp3.setIdNumber(81774);
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");

    displayEmployee(emp1);
    displayEmployee(emp2);
    displayEmployee(emp3);

    return 0;
}

void displayEmployee(Employee e)
{
    cout<<"______________________________________________________________________________________"<<endl;
    cout<<"Name\t\tID Number\t\tDepartment\t\tPosition"<<endl;
    cout<<"______________________________________________________________________________________"<<endl;
    cout<<e.getName()<<"\t"<<e.getIdNumber()<<"\t\t\t"<<e.getDepartment()<<"\t\t\t"<<e.getPosition()<<endl;
    cout<<"______________________________________________________________________________________"<<endl;
    cout<<endl<<endl;
};