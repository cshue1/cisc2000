//CHRISTINE SHUE
//SEPTEMBER 6, 2016
//5.13 BAR CHART

#include <iostream>
#include <iomanip>

using namespace std;

int print_bar(int size);

int main()
{
    int bar1, bar2, bar3, bar4, bar5;

    cout << "Enter 5 numbers: ";
    cin >> bar1 >> bar2 >> bar3 >> bar4 >> bar5;

    cout << setw(4) << bar1 << ": ";
    print_bar(bar1);
    cout << setw(4) << bar2 << ": ";
    print_bar(bar2);
    cout << setw(4) << bar3 << ": ";
    print_bar(bar3);
    cout << setw(4) << bar4 << ": ";
    print_bar(bar4);
    cout << setw(4) << bar5 << ": ";
    print_bar(bar5);

    return 0;

}

int print_bar(int size)
{
    for (int i=0; i < size; i++)
        cout << "*";
    cout << endl;
}
