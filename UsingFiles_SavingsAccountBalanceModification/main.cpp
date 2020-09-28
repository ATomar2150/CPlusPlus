#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    int month;
    double annualInterest;
    double balance;
    double deposited;
    double withdrawn;
    double totalDeposit=0.0;
    double totalWithdraw=0.0;
    double earnedInterest=0.0;

    ofstream outputFile;
    outputFile.open("balance.txt");


    cout<<"============================================\n";
    cout<<"\t     :: Information ::\n";
    cout<<"This program collects some data from the\n";
    cout<<"user about operations done to a saving\n";
    cout<<"account; then, it presents some information\n";
    cout<<"derived from the data.\n";
    cout<<"============================================\n";
    cout<< "Please enter the annual interest rate\n";
    cin>> annualInterest;
    cout<<"-------------------------------------------------\n";
    cout<< "Please enter the starting balance.\n";

    do
    {
        cout<< "The number could not be negative\n";
        cin>> balance;
    }while(balance<0);

    cout<<"---------------------------------------------------\n";

    do
    {
        cout<<"Please number of months. The number could not be negative.\n";
        cin>> month;
    }while(month<0);

    cout<<"======================================================\n";

    for(int i=1; i<=month; i++)
    {
        cout<<"Enter the deposited value during the month "<<i<<endl;
        do
        {
            cout<<"Enter the deposited value, not less than 0\n";
            cin>>deposited;
        }while(deposited<0);

        totalDeposit += deposited;
        balance += deposited;

        cout<<"--------------------------------------------------------\n";
        do
        {
            cout<<"Enter the withdrawal amount.\n";
            cin>>withdrawn;

        }while(withdrawn<0);

        totalWithdraw += withdrawn;
        balance -= withdrawn;

        cout<<"----------------------------------------------------\n";

        if(balance<0)
        {
            cout<<"Sorry, the account has been closed due to the negative balance.\n";

        }
        else
        {
            earnedInterest += (annualInterest/12) * balance;
            balance += (annualInterest/12) * balance;
        }
        

    }

    cout<<"Here is the gathered statistics,\n";
    cout<<"The ending balance: "<<balance<<endl;
    cout<<"Total deposited: "<< totalDeposit<<endl;
    cout<<"Total withdrawals: "<< totalWithdraw<<endl;
    cout<<"Earned interest: "<< earnedInterest<<endl;
    cout<<"============================================\n";

    outputFile << balance <<endl;
    outputFile << totalDeposit <<endl;
    outputFile << totalWithdraw <<endl;
    outputFile << earnedInterest <<endl;
    outputFile.close();

    return 0;


}

