// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

//************************************************************************
// class Program saves all of the variables and functions related        *
// to storing and displaying Program information                         *
//************************************************************************

#ifndef PROGRAM_H
#define PROGRAM_H
#include <string>

class Program
{
    private:
        std::string campus;
        std::string degree;
        std::string major;
        std::string minor;

    public:
        Program();
        void setProgram(std::string, std::string, std::string, std::string);
        void printProgram()const;
};

#endif // PROGRAM_H
