// CHRISTINE SHUE
// NOVEMBER 4, 2016

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
    cout << "\t= = = = = = = = = = = = = = = = = = = = = = = = = =" << endl;
    Set set2(array,6);
    cout << "Set 2: ";
    set2.display();
    set2.insertEl(1);
    set2.insertEl(3);
    set2.insertEl(5);
    set2.insertEl(6);
    cout << "Set 2: ";
    set2.display();
    return 0;
}
