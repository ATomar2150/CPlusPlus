#include "Budget.h"


double Budget::getDivisionBudget() const
{
    return divisionBudget;
}

double Budget::getCorpBudget() const
{
    return corpBudget;
}

//static member function initiation
double Budget::corpBudget = 0;

void Budget::mainOffice(double moffice)
{
    corpBudget = corpBudget + moffice;
}

void Budget::addBudget(double b)
{
    divisionBudget = b;
    corpBudget += b;
}