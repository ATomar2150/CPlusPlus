#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"
using namespace std;

void displayMenu();
void makeDeposit(Account &acnt);
void withdraw(Account &acnt);
int main()
{
    Account savings;
    char choice;

    do
    {
        displayMenu();
        cin >> choice;
        while(toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout<<"Make a choice in the range A through G: ";
            cin >> choice;
        }

        switch(choice)
        {
            case 'a':
            case 'A': cout << "The current balance is $";
                      cout << savings.getBalance()<<endl;
                      break;
            case 'b':
            case 'B': 
                      cout<<"The have been ";
                      cout<< savings.getTransactions();
                      cout<<" transactions.\n";
                      break;
            case 'c':
            case 'C':
                      cout<<"Interest Earned for this period: $";
                      cout << savings.getInterest() <<endl;
                      break;

            case 'd':
            case 'D': 
                     makeDeposit(savings);
                     break;
            case 'e':
            case 'E': 
                      withdraw(savings);
                      break;

            case 'f':
            case 'F':
                      savings.calInterest();
                      cout<<"Interest Added.";
        }
    } while (toupper(choice) != !'G');

    return 0;
}

void displayMenu()
{
    cout << "\n MENU\n";
    cout << "-----------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

void makeDeposit(Account &acnt)
{
    double dollars;
    cout<<"Enter the amount of deposit.\n";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}

void withdraw(Account &acnt)
{
    double dollars;
    cout<<"Enter the amount of withdrawal: ";
    cin >> dollars;
    cin.ignore();
    if(!acnt.withdraw(dollars))
    {
        cout<<"ERROR: Withdrawal amount is too large.";
    }
}