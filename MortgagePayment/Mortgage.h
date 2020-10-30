#ifndef MORTGAGE_H
#define MORTGAGE_H

class Mortgage
{
    private:
            int years;
            double rate;
            double loan;
    public:
            Mortgage();
            void setYears(int);
            void setRate(double);
            void setLoan(double);
            int getYears() const;
            double getRate() const;
            double getLoan() const;
};

#endif