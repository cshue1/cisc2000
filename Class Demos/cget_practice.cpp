//CHRISTINE SHUE
//SEPTEMBER 9, 2016
//CIN v. CIN.GET

#include <iostream>

using namespace std;

int main()
{
    char ch;
    int number;
    cout << "Enter a number ";
    cin >> number;
    cin.ignore(); //without this, the program will use the ENTER character for the cin.get statement.
    cout << "Enter a character: ";
    /*cin >> ch; //only works with a non-whitespace char
    cout << ch << endl;*/
    ch = cin.get();//use with cin.ignore to ignore the first ENTER keystroke
    cout << "Thank You!\n";
}
