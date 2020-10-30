#include <iostream>
#include "Budget.h"

using namespace std;

int main()
{
    const int NUM_DIVISIONS = 4;
    Budget divisions[NUM_DIVISIONS];

    //Get the budget request for each divisions.
    for(int i = 0; i < NUM_DIVISIONS; i++)
    {
        double budgetAmount;
        cout<<"Enter the budget request for divisions ";
        cout<<(i+1)<<" : ";
        cin >> budgetAmount;
        divisions[i].addBudget(budgetAmount);
    }

    //Display the budget request for each divisions
    for(int i = 0; i < NUM_DIVISIONS; i++)
    {
        cout<<"DIVISION "<<(i+1)<<" : "<<endl;
        cout<< divisions[i].getDivisionBudget()<<endl;
    }

    cout<<"Total Budget Requests: $";
    cout<<divisions[3].getCorpBudget()<<endl;

    return 0;
}