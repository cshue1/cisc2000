// CHRISTINE SHUE
// NOVEMBER 29, 2016

/*
 * File: employee.h
 * Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

class Employee {
public:
  Employee(std::string theName, float thePayRate);

  void setName (std::string);
  void setPayRate (float);
  std::string getName() const;
  float getPayRate() const;

  float pay(float hoursWorked) const;

protected:
  std::string name;
  float payRate;
  bool salaried;
};

#endif /* not defined _EMPLOYEE_H */
