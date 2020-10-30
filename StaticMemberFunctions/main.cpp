#include <iostream>
#include "Budget.h"
using namespace std;

//The program demostrates the static member function.
int main()
{
    double mainOfficeRequest;
    const int NUM_DIVISIONS = 4;

    cout<<"Enter the main office budget request.\n";
    cin >> mainOfficeRequest;

    Budget::mainOffice(mainOfficeRequest);

    Budget divisions[NUM_DIVISIONS];

    for(int i = 0; i < NUM_DIVISIONS; i++)
    {
        double budgetAmount;
        cout<<"Enter the budget request.\n";
        cin >> budgetAmount;
        divisions[i].addBudget(budgetAmount);
    }

    for(int i = 0; i<NUM_DIVISIONS; i++)
    {
        cout<<"Display the budget Requests.\n";
        cout<<divisions[i].getDivisionBudget()<<endl;
    }

    cout<<"Total Budget Request.\n";
    cout<< divisions[0].getCorpBudget()<<endl;


    return 0;
}