//CHRISTINE SHUE
//SEPTEMBER 6, 2016
//5.12 FLAG_D

#include <iostream>

using namespace std;

int main()
{
    int rows, spaceCount, asteriskCount = 1;

    cout << "Enter the number of required rows: ";
    cin >> rows;


    for (int i=1; i <=rows; ++i)
    {
        for (spaceCount = 1; spaceCount <= rows - i; ++spaceCount)
            cout << " ";
        for (asteriskCount = 1; asteriskCount <=i; ++asteriskCount)
            cout << "*";
        cout << endl;
    }

    return 0;
}
