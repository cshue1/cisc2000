// CHRISTINE SHUE
// DECEMBER 13, 2016

#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double bal, double rate) : Account(bal)
{
    interest = rate;
}

double SavingsAccount::calculateInterest()
{
    return balance * interest;
}

void SavingsAccount::display()
{
    cout << "Savings account: " << accountNumber << ", balance: $" << balance << ", interest rate = %" << interest << endl;
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}
