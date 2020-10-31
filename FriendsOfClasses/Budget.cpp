#include "Budget.h"
#include "Auxil.h"

Budget::Budget()
{
    divisionBudget = 0;
}

double Budget::corpBudget = 0;

double Budget::getDivisionBudget() const
{
    return divisionBudget;
};
double Budget::getCorpBudget() const
{
     return corpBudget;
};

void Budget::addBudget(double b)
{
    divisionBudget = b;
    corpBudget = corpBudget + b;
};

void Budget::mainOffice(double mOffice)
{
    corpBudget = corpBudget + mOffice;
};