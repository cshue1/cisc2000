// CHRISTINE SHUE
// NOVEMBER 22, 2016

#include "Set.h"
#include <cstdlib>
#include <ostream>
#include <istream>
#include <iostream>

using namespace std;

int main()
{
    int arrayA[6] = {9,8,7,6,5,4};
    double arrayB[6] = {3.0,4.1,5.2,6.3,7.4,8.5};
    Set<int> set1(arrayA,6);
    Set<double>set2(arrayB,6);

    cout << "Set 1: ";
    set1.display();
    set1+1;
    set1+3;
    set1+5;
    cout << "Set 1: ";
    set1.display();

    cout << "Set 2: ";
    set2.display();
    set2+1.1;
    set2+2.9;
    set2+6.4;
    cout << "Set 2: ";
    set2.display();

    return 0;
}
