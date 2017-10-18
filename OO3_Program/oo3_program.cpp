// CHRISTINE SHUE
// OCTOBER 4, 2016


#include "Program.h"
#include <iostream>
#include <string>

using namespace std;

//***********************************************************************************
// This program reads a user's program information, stores it in an object, and     *
// prints out the information.                                                      *
//***********************************************************************************

int main()
{
    Program defaultProg;
    string c,d,ma,mi;

    defaultProg.printProgram();
    cout << "Please enter your campus (LC, RH, WC): ";
    cin >> c;
    cout << "Please enter your intended degree (BA or BS): ";
    cin >> d;
    cout << "Please enter your intended major: ";
    cin.ignore();
    getline(cin, ma);
    cout << "Please enter your intended minor: ";
    getline(cin, mi);
    cout << endl << endl;

    Program myProgram (c,d,ma,mi);
    myProgram.printProgram();
    return 0;
}
