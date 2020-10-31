#ifndef AUXIL_H
#define AUXIL_H

class Budget;

class AuxiliaryOffice
{
    private:
            double auxBudget;
    public:
            AuxiliaryOffice();
            
            double getDivisionBudget() const;
            void addBudget(double, Budget &);

};
#endif