// CHRISTINE SHUE
// OCTOBER 4, 2016


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

//*****************************************************
// Program is an initializing constructor             *
//*****************************************************

Program::Program(string c, string d, string ma, string mi)
{
    campus = c;
    degree = d;
    major = ma;
    minor = mi;
}

//*****************************************************
// void printProgram prints program information       *
//*****************************************************

void Program::printProgram () const
{
    cout << "CAMPUS: " << campus << endl;
    cout << "DEGREE: " << degree << endl;
    cout << "MAJOR: " << major << endl;
    cout << "MINOR: " << minor << endl;
    cout << endl << endl;
}
