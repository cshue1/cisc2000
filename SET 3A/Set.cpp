// CHRISTINE SHUE
// NOVEMBER 10, 2016

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
    pSize = n;
}

//***************************************************
// Constructor to initialize the set from the array *
// of integers passed to the constructor. The       *
// arguments to this constructor are the array of   *
// integers, size of the passed array.              *
//***************************************************

Set::Set(int a[], int n)
{
    cout << "Constructor [Set(int a[], int n)] was called: " << endl;
    pSize = n;
    numElements = n;
    set = new int[n];
    for (int i = 0; i < n; i++)
    {
        set[i] = a[i];
    }

    cout << "New set was created of size " << n << endl << endl;
}

//***************************************************
// Copy constructor to initialize the object from   *
// an existing object.                              *
//***************************************************

Set::Set(Set &obj)
{
    numElements = obj.numElements;
    pSize = obj.pSize;
    set = new int[pSize];
    for (int i = 0; i < numElements; i++)
    {
        set[i] = obj.set[i];
    }
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
        expandSet(n - pSize);
    }
    numElements = n;
    cout << "Enter the elements, separating each by a space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }

}

//******************************************************
// A method to add a new element to an existing set    *
// and return {true, false} accordingly                *
//******************************************************

bool Set::isMember (int n)
{
    for (int i = 0; i < numElements; i++)
    {
        if (set[i] == n)
            return true;
    }
    return false;
}

//***********************************************
// Method to expand the size of the set.        *
// Dynamically creates a new array, then copies *
// the old array elements to the new array then *
// deallocate the old array.                    *
//***********************************************

void Set::expandSet(int n)
{
    pSize += n;
    int *temp = new int[pSize];
    for (int i = 0; i < numElements; i++)
    {
        temp[i] = set[i];
    }
    delete [] set;
    set = temp;

}

//*************************************************
// Method to add a new element to an existing set *
// if isMember returns true.                      *
//*************************************************

void Set::insertEl (int n)
{
    if (!isMember(n))
    {
        if (numElements >= pSize)
        {
            expandSet(1);
        }
        set[numElements] = n;
        numElements++;
    }
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

// ***************************************************
// This method creates a new set that represents the *
// union of the two sets (i.e. the set of the object *
// this methods was invoked on with the set of the   *
// object passed to the method). This method returns *
// the new set.                                      *
//****************************************************

Set Set::Union(Set& a)
{
    Set temp(a);
    for(int i = 0; i < numElements; i++)
        temp.insertEl(set[i]);
    return temp;
}

//****************************************************
// This method creates a new set that represents the *
// intersection of the two sets and returns          *
// the new set.                                      *
//****************************************************

Set Set::Intersection (Set& a)
{
    Set temp;
    for (int i = 0; i < numElements; i++)
    {
        if (a.isMember(set[i]))
        {
            temp.insertEl(set[i]);
        }
    }
    if (temp.numElements == 0)
        cout << "There are no intersections." << endl;
    else
    {
        return temp;
    }
}

//******************************************************
// Operator overloaded method to represent addition    *
// of a new element to the set.                        *
//******************************************************

Set& Set::operator+(int n)
{
    cout << "Overloaded operator used: ";
    insertEl(n);
}

//******************************************************
// Operator overloaded method to represent             *
// the union of two sets.                              *
//******************************************************

Set& Set::operator+(Set&a)
{
    Set temp(numElements);
    temp = this->Union(a);
    return temp;
}

//******************************************************
// Operator overloaded method to represent             *
// to represent the intersection of two sets.          *
//******************************************************

Set Set::operator^(Set&a)
{
    Set temp;
    cout << "Overloaded operator used: ";
    temp = Intersection(a);
    return temp;
}

//*******************************************************
// Destructor ~ clear out data members as necessary     *
// and deallocate all dynamically allocated memory as   *
// necessary                                            *
//*******************************************************

Set::~Set()
{
    delete [] set;
}

const int Set::DEFAULT_SIZE = 5;
