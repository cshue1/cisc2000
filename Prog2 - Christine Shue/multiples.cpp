//CHRISTINE SHUE
//SEPTEMBER 4, 2016
//2.25 MULTIPLES

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 % num2 == 0)
        cout << num1 << " is an integer of " << num2 << endl;
    else
        cout << num1 << " is not an integer of " << num2 << endl;

    return 0;
}
