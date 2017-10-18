// CHRISTINE SHUE
// NOVEMBER 22, 2016

#include <iostream>
#include "Set.h"

using namespace std;

int main()
{
    int array[6] = {0,1,2,3,4,5};
    Set set1;
    //set1.populate();
    cout << "(Testing input overload function):\n";
    cin >> set1;

    cout << "(Testing output overload function)\n ";
    cout << "Set 1: " << set1;
    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;

    Set set2(array,6);

    //set2.display();
    cout << "(Testing output overload function)\n";
    cout << "Set 2: " << set2;
    set2.insertEl(1);
    set2.insertEl(3);
    set2.insertEl(5);
    cout << "Testing operator overloaded function: " << endl;
    set2+6;
    cout << "(Testing output overload function)\n";
    cout << "Set 2: " << set2;

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    cout << "Testing Copy Constructor: " << endl;
    Set set3 = set1;
    cout << "Set 1: " << set1;
    cout << "Set 3: " << set3;

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    cout << "Testing Union function: " << endl;
    set1.Union(set2);
    cout << "Testing operator overloaded function: " << endl;
    set1+set2;

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    cout << "Testing Intersection function: " << endl;
    set1.Intersection(set2);
    cout << "Testing operator overloaded function: " << endl;
    set1^set2;

    return 0;
}
