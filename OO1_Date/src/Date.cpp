//CHRISTINE SHUE
//SEPTEMBER 30, 2016

#include "Date.h"
#include <iostream>

using namespace std;

//*********************************************
// Date is a default constructor.             *
//*********************************************
Date::Date()
{
    month = 1;
    day = 1;
    year = 2016;
}

//*********************************************
// Date is an initialization constructor.     *
//*********************************************
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

//*******************************************************
// printDay prints the date in MM / DD / YYYY form.     *
//*******************************************************
void Date::printDay() const
{
    cout << "Today's date is: ";
    if (month < 10)
        cout << "0" << month;
    else
        cout << month;
    cout << " / ";

    if (day < 10)
        cout << "0" << day;
    else
        cout << day;
    cout << " / ";

    cout << year << endl << endl;

    return;
}
