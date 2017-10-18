// CHRISTINE SHUE
// NOVEMBER 4, 2016

#include <iostream>
#include "Set.h"

using namespace std;

int main()
{
    int arraya[5] = {1,2,3,4,5};
    int arrayb[6] = {1,2,3,4,5,6};
    Set *set1;
    Set *set2;
    set1 = new Set(arraya,5);
    set1->populate();
    set1->display();
    cout << endl;
    set2 = new Set(arrayb,6);
    set2->insertEl(1);
    set2->insertEl(3);
    set2->insertEl(5);
    set2->insertEl(6);
    set2->display();
    return 0;
}
