//CHRISTINE SHUE
//SEPTEMBER 10, 2016
//LAB 6.1.4 - option 1

#include <iostream>

using namespace std;

void swap (float&, float&);

int main()
{
    float first, second;

    cout << "Enter the first number, then hit enter: ";
    cin >> first;
    cout << "Enter the second number, then hit enter: ";
    cin >> second;

    swap (first,second);

    cout << "After swapping, the first number has the value of " << first << " which was the value of the second number" << endl;
    cout << "The second number has a value of " << second << " which was the value of the first number" << endl;
    return 0;
}

void swap (float&first, float&second)
{
    float temp;
    temp = first;
    first = second;
    second = temp;
}
