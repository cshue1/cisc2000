//CHRISTINE SHUE
//SEPTEMBER 6, 2016
//4.26   PALINDROMES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 0, temp = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, digit5 = 0;

    do
    {
        cout << "Enter a 5 digit number: ";
        cin >> num;
    }while ((num < pow(10,4)) || (num > pow(10,5)));

    temp = num;
    digit1 = temp / 10000;
    temp = temp % 10000;
    digit2 = temp / 1000;
    temp = temp % 1000;
    digit3 = temp / 100;
    temp = temp % 100;
    digit4 = temp / 10;
    digit5 = temp % 10;

    if (digit1 == digit5)
        if (digit2 == digit4)
            cout << num << " is a palindrome." << endl;
        else
            cout << num << " is not a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
