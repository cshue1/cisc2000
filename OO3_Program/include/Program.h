// CHRISTINE SHUE
// OCTOBER 4, 2016


//************************************************************************
// the Program class saves all of the variables and functions related    *
// to storing and displaying program information                         *
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
        Program(std::string, std::string, std::string, std::string);
        void printProgram() const;
};

#endif // PROGRAM_H
