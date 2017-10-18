//CHRISTINE SHUE
//SEPTEMBER 30, 2016

#include "Date.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//*******************************************************
//This program changes the date from the default that   *
//is stored in the program.                             *
//*******************************************************
int main()
{
    int m, d, y;

    Date defaultDate;

    defaultDate.printDay();  //default constructor

    cout << "--- Resetting the date --- " << endl;
    do
    {
        cout << "Please enter the current month: ";
        cin >> m;
    } while (m < 0 || m > 12);

    if (m == 2)
    {
        do
        {
            cout << "Please enter the current day: ";
            cin >> d;
        } while (d < 0 || d > 29);
    }
    else if (m == 9 || m == 4 || m == 6 || m ==11)
    {
        do
        {
            cout << "Please enter the current day: ";
            cin >> d;
        } while (d < 0 || d > 30);
    }
    else
    {
        do
        {
            cout << "Please enter the current day: ";
            cin >> d;
        } while (d < 0 || d > 31);
    }
    do
    {
        cout << "Please enter the current year: ";
        cin >> y;
    } while (y < 1000 || y > 10000);

    cout << endl << endl;

    Date today(m,d,y);

    today.printDay();

    return 0;
}
