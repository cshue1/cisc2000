//CHRISTINE SHUE
//SEPTEMBER 6, 2016

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int num1, num2, sum, studentSum;
    unsigned seed;

    seed = time(0);

    srand(seed);

    num1 = 11 + rand() % 40;
    num2 = 11 + rand() % 40;

    sum = num1 + num2;

    cout << setw (5) << num1 << endl;
    cout << "+" << setw (4) << num2 << endl;
    cout << "_____" << endl;

    cin >> studentSum;

    if (studentSum == sum)
        cout << "Correct! The sum is " << studentSum <<endl;
    else
        cout << "Incorrect: The sum is " << sum << endl;

    return 0;

}
