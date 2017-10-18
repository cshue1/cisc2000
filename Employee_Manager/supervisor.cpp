// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: supervisor.cpp
 * Supervisor method definitions.
 */

#include "supervisor.h"

Supervisor::Supervisor(std::string theName,float thePayRate,std::string theDepartment) : Manager(theName,thePayRate,true)
{
    department = theDepartment;
}

void Supervisor::setDept (std::string theDepartment)
{
    department = theDepartment;
}

std::string Supervisor::getDept() const
{
    return department;
}

Supervisor::~Supervisor()
{
    //dtor
}
