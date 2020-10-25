#include <iostream>
using namespace std;

struct MonthlyBudget
{
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

void checkExpenditure(MonthlyBudget &exp, MonthlyBudget goal);
void checkingDifference(MonthlyBudget goal, MonthlyBudget &exp);

int main()
{
    MonthlyBudget goal = {500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00};

    MonthlyBudget exp;
    cout<<"Enter the data for given month.\n";
    checkExpenditure(exp, goal);

    cout <<"Checking the difference\n"<<endl;
    checkingDifference(goal, exp);

    return 0;
}

void checkExpenditure(MonthlyBudget &exp, MonthlyBudget goal)
{
   double budgetUser = 0.0;
   double budgetDecidedBYExpense;
   
   cout<<"Housing: ";
   cin >> exp.housing;
   cout<<"Utilities: ";
   cin >> exp.utilities;
   cout<<"HouseHold Expenses: ";
   cin >> exp.householdExpenses;
   cout << "Transportation: ";
   cin >> exp.transportation;
   cout << "Food: ";
   cin >> exp.food;
   cout << "Medical: ";
   cin >> exp.medical;
   cout << "Insurance: ";
   cin >> exp.insurance;
   cout << "Entertainment: ";
   cin >> exp.entertainment;
   cout<< "Clothing: ";
   cin >> exp.clothing;
   cout << "Miscellanuous: ";
   cin >> exp.miscellaneous;

   budgetUser = exp.housing + exp.utilities + exp.householdExpenses + exp.transportation + exp.food + exp.medical + exp.insurance + exp.entertainment + exp.clothing + exp.miscellaneous;
   budgetDecidedBYExpense = goal.housing + goal.utilities + goal.householdExpenses + goal.transportation + goal.food + goal.medical + goal.insurance + goal.entertainment + goal.clothing + goal.miscellaneous;
   double diffInBudget = budgetDecidedBYExpense - budgetUser;
   if(diffInBudget < 0)
   {
       cout<< "Overspent this month"<<endl;
   } 
   else
   {
       cout<<"Underspent this month"<<endl;
   }
   
};

void checkingDifference(MonthlyBudget goal, MonthlyBudget &exp)
{
    double houseDiff = goal.housing - exp.housing;
    if(houseDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double utilitiesDiff = goal.utilities - exp.utilities;
     if(utilitiesDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double houseHoldExpensesDiff = goal.householdExpenses - exp.householdExpenses;
     if(houseHoldExpensesDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double transportationDiff = goal.transportation - exp.transportation;
     if(transportationDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double foodDiff = goal.food - exp.food;
     if(foodDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double medicalDiff = goal.medical - exp.medical;
     if(medicalDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double insuranceDiff = goal.insurance - exp.insurance;
     if(insuranceDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double entertainmentDiff = goal.entertainment - exp.entertainment;
     if(entertainmentDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double clothingDiff = goal.clothing - exp.clothing;
     if(clothingDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

    double miscellaneousDiff = goal.miscellaneous - exp.miscellaneous;
     if(miscellaneousDiff < 0)
    {
        cout <<"Over Budget"<<endl;
    }
    else
    {
        cout<<"Under Budget"<<endl;
    }

}
