// CHRISTINE SHUE
// DECEMBER 13, 2016

#include "CheckingsAccount.h"
#include <iostream>
using namespace std;

CheckingsAccount::CheckingsAccount(double bal, double charge) : Account(bal)
{
    fee = charge;
}

void CheckingsAccount::deposit(double add)
{
    Account::deposit(add);
    balance -= fee;
}

void CheckingsAccount::withdraw(double subtr)
{
    double temp = balance;
    Account::withdraw(subtr);
    if (balance < temp)
        balance -= fee;
}

void CheckingsAccount::display()
{
    cout << "Regular account: " << accountNumber << ", balance: $" << balance << ", transaction fee: $" << fee << endl;
}

CheckingsAccount::~CheckingsAccount()
{
    //dtor
}
