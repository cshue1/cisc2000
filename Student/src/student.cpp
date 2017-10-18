#include "student.h"
#include <string>
#include <iostream>

using namespace std;

void Student::setID(int id)
{
    studID = id;
}
void Student::setFirstName(std::string fn)
{
    firstName = fn;
}
void Student::setLastName(std::string ln)
{
    lastName = ln;
}
void Student::setMidInit(char mi)
{
    middleInit = mi;
}
void Student::setDOB(int m, int d, int y)
{
    dob = m * 1000000 + d * 10000 + y;
}
void Student::setGender(char g)
{
    gender = g;
}
int  Student::getID()const
{
    return studID;
}
std::string  Student::getFirstName()const
{
    return firstName;
}
char  Student::getMidInit()const
{
    return middleInit;
}
std::string  Student::getLastName()const
{
    return lastName;
}
int  Student::getDOB()const
{
    return dob;
}
char  Student::getGender()const
{
    return gender;
}
