#include <iostream>
using namespace std;

const double REGULAR_HOURS = 40.0;
const double BASE_SALARY_RATE = 24.0;
const double OVERTIME_SALARY_RATE= 26.0;

double getBaseSalary(double, double);
double getOvertimeSalary(double, double);
double maxSalary(double, double);

int main()
{   
    double hoursWorked;
    double totalSalary;
    double baseSalary;
    double overtimeSalary;
    double overtimeHours;
    double maximumSalary;

    cout << "Please enter the number of hours worked by the employee.\n";
    cin >> hoursWorked;

    if(hoursWorked <= REGULAR_HOURS){
        baseSalary = getBaseSalary(hoursWorked, BASE_SALARY_RATE);
        cout<<"The total salary is: "<<baseSalary<<endl;
    }

    if (hoursWorked > REGULAR_HOURS){
        maximumSalary = maxSalary(REGULAR_HOURS, BASE_SALARY_RATE);
        cout<<"The max base salary is: "<< maximumSalary<<endl;
        overtimeHours = hoursWorked - 40.0;
        overtimeSalary = getOvertimeSalary(overtimeHours, OVERTIME_SALARY_RATE);
        cout<<"The overtime salary is: "<<overtimeSalary<<endl;
        totalSalary = maximumSalary + overtimeSalary;
        cout<<"The total salary including overtime and base SALARY is: "<<totalSalary<<endl;
    }
 
    return 0;

}

double getBaseSalary(double basehours, double salary )
{
    return basehours * salary;
}

double maxSalary(double regHours, double salary){
    return regHours * salary;
}
 
double getOvertimeSalary(double overhours, double salary)
{
    return overhours * salary;
}
