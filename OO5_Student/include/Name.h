// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

//*********************************************************************
// class Name saves all of the variables and functions related        *
// to storing and displaying Name information                         *
//*********************************************************************

#ifndef NAME_H
#define NAME_H
#include <string>

class Name
{
    private:
        std::string firstName;
        std::string lastName;
        char middleInit;
    public:
        Name();
        void setName(std::string fn, std::string ln, char mi);
        void printName()const;
};

#endif // NAME_H
