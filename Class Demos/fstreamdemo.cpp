//in loops slide deck

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream outputFile;
    string composer;
    outputFile.open("demofile.txt");

    cout << "Now writing information to the file.\n";

    //outputFile << "Bach\n";
    //outputFile << "Beethoven\n";
    //outputFile << "Mozart\n";

    composer = "Johann Bach";
    outputFile << composer << endl;
    composer = "Ludwig van Beethoven";
    outputFile << composer << endl;
    composer = "Amadeus Mozart";
    outputFile << composer << endl;
    outputFile.close();
    cout << "Done.\n";

    return 0;

}
