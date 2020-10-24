#include <iostream>
#include <string>

using namespace std;

struct Date
{
    string month;
    string day;
    string year;
};

struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;
    Place residence;
};


int main()
{
    EmployeeInfo manager;
    cout<<"Enter the employee name: "<<endl;
    getline(cin, manager.name);

    cout<<"Enter the employee number: "<<endl;
    cin>> manager.employeeNumber;

    cout<<"Now get the manager birthday day: "<<endl;
    cin.ignore();
    getline(cin,manager.birthDate.day);

    cout<<"Now get the manager birthday month: "<<endl;
    getline(cin, manager.birthDate.month);

    cout<<"Now get the manager birthday year: "<<endl;
    getline(cin,manager.birthDate.year);

    cout<<"Now enter the Manager address: "<<endl;
    getline(cin, manager.residence.address);

    cout<<"Here is the final Information.\n";
    cout<<manager.name<<endl;
    cout<<manager.employeeNumber<<endl;
    cout<<manager.birthDate.day<<" "<<manager.birthDate.month<<" "<<manager.birthDate.year<<endl;
    cout<<manager.residence.address<<endl;
    return 0;
}