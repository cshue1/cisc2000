// CHRISTINE SHUE
// DECEMBER 13, 2016

#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
    balance = 0.00;
    accountsCreated ++;
    accountNumber = accountsCreated;
}

Account::Account(double bal)
{
    balance = bal;
    accountsCreated ++;
    accountNumber = accountsCreated;
}

void Account::deposit(double add)
{
    balance += add;
}

void Account::withdraw(double subtr)
{
    if (balance - subtr < 0)
        cout << "Debit amount exceeded account balance." << endl;
    else
        balance -= subtr;
}

double Account::getBalance()
{
    return balance;
}

Account &Account::operator+(double add)
{
    deposit(add);
}

void Account::display()
{
    cout << "Regular account: " << accountNumber << ", balance: $" << balance << endl;
}

Account::~Account()
{
    //dtor
}

int Account::accountsCreated = 1000;
