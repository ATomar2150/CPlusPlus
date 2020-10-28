//Constructor: Takes arguments to be initially stored in the balance and interestRate members. The default value for the balance is zero and
// the default value for the interest rate is 0.045.

// setInterestRate: Takes a double argument which is stored in the interestRate member.

// makeDeposit: Takes a double argument, which is the amount of the deposit. This argument is added to balance .

// withdraw: Takes a double argument which is the amount of the withdrawal. This value is subtracted from the balance, unless the withdrawal amount is
// greater than the balance. If this happens, the function reports an error.

// calcInterest: Takes no arguments. This function calculates the amount of interest for the current period, stores this value in the interest member, and then
// adds it to the balance member.

// getInterestRate: Returns the current interest rate (stored in the interestRate member).

// getBalance: Returns the current balance (stored in the balance member).

// getInterest: Returns the interest earned for the current period (stored in the interest member).

// getTransactions: Returns the number of transactions for the current period (stored in the transactions member).

#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
    private:
            double balance;
            double interestRate;
            double interest;
            int transaction;
    public:
            Account(double iRate = 0.045, double bal = 0)
            {
                balance = bal;
                interestRate = iRate;
                interest = 0;
                transaction = 0;
            }

    void setInterestrate(double iRate)
    {
        interest = iRate;
    }
    void makeDeposit(double amount)
    {
        balance = balance + amount;
        transaction++;
    }
    bool withdraw(double amount);

    void calInterest()
    {
        interest = balance * interestRate;
        balance = balance + interest;
    }

    double getInterestrate() const
    {
        return interestRate;
    }

    double getBalance() const
    {
        return balance;
    }

    double getInterest() const
    {
        return interest;
    }

    int getTransactions() const
    {
        return transaction;
    }

};

#endif