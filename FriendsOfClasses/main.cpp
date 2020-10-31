#include <iostream>
#include "Budget.h"
using namespace std;

int main()
{
    double mainOfficeRequest;
    const int NUM_DIVISION = 4;

    cout<<"Enter the main office's budget request: ";
    cin >> mainOfficeRequest;

    //static function deined in Budget.h
    Budget::mainOffice(mainOfficeRequest);

    Budget divisions[NUM_DIVISION];
    AuxiliaryOffice auxOffices[4];

    //Get the budget for eah division of auxilliary office.
    for(int i = 0; i < NUM_DIVISION; i++)
    {
        double budgetAmount;

        cout<<"Enter the budget for the division.\n";
        cin >> budgetAmount;
        divisions[i].addBudget(budgetAmount);

        cout<<"Enter the budget for auxiliary division.\n";
        cin >> budgetAmount;
        auxOffices[i].addBudget(budgetAmount, divisions[i]);
    }

    //Display the budget requests and corporate requests
    for(int i = 0; i < NUM_DIVISION; i++)
    {

        cout<<"Budget for the division.\n";

        cout<<divisions[i].getDivisionBudget()<<endl;

        cout<<"Budget for auxiliary division.\n";
        cout<<auxOffices[i].getDivisionBudget()<<endl;
    }

    cout<<"Total Budget for Corporate\n";
    cout<<divisions[0].getCorpBudget()<<endl;

    return 0;
}