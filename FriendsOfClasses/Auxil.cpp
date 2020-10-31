#include "Budget.h"
#include "Auxil.h"

AuxiliaryOffice::AuxiliaryOffice()
{
    auxBudget = 0;
}
double AuxiliaryOffice::getDivisionBudget() const
{
    return auxBudget;
}
void AuxiliaryOffice::addBudget(double b, Budget &div)
{
    auxBudget = b;
    div.corpBudget = div.corpBudget + b;
};