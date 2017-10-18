// CHRISTINE SHUE
//SEPTEMBER 30, 2016

#ifndef NAME_H
#define NAME_H
#include <string>

using namespace std;

//**************************************************************************************
// The class Name stores all of the variables and the functions that are related to    *
// storing the user's name.                                                            *
//**************************************************************************************


class Name
{

    private:
        string firstName;
        string lastName;
        char midInit;

    public:
        Name();
        Name(string, string, char);
        void printName() const;

};

#endif // NAME_H
