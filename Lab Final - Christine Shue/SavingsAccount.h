// CHRISTINE SHUE
// DECEMBER 13, 2016

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account
{
    public:
        SavingsAccount(double, double);

        double calculateInterest();

        void display();

        virtual ~SavingsAccount();

    protected:
        double interest;
    private:
};

#endif // SAVINGSACCOUNT_H
