//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

#include <iostream>
#include <string>
#include <iomanip>

#include "SavingsAccount.h"

using namespace std;

const int MAX_ACCTS = 3;

int main()
{
    string fn,ln;
    double bal;
    int accountNum[MAX_ACCTS];
    double interest[MAX_ACCTS],balance[MAX_ACCTS];


    SavingsAccount * svgsAcct;
    svgsAcct = new SavingsAccount[MAX_ACCTS];

    for (int i = 0; i < MAX_ACCTS; i++)
    {
        cout <<"Enter customer name (First Last): ";
        cin >> fn >> ln;
        cout << "Enter starting balance: ";
        cin >> bal;
        new(&svgsAcct[i]) SavingsAccount(fn,ln,bal);
        balance[i] = svgsAcct[i].getAccountBalance();
        accountNum[i] = svgsAcct[i].getAccountNumber();
        interest[i] = svgsAcct[i].getYearlyInterest();
        svgsAcct[i].setOpenDate();
    }
    cout << fixed << showpoint << setw(8);
    cout << "Account " << "Date Opened " << "\t\tCustomer " << "\tCurrent Balance" << "\tYearly Interest" << endl;
    for (int i = 0; i < MAX_ACCTS; i++)
    {
        cout << setw(7) << accountNum[i];
        cout << setw(3);
        svgsAcct[i].getAccountDate();
        cout << " \t";
        svgsAcct[i].getAccountName();
        cout << " \t";
        cout << setprecision(2)<< setw(15) << balance[i];
        cout << setprecision(2)<< setw(15) << interest[i];
        cout << endl;
    }
    delete []svgsAcct;
    return 0;
}
