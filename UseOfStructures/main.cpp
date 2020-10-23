#include <iostream>
#include <string>
using namespace std;

struct Payroll
{
    //members
    int employeeNumber;
    string name;
};

int main()
{
    Payroll employee; //employee is variable of datatype Payroll, which is a struct

    cout<<"Get the employee numbers.\n";
    cin >> employee.employeeNumber;

    cout<<"Enter the employee name: ";
    cin.ignore(); //to skip the remaining \n character.
    getline(cin,employee.name);

    cout<<"The employee number is: "<<employee.employeeNumber<<endl;
    cout<<"The employee name is: "<<employee.name<<endl;


    return 0;
}