#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"

class CruiseShip : public Ship
{
    public:
        CruiseShip(std::string,std::string,int);
        void printInfo();
        virtual ~CruiseShip();

    protected:
        int passengers;
    private:
};

#endif // CRUISESHIP_H
