// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

#include "Name.h"
#include <string>
#include <iostream>

using namespace std;

//**************************************
// Name is a default constructor       *
//**************************************

Name::Name()
{
    firstName = "First Name";
    lastName = "Last Name";
    middleInit = 'M';
}

//****************************************************************
// void setName stores user values into Program members          *
//****************************************************************

void Name::setName(std::string fn, std::string ln, char mi)
{
    firstName = fn;
    lastName = ln;
    middleInit = mi;
}

//***********************************************
// void printName prints Name information       *
//***********************************************

void Name::printName()const
{
    cout << firstName << " " << middleInit << ". " << lastName << endl;
}
