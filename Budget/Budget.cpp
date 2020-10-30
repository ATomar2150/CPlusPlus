#include "Budget.h"

    void Budget::addBudget(double b)
    {
        divisionBudget += b;
        corpBudget += b;
    }

    double Budget::getDivisionBudget() const
    {
        return divisionBudget;
    }

    double Budget::getCorpBudget() const
    {
        return corpBudget;
    }

    double Budget::corpBudget = 0;