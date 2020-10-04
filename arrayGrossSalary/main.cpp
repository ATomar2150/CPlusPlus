#include <iostream>
using namespace std;

int main()
{
    int employee[5];
    int count;
    

    for(count = 0; count <= 5; count++)
    {
        cout << "Please enter the hourly rate+ of employees.\n";
        cin >> employee[count];
        double hoursWorked;
        cout<< "Please enter the hours worked by employees.\n";
        cin>> hoursWorked;
        double wages = hoursWorked * employee[count];
        cout<<"The wage of employee "<<(count+1)<<" is: "<<wages<<endl;
    }

        
    return 0;
}