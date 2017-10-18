#include <iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream outputFile;
    outputFile.open("dimensions.txt");

    cout << "Now writing information to the file.\n";

    outputFile << "10\t2\n";
    outputFile << "5\t7\n";
    outputFile << "6\t20\n";
    outputFile << "8\t3\n";

    outputFile.close();
    cout << "Done.\n";

    return 0;


}
