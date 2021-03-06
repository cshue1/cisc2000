// CHRISTINE SHUE
// OCTOBER 8, 2016
// OO5_STUDENT ASSIGNMENT

#include "Date.h"
#include <iostream>

using namespace std;

//**************************************
// Date is a default constructor       *
//**************************************

Date::Date()
{
    month = 01;
    day = 01;
    year = 2016;
}
//****************************************************************
// void setDate stores user values into Program members          *
//****************************************************************

void Date::setDate(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

//***********************************************
// void printDate prints Date information       *
//***********************************************

void Date::printDate() const
{
    cout << month << "/" << day << "/" << year << endl;
}
