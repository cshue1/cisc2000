#include "CargoShip.h"
#include <iostream>

using namespace std;

CargoShip::CargoShip(std::string theName,std::string theYear,int ton):Ship(theName,theYear)
{
    tonnage = ton;
}

void CargoShip::printInfo()
{
    cout << "\tName: " << name;
    cout << "\tTonnage: " << tonnage << " tons" << endl;
}

CargoShip::~CargoShip()
{
    //dtor
}
