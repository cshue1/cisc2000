#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

void display(Ship&);

int main()
{
    const int NUM_SHIPS = 4;

    Ship * fleet[NUM_SHIPS] =
    {
        new Ship ("Base Ship","2000"),
        new CruiseShip ("Cruise Ship I","2005",950),
        new CruiseShip ("Cruise Ship II","2010",1500),
        new CargoShip ("Cargo Ship","2003",10000)
    };
    for (int i = 0; i < NUM_SHIPS; i++)
    {
        display(*fleet[i]);
    }
    delete [] fleet;
    return 0;
}

void display(Ship& vessel)
{
    cout << "The vessel's information is: " << endl;
    vessel.printInfo();
}
