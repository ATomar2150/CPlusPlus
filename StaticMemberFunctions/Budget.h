#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
    private:
            //static member variable
            static double corpBudget;
            double divisionBudget;

    public:
            Budget()
            {
                divisionBudget = 0;
            }

            double getDivisionBudget() const;
            double getCorpBudget() const;
            void addBudget(double);

            //static member functions
            static void mainOffice(double);
};
 
#endif