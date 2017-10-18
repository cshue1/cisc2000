#include <iostream>
#include <iomanip>


using namespace std;


template <class someType>
someType sum(someType a, someType b);

int main()
{
    int x = sum(10,20);
    cout << "x = " << x << endl;

    double y = sum(10.5,20.0);
    cout << "y = " << y << endl;


    //************************************DOESN'T WORK***********************************************
    char c = sum<char>('a','b');
    cout << "c = " << c << endl;
    //***********************************************************************************************

    string s= sum<string>("Hello ", "there!");
    cout << "s = " << s << endl;

    return 0;
}

template <class someType>
someType sum(someType a, someType b)
{
    someType total;
    total = a + b;
    return total;
}
