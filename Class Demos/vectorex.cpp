//CHRISTINE SHUE
//SEPTEMBER 23, 2016

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int theCurrInt;
    vector <int> theVector;
    cout << "Enter numbers to push back: ";

    while (cin >> theCurrInt)
    {
        theVector.push_back(theCurrInt);
    }
    cout << "\nYou entered:" << endl;
    for(int i=0; i < theVector.size();i++)
        cout << theVector.at(i) <<"";
    cout << endl;
}
