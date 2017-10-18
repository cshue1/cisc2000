// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

//*****************************************
// Student is a default constructor       *
//*****************************************

Student::Student()
{
    studID = 00000;
    gender = 'F';
    Name name();
    Date date();
    Program program();
}

//*****************************************
// Student is an initializing constructor *
//*****************************************

Student::Student(int id, char g,
                 string fn, string ln, char mi,
                 int bm , int bd, int by,
                 string campus, string degree, string major, string minor)
{
    studID = id;
    gender = g;
    name.setName(fn, ln, mi);
    date.setDate(bm, bd, by);
    program.setProgram(campus,degree,major,minor);
}

//*****************************************************
// void printStudent prints Student information       *
//*****************************************************

void Student::printStudent() const
{
    cout << "STUDENT ID:\t" << studID << endl;
    cout << "NAME:\t\t";
    name.printName();
    cout << "GENDER:\t\t" << gender << endl;
    cout << "DOB:\t\t";
    date.printDate();
    cout << "PROGRAM:" << endl;
    program.printProgram();
    cout << endl;
}
