// CHRISTINE SHUE
// NOVEMBER 4, 2016

#ifndef SET_H
#define SET_H


class Set
{
    public:

        Set(int n = DEFAULT_SIZE);
        Set(int a[], int n);
        void populate ();
        bool isMember (int n);
        void insertEl (int n);
        void display()const;
        ~Set();

    private:
        int * set;
        int pSize;
        int numElements;
        static const int DEFAULT_SIZE;
};

#endif // SET_H
