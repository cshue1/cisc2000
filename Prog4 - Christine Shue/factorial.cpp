//CHRISTINE SHUE
//SEPTEMBER 6, 2016
//4.32  FACTORIAL

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 0, product = 1;

    while (num <= 0)
    {
        cout << "Enter a non-negative number: " ;
        cin >> num;
    }

    cout << num << "! = ";

    for (int i = num; i > 0; i--)
    {
        cout << setw(3) << i;
        if (i > 1)
            cout << setw(3) << "x";
        product *= i;
    }

    cout << " = " << product << endl;

    return 0;

}
