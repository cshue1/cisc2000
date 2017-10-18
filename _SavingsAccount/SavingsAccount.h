//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <string>
#include "Date.h"
#include "Name.h"

class SavingsAccount
{
    private:
        Name customer;
        Date openDate;
        static const double annualInterestRate;
        static int accountNumber;
        double savingsBalance;
    public:
        SavingsAccount();
        SavingsAccount(std::string fn, std::string ln, double bal);
        void setOpenDate();
        int getAccountNumber()const;
        void getAccountName()const;
        void getAccountDate()const;
        double getAccountBalance()const;
        double getYearlyInterest()const;

};

#endif // SAVINGSACCOUNT_H
