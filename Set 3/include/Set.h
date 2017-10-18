// CHRISTINE SHUE
// NOVEMBER 10, 2016

#ifndef SET_H
#define SET_H


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

        //NEw MEMBER FUNCTIONS FOR SET 3
        Set Union(Set& a);
        Set Intersection(Set& a);
        Set& operator+(int n);
        Set& operator+(Set& a);
        Set operator^(Set& a);

        ~Set();

    private:
        int * set;
        int pSize;
        int numElements;
        static const int DEFAULT_SIZE;
};

#endif // SET_H
