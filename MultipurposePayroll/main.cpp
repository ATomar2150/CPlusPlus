#include <iostream>
using namespace std;

struct Hourly
{
    int hoursWorked;
    double hourlyRate;
};

struct Salaried
{
    int salary;
    int bonus;
};

union Member 
{
    Hourly hour;
    Salaried sal;
};

int main()
{
    Member payChoice;
    char entry;
    double total;
    double salTotal;
    cout<<"Are your Calculating the pay for hourly paid worker or a salaried worker."<<endl;
    cout<<"Please Enter (H OR S)"<<endl;
    cin >> entry;

    if(entry == 'H')
    {
        cout<<"Enter the Hourly Rate."<<endl;
        cin >> payChoice.hour.hourlyRate;
        cout<<"Enter the hours worked."<<endl;
        cin >> payChoice.hour.hoursWorked;
    }
    else if(entry == 'S')
    {
        cout<<"Enter the regular Salary."<<endl;
        cin >> payChoice.sal.salary;
        cout<<"Enter the bonus."<<endl;
        cin >> payChoice.sal.bonus;
    }

    switch(entry)
    {
        case 'H':
            cout<<"Hourly Total: \n";
            total = payChoice.hour.hourlyRate * payChoice.hour.hoursWorked;
            cout<<total;
            break;

        case 'S':
            cout<<"Salaried Total: \n";
            salTotal = payChoice.sal.salary + payChoice.sal.bonus;
            cout<<salTotal;
            break;
    }
    return 0;
}