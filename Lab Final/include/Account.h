// CHRISTINE SHUE
// DECEMBER 13, 2016

#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        Account();
        Account(double);

        virtual void deposit(double);
        virtual void withdraw(double);
        double getBalance();

        virtual void display();
        Account& operator+(double);

        virtual ~Account();

    protected:
        static int accountsCreated;
        double balance;
        int accountNumber;

    private:
};

#endif // ACCOUNT_H
