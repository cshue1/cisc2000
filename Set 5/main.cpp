// CHRISTINE SHUE
// NOVEMBER 22, 2016

#include "Set.h"
#include <cstdlib>
#include <ostream>
#include <istream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double arrayB[6] = {3.0,4.1,5.2,6.3,7.4,8.5};
    string arrayC[6] = {"a","b","c","d","e","f"};

    Set<int> set1;
    Set<double>set2(arrayB,6);
    Set<string>set3(arrayC,6);

    cin >> set1;

    cout << "\nTesting int Array: \n";
    cout << "Set 1: ";
    cout << set1;
    set1+1;
    set1+3;
    set1+5;
    cout << "Set 1: ";
    cout << set1;

    cout << "\nTesting double Array: \n";
    cout << "Set 2: ";
    cout << set2;
    set2+1.1;
    set2+2.9;
    set2+6.4;
    cout << "Set 2: ";
    cout << set2;

    cout << "\nTesting String Array: \n";
    cout << "Set 3: ";
    cout << set3;
    set3+"f";
    set3+"g";
    set3+"h";
    cout << "Set 3: ";
    cout << set3;

    return 0;
}
