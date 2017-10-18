// CHRISTINE SHUE
//SEPTEMBER 30, 2016

#include "Name.h"
#include <iostream>

using namespace std;


//*********************************************
// Name is a default constructor.             *
//*********************************************
Name::Name()
{
    firstName = "FirstName";
    lastName = "LastName";
    midInit = 'M';
}

//*********************************************
// Name is an initialization constructor.     *
//*********************************************
Name::Name(string fn, string ln, char mi)
{
    firstName = fn;
    lastName = ln;
    midInit = mi;
}

//*******************************************************
// printName greets the user with their full name.      *
//*******************************************************
void Name::printName()const
{
    cout << "Hello, ";
    cout << firstName << " ";
    cout << midInit << ". ";
    cout << lastName << "!" << endl << endl;
}
