//CHRISTINE SHUE
//SEPTEMBER 4, 2016
//2.28 DIGITS

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int INT_SIZE = 5;
    int num = 0, divisor = 1;

    for (int n = 1; n < INT_SIZE; ++n)
        divisor *= 10;

    while ((num < divisor) || (num > divisor * 10))
    {
        cout << "Enter a " << INT_SIZE << " digit number: ";
        cin >> num;
    }

    for (divisor; divisor >= 1; divisor/=10)
    {
        cout << num / divisor << "   ";
        num = num % divisor;
    }
}
