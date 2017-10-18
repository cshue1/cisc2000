//CHRISTINE SHUE
//SEPTEZMBER 4, 2016
//2.24 ODD OR EVEN

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num%2 == 0)
        cout << num << " is a multiple of 2." << endl;
    else
        cout << num << " is not a multiple of 2." << endl;

    return 0;
}
