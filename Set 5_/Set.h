//CHRISTINE SHUE
//NOVEMBER 26, 2016

#ifndef SET_H
#define SET_H

#include <cstdlib>
#include <ostream>
#include <istream>
#include <iostream>

using namespace std;

template <class T>
class Set
{
    public:

        Set(T n = DEFAULT_SIZE);
        Set(T a[], int n);
        Set(Set &obj);

        void populate ();
        bool isMember (T n); // EQUIVALENT TO Element(int n);
        void expandSet(T n);
        void insertEl (T n);
        void display() const;

        void operator+(T n);

        //NEw MEMBER FUNCTIONS FOR SET 4
        friend ostream& operator<< ( ostream &out, const Set &a);
        friend istream& operator>>( istream  &in, Set &a);
        ~Set();

    private:
        T * set;
        int pSize;
        int numElements;
        static const int DEFAULT_SIZE;
};

template <class T>
Set<T>::Set(T n)
{
    numElements = 0;
    set = new T[n];
    pSize = n;
}

//***************************************************
// Constructor to initialize the set from the array *
// of integers passed to the constructor. The       *
// arguments to this constructor are the array of   *
// integers, size of the passed array.              *
//***************************************************

template <class T>
Set<T>::Set(T a[], int n)
{
    cout << "Constructor [Set(T a[], int n)] was called: " << endl;
    numElements = 0;
    set = new T[n];
    for (int i = 0; i < n; i++)
    {
        set[i] = a[i];
        numElements++;
    }
    pSize = n;
    cout << "New set was created of size " << n << endl << endl;
}

//***************************************************
// Copy constructor to initialize the object from   *
// an existing object.                              *
//***************************************************

template <class T>
Set<T>::Set(Set &obj)
{
    numElements = obj.numElements;
    pSize = obj.pSize;
    set = new T[numElements];
    for (int i = 0; i < numElements; i++)
    {
        set[i] = obj.set[i];
    }
}

//***************************************************
// A method to populate the set of integers from    *
// user input                                       *
//***************************************************

template <class T>
void Set<T>::populate ()
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

template <class T>
bool Set<T>::isMember (T n)
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

template <class T>
void Set<T>::expandSet(T n)
{
    pSize += n;
    T *temp = new T[pSize];
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

template <class T>
void Set<T>::insertEl (T n)
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

template <class T>
void Set<T>::display()const
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

template <class T>
void Set<T>::operator+(T n)
{
    cout << "Overloaded operator used: ";
    insertEl(n);
}

template <class T>
ostream &operator<<( ostream &out, const Set<T> &a)
{
    out << "INSIDE <<" << endl;
    //a.display();
    for (int i = 0; i < a.numElements; i++)
    {

        if (i == 0)
            out << "{";
        out << a.set[i];
        if (i == a.numElements - 1)
            out << "}";
        else
            out << ", ";
    }
    out << endl;
    return out;
}

template <class T>
istream &operator>>( istream  &in, Set<T> &a)
{
    a.populate();
    return in;
}

template <class T>
Set<T>::~Set()
{
    delete [] set;
}

template <class T>
const int Set<T>::DEFAULT_SIZE = 5;


#endif // SET_H

