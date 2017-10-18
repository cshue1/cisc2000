// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

#include "Program.h"
#include <string>
#include <iostream>

using namespace std;

//*****************************************
// Program is a default constructor       *
//*****************************************

Program::Program()
{
    campus = "RH";
    degree = "BS";
    major = "UNDECLARED";
    minor = "NONE";
}

//*******************************************************************
// void setProgram stores user values into Program members          *
//*******************************************************************

void Program::setProgram(string c, string d, string ma, string mi)
{
    campus = c;
    degree = d;
    major = ma;
    minor = mi;
}

//*****************************************************
// void printProgram prints Program information       *
//*****************************************************

void Program::printProgram () const
{
    cout << "\tCAMPUS:\t" << campus << endl;
    cout << "\tDEGREE:\t" << degree << endl;
    cout << "\tMAJOR:\t" << major << endl;
    cout << "\tMINOR:\t" << minor << endl;
    cout << endl << endl;
}
