//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

#include "SavingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

int SavingsAccount::accountNumber = 0;
const double SavingsAccount::annualInterestRate = 0.05;
SavingsAccount::SavingsAccount()
{
    Name customer();
    accountNumber = 0;
    savingsBalance = 0.00;
}

SavingsAccount::SavingsAccount(std::string fn, std::string ln, double bal)
{
    customer.setName(fn,ln);
    accountNumber++;
    savingsBalance = bal;
}
void SavingsAccount::setOpenDate()
{
    openDate.setDate(10,18,2016);
}
int SavingsAccount::getAccountNumber()const
{
    return accountNumber;
}
void SavingsAccount::getAccountName() const
{
    return customer.printName();
}
void SavingsAccount::getAccountDate()const
{
    openDate.printDate();
}
double SavingsAccount::getAccountBalance()const
{
    return savingsBalance;
}
double SavingsAccount::getYearlyInterest()const
{
    return (savingsBalance * annualInterestRate);
}
