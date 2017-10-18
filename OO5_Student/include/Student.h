// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

//********************************************************************************
// class Student stores and prints all of the information that the user inputs   *
// regarding the student's information.                                          *
//********************************************************************************


#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Name.h"
#include "Date.h"
#include "Program.h"

class Student
{
    private:
        int studID;
        char gender;
        Name name;
        Date date;
        Program program;

    public:
        Student();
        Student(int id, char g, std::string fn, std::string ln, char mi,int bm , int bd, int by,
        std::string campus, std::string degree, std::string major, std::string minor);
        void printStudent() const;
};

#endif // STUDENT_H
