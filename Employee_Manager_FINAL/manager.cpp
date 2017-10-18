// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: manager.cpp
 * Manager method definitions.
 */

#include "manager.h"

Manager::Manager(std::string theName,float thePayRate,bool isSalaried) : Employee(theName, thePayRate)
{
    salaried = isSalaried;
}

void Manager::setSalaried(bool isSalaried)
{
    salaried = isSalaried;
}

bool Manager::getSalaried() const
{
    return salaried;
}

float Manager::pay(float hoursWorked) const
{
    if (salaried)
        return payRate;
    else
        return Employee::pay(hoursWorked);
}
