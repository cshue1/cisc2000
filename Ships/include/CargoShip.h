#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"

class CargoShip : public Ship
{
    public:
        CargoShip(std::string,std::string,int);
        void printInfo();
        virtual ~CargoShip();

    protected:
        int tonnage;
    private:
};

#endif // CARGOSHIP_H
