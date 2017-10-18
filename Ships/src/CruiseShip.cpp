#include "CruiseShip.h"
#include <iostream>

using namespace std;

CruiseShip::CruiseShip(std::string theName,std::string theYear,int passen):Ship(theName,theYear)
{
    passengers = passen;
}
void CruiseShip::printInfo()
{
    cout << "\tName: " << name;
    cout << "\tPassengers: " << passengers << " passengers"  <<endl;
}
CruiseShip::~CruiseShip()
{
    //dtor
}
