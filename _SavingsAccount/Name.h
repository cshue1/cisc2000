//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

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
    public:
        Name();
        void setName(std::string fn, std::string ln);
        void printName()const;
};

#endif // NAME_H
