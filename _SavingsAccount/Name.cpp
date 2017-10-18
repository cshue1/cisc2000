//  CHRISTINE SHUE
//  OCTOBER 18, 2016
//  MIDTERM EXAM

#include "Name.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

//**************************************
// Name is a default constructor       *
//**************************************

Name::Name()
{
    firstName = "First Name";
    lastName = "Last Name";
}

//****************************************************************
// void setName stores user values into Program members          *
//****************************************************************

void Name::setName(std::string fn, std::string ln)
{
    firstName = fn;
    lastName = ln;
}

//***********************************************
// void printName prints Name information       *
//***********************************************

void Name::printName()const
{
    cout << setw(10)<< firstName << " " << lastName;
}
