#include <iostream>
using namespace std;

int main () {
    int checks;
    double balance;
    const int SERVICEFEE_PER_MONTH = 10;
    double totalServiceFee;

    cout<< "What is your beginning balance: ";
    cin>> balance;
    cout<< "Number of checks written? ";
    cin>> checks;

    //input validation for checks and balance
    if (checks < 0 || balance < 0)
    {
        cout<<"Negative value for checks or accounts is not accepted" << endl;
        return 0;
    }

    if ( balance < 400 && checks >=0 )
    {
        
        if (checks < 20)
        {
            cout << ".10 is the rate/check. ";
            // If balance is less than 400 and additional $15 fee is applied and $10 is monthly fee.
            totalServiceFee = (checks * .10) + 15 + 10;
            cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
        }
        else if (20 <= checks <= 39)
        {
            cout << ".08 is the rate/check. ";
            // If balance is less than 400 and additional $15 fee is applied and $10 is monthly fee.
            totalServiceFee = (checks * .08) + 15 + 10;
            cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
        }
        else if (40 <= checks <= 59)
        {
            cout<< ".06 is the rate/check. ";
            // If balance is less than 400 and additional $15 fee is applied and $10 is monthly fee.
            totalServiceFee = (checks * .06) + 15 + 10;
            cout <<"Bank Service Fee for the month is: "<<totalServiceFee;
        }
        else {
            cout << ".04 is the rate/check. ";
            // If balance is greater than 400 only $10 is monthly fee.
            totalServiceFee = (checks * .04) + 10;
            cout <<"Bank Service Fee for the month is: "<<totalServiceFee;
        }
    }
    else 
    {
        if(checks >= 0){
            if (checks < 20)
            {
                cout<< ".10 is the rate/check. ";
                // If balance is greater than 400 only $10 is monthly fee.
                totalServiceFee = (checks * .10) + 10;
                cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
            }
            else if (20 <= checks <= 39)
            {
                cout<< ".08 is the rate/check. ";
                // If balance is greater than 400 only $10 is monthly fee.
                totalServiceFee = (checks * .08) + 10;
                cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
            }
            else if (40 <= checks <= 59)
            {
                cout<< ".06 is the rate/check. ";
                // If balance is greater than 400 only $10 is monthly fee.
                totalServiceFee = (checks * .06) + 10;
                cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
            }
            else if (checks >= 60)
            {
                cout<< ".04 is the rate/check. ";
                // If balance is greater than 400 only $10 is monthly fee.
                totalServiceFee = (checks * .04) + 10;
                cout<<"Bank Service Fee for the month is: "<<totalServiceFee;
            }
            else {
                cout << "No checks used." << endl;
            }
        }
        else {
            cout<<"Cannot process your request.";
        }

    }
    return 0;
}