#include "Mortgage.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double loan;
    int year;
    double rate;
    double payment;
    long double term;

    Mortgage mortgageObj;

    cout<<"Please enter the LOAN AMOUNT taken: ";
    cin >> loan;

    cout<<"Please enter the RATE OF INTEREST: ";
    cin >> rate;

    cout<<"Please enter the total YEARS for which the loan is taken: ";
    cin >> year;

    mortgageObj.setLoan(loan);
    mortgageObj.setRate(rate);
    mortgageObj.setYears(year);

    double L = mortgageObj.getLoan();
  
    double R = mortgageObj.getRate();

    int Y = mortgageObj.getYears();
    

    int y = 12 * Y;
    double r = (1 + R/12);
    term = pow(r,y);
    
    payment = (L * R/12 *  term) / (term - 1);

    cout<<"Monthly Payment: "<<payment<<endl;
    cout<<"Total Amount to the bank at the end of loan period: "<<payment * y<<endl;

    return 0;
}