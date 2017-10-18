// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: employee.cpp
 * Employee method definitions.
 */

#include "employee.h"

Employee::Employee(std::string theName, float thePayRate)
{
     name = theName;
     payRate = thePayRate;
}

void Employee::setName(std::string theName)
{
    name = theName;
}

void Employee::setPayRate (float thePayRate)
{
    payRate = thePayRate;
}

std::string Employee::getName() const
{
    return name;
}

float Employee::getPayRate() const
{
    return payRate;
}

float Employee::pay(float hoursWorked) const
{
    return hoursWorked * payRate;
}
