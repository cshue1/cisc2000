// CHRISTINE SHUE
// NOVEMBER 10, 2016

#include <iostream>
#include "Set.h"

using namespace std;

int main()
{
    int array[6] = {0,1,2,3,4,5};
    Set set1;
    set1.populate();
    cout << "Set 1: ";
    set1.display();
    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;

    Set set2(array,6);
    cout << "Set 2: ";
    set2.display();
    set2.insertEl(1);
    set2.insertEl(3);
    set2.insertEl(5);
    cout << "Testing operator overloaded function: " << endl;
    set2+6;
    cout << "Set 2: ";
    set2.display();

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    cout << "Testing Copy Constructor: " << endl;
    Set set3(set1);
    cout << "Set 1: ";
    set1.display();
    cout << "Set 3: ";
    set3.display();

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    Set u;
    cout << "Testing Union function: " << endl;
    u = set1.Union(set2);
    cout << "Union: ";
    u.display();
    cout << "Testing operator overloaded function: " << endl;
    Set v;
    cout << "Union: ";
    v = set1+set2;
    v.display();

    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl << endl;
    Set i;
    cout << "Testing Intersection function: " << endl;
    i = set1.Intersection(set2);
    cout << "Intersection: ";
    i.display();
    cout << "Testing operator overloaded function: " << endl;
    i = set1^set2;
    i.display();

    return 0;
}
