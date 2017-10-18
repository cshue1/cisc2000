#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream inFile;
    int length, width, area;

    inFile.open("dimensions.txt");
    if(!inFile)
    {
        cout << "File open failure!" << endl;
    }
    /* OR
    infile.open("test.txt");
    if (infile.fail())
        cout << "Error opening file.\n";
    else
        proceed to file
    */
    else
    {
        cout << "Reading dimensions of 4 rectangles from the file,\n\n";

        inFile >> length >> width;
        area = length * width;
        cout << "area of rectangle 1: " << area << endl;

        inFile >> length >> width;
        area = length * width;
        cout << "area of rectangle 2: " << area << endl;

        inFile >> length >> width;
        area = length * width;
        cout << "area of rectangle 3: " << area << endl;

        inFile >> length >> width;
        area = length * width;
        cout << "area of rectangle 4: " << area << endl;

    }



    return 0;

}
