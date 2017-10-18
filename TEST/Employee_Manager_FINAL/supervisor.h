// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: supervisor.h
 * Supervisor class definition.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "manager.h"

class Supervisor : public Manager
{
    public:
        Supervisor(std::string theName,float thePayRate,std::string theDepartment);
        void setDept (std::string);
        std::string getDept() const;
        virtual ~Supervisor();

    protected:
        std::string department;

    private:
};

#endif // SUPERVISOR_H
