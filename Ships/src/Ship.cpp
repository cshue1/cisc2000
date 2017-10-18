#include "Ship.h"
#include <iostream>

using namespace std;

Ship::Ship()
{
    name = "DEFAULT";
    year = "0000";
}

Ship::Ship(std::string theName, std::string theYear)
{
    name = theName;
    year = theYear;
}

void Ship::printInfo()
{
    cout << "\tName: " << name << "\t";
    cout << "\tYear: " << year << endl;
}

Ship::~Ship()
{
    //dtor
}
