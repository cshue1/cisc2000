//CHRISTINE SHUE
//SEPTEMBER 6, 2016

#include <iostream>

using namespace std;

int main()
{
    int cost, numQuarters, numDimes, numNickels, numPennies;

    cout << "Enter a whole number from 1 to 99.  I will find a combination of coins; that equals the amount of change." << endl;
    cin >> cost;


    cout << cost << " cents equals " << endl;

    numQuarters = cost / 25;
    cost = cost % 25;
    numDimes = cost / 10;
    cost = cost % 10;
    numNickels = cost / 5;
    numPennies = cost % 5;

    cout << numQuarters << " quarters " << endl;
    cout << numDimes << " dimes " << endl;
    cout << numNickels << " nickels and " << endl;
    cout << numPennies << " pennies " << endl;

    return 0;
}
