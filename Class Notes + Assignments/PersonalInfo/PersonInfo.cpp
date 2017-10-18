#include "PersonInfo.h"

PersonInfo::PersonInfo(char *n, int a)
{
    name = new char[strlen(n) +1];
    strcpy(name, n);
    age = a;
}
PersonInfo::PersonInfo(PersonInfo &obj)
{
    name = new char [strlen(obj.name) + 1];
    strcpy(name, obj.name);
    age = obj.age;
}
PersonInfo::~PersonInfo()
{
    delete[] name;
}
char PersonalInfo::*getName()const
{
    return name;
}
int PersonalInfo::getAge()
{
    return age;
}
