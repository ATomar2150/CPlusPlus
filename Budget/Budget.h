#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
    private:
            static double corpBudget;
            double divisionBudget;
    public:
            //Constructor
            Budget()
            {
                divisionBudget = 0;
            }
            //Memeber function addBudget
            void addBudget(double);
            double getDivisionBudget() const;
            double getCorpBudget() const;

};

#endif