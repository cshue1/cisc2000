// CHRISTINE SHUE
// DECEMBER 13, 2016

#ifndef CHECKINGSACCOUNT_H
#define CHECKINGSACCOUNT_H

#include "Account.h"

class CheckingsAccount : public Account
{
    public:
        CheckingsAccount(double,double);

        void deposit(double);
        void withdraw(double);

        void display();

        virtual ~CheckingsAccount();

    protected:
        double fee;
    private:
};

#endif // CHECKINGSACCOUNT_H
