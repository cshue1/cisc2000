#include "PersonalInfo.h"
PersonalInfo::PersonalInfo()
{

}
PersonalInfo::PersonalInfo(char *n, int a)
{
    name = new char[strlen(n) +1];
    strcpy(name, n);
    age = a;
}
PersonalInfo(PersonalInfo &obj)
{
    name = new char [strlen(obj.name) + 1];
    strcpy(name, obj.name);
    age = obj.age;
}
PersonalInfo::~PersonalInfo()
{
    delete[] name;
}
const char PersonalInfo::*getName()
{
    return name;
}
int PersonalInfo::getAge()
{
    return age;
}
