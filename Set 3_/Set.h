// CHRISTINE SHUE
// NOVEMBER 22, 2016

#ifndef SET_H
#define SET_H

#include <cstdlib>
#include <ostream>
#include <istream>

using namespace std;

class Set
{
    public:

        Set(int n = DEFAULT_SIZE);
        Set(int a[], int n);
        Set(Set &obj);

        void populate ();
        bool isMember (int n); // EQUIVALENT TO Element(int n);
        void expandSet(int n);
        void insertEl (int n);
        void display() const;

        void Union(Set &a);
        void Intersection (Set &a);
        Set& operator+(int n);
        Set& operator+(Set& a);
        Set& operator^(Set& a);


        //NEw MEMBER FUNCTIONS FOR SET 4
        friend ostream& operator<<( ostream &out, const Set &a);
        friend istream& operator>>( istream  &in, Set &a);
        ~Set();

    private:
        int * set;
        int pSize;
        int numElements;
        static const int DEFAULT_SIZE;
};

#endif // SET_H
