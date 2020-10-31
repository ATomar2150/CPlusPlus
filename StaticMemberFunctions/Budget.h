#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
    private:
            //static member variable
            static double corpBudget;

            //member variable
            double divisionBudget;

    public:
            //default constructor
            Budget()
            {
                divisionBudget = 0;
            }

            //member function
            
            double getDivisionBudget() const;
            double getCorpBudget() const;
            void addBudget(double);

            //static member functions
            static void mainOffice(double);
};
 
#endif