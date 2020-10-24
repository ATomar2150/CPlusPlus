#include <iostream>
using namespace std;

//Anonymus union , in this unionis defined in main() function.
int main()
{

    union
    {
        int hours;
        float sales;
    };

    char payType;
    double payRate;
    double grossPay;
    double commission;
    cout<<"We will determine the hourly wages or commision rates.\n";
    cout<<"Please enter the Paytype.\n";

    cin >> payType;

    if(payType == 'H'||payType == 'h')
    {
        cout<<"What is the hourly pay rate?\n";
        cin >> payRate;
        cout<<"How many hours the employee worked.\n";
        cin >> hours;

        grossPay = hours * payRate;
        cout<<"The gross Pay is: "<<grossPay<<endl;
    }
    else if(payType == 'C' || payType == 'c')
    {
        cout<<"What is the total sales for employee?\n";
        cin >> sales;
        commission = sales * 10;
        cout<<"The gross Pay is: "<<commission<<endl;
    }
    else
    {
        {
            cout<<"USER MADE INVALID SELECTION\n";
        }
    }
    
    return 0;
}



/*********************************************************************/

//Union is not anonymous

// union PaySource
// {
//     int hours;
//     float sales;
// };


// int main()
// {
//     PaySource employees;
//     char payType;
//     double payRate;
//     double grossPay;
//     double commission;
//     cout<<"We will determine the hourly wages or commision rates.\n";
//     cout<<"Please enter the Paytype.\n";

//     cin >> payType;

//     if(payType == 'H'||payType == 'h')
//     {
//         cout<<"What is the hourly pay rate?\n";
//         cin >> payRate;
//         cout<<"How many hours the employee worked.\n";
//         cin >> employees.hours;

//         grossPay = employees.hours * payRate;
//         cout<<"The gross Pay is: "<<grossPay<<endl;
//     }
//     else if(payType == 'C' || payType == 'c')
//     {
//         cout<<"What is the total sales for employee?\n";
//         cin >> employees.sales;
//         commission = employees.sales * 10;
//         cout<<"The gross Pay is: "<<commission<<endl;
//     }
//     else
//     {
//         {
//             cout<<"USER MADE INVALID SELECTION\n";
//         }
//     }
    
//     return 0;
// }