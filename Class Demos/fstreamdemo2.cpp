//in loops slide deck

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream inFile;
    string name;

    inFile.open("demofile.txt");
    cout << "Reading information from the file. \n\n";

    //inFile >> name;
    getline(inFile, name);
    cout << name << endl;

    getline(inFile, name);
    cout << name << endl;

    getline(inFile, name);
    cout << name << endl;

    return 0;

}
