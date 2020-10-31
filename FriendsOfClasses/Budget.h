#ifndef BUDGET_H
#define BUDGET_H
#include "Auxil.h"

class Budget
{
  private:
            double divisionBudget;
            //static variable
            static double corpBudget;
  public:
            Budget();

            //accessor function for divisionBudget
            double getDivisionBudget() const;
           
            double getCorpBudget() const;

            //normal function
            void addBudget(double);

            //static function call
            static void mainOffice(double);

            //friend function
            friend void AuxiliaryOffice::addBudget(double, Budget &);

};

#endif