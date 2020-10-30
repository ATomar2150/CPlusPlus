#include "Mortgage.h"
#include <iostream>

using namespace std;

Mortgage::Mortgage()
{
    years = 0;
    rate = 0.0;
    loan = 0.0;
};
void Mortgage::setYears(int y)
{
    years = y;
};
void Mortgage::setRate(double r)
{
    rate = r;
};
void Mortgage::setLoan(double l)
{
    if(l > 0)
    {
        loan = l;
    }
    else 
    {
        cout<<"Error Please enter the positive loan amount.\n";
        cin >> l;
        loan = l;
    }
    
};
int Mortgage::getYears() const
{
    return years;
};
double Mortgage::getRate() const
{
    return rate;
};
double Mortgage::getLoan() const
{
    return loan;
};