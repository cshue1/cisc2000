// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: manager.h
 * Manager class definition.
 */

#ifndef _MANAGER_H
#define _MANAGER_H

#include "employee.h"

class Manager : public Employee {
public:
  Manager(std::string theName,float thePayRate,bool isSalaried);

  void setSalaried(bool);
  bool getSalaried() const;

  float pay(float hoursWorked) const;

protected:
  bool salaried;
};

#endif /* not defined _MANAGER_H */
