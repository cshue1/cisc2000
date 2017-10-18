// CHRISTINE SHUE
//SEPTEMBER 30, 2016

#include "Name.h"
#include <iostream>

using namespace std;

//*********************************************************
// This program asks for the user's name and greets them. *
//*********************************************************


int main()
{
    Name defaultName;
    string fn, ln;
    char mi;

    defaultName.printName();
    cout << "Please enter your first name: ";
    cin >> fn;
    cout << "Please enter your middle initial: ";
    cin >> mi;
    cout << "Please enter your last name: ";
    cin >> ln;


    Name person1 (fn,ln,mi);
    person1.printName();

    return 0;
}
