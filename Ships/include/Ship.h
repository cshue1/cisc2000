#ifndef SHIP_H
#define SHIP_H

#include <iostream>

class Ship
{
    public:
        Ship();
        Ship(std::string,std::string);
        virtual void printInfo();
        virtual ~Ship();

    protected:
        std::string name;
        std::string year;

    private:
};

#endif // SHIP_H
