// CHRISTINE SHUE
// NOVEMBER 4, 2016

#include "Set.h"
#include <iostream>

using namespace std;

//***************************************************
// Default constructor to initialize the set to     *
// the empty set. In other words, a set that        *
// contains no elements.                            *
//***************************************************

Set::Set(int n)
{
    numElements = 0;
    set = new int[n];
    set[numElements] = n;
    numElements++;

}

//***************************************************
// Constructor to initialize the set from the array *
// of integers passed to the constructor. The       *
// arguments to this constructor are the array of   *
// integers, size of the passed array.              *
//***************************************************

Set::Set(int a[], int n)
{
    numElements = 0;
    set = new int[n];
    for (int i = 0; i < n; i++)
    {
        set[i] = a[i];
        numElements++;
    }
    pSize = n;
}

//***************************************************
// A method to populate the set of integers from    *
// user input                                       *
//***************************************************

void Set::populate ()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n > pSize)
    {
        pSize = n;
        int *temp = new int[pSize];
        delete [] set;
        set = temp;
    }
    numElements = n;
    cout << "Enter the elements, separating each by a space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }

}

bool Set::isMember (int n)
{
    for (int i = 0; i < numElements; i++)
    {
        if (set[i] == n)
            return true;
    }
    return false;
}

void Set::insertEl (int n)
{
    if (!isMember(n))
    {
        if (numElements >= pSize)
        {
            pSize += 1;
            int *temp = new int[pSize];
            for (int i = 0; i < numElements; i++)
            {
                temp[i] = set[i];
            }
            delete [] set;
            set = temp;
        }
        set[numElements] = n;
        numElements++;
    }
    else
        cout << "Error: Already in set." << endl;
}
//****************************************************
// A method to display the set. Note that the set    *
// should be displayed using proper set notation     *
//****************************************************

void Set::display()const
{

    for (int i = 0; i < numElements; i++)
    {
        if (i == 0)
            cout << "{";
        cout << set[i];
        if (i == numElements - 1)
            cout << "}";
        else
            cout << ", ";
    }
    cout << endl;
}

Set::~Set()
{
    delete [] set;
}

const int Set::DEFAULT_SIZE = 5;
