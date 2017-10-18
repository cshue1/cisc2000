// CHRISTINE SHUE
// OCTOBER 28, 2016
// POLYGON ARRAY


#include <iostream>
#include <iomanip>
#include "Polygon.h"

using namespace std;

// PURPOSE: output a balance summary for each account created
// and release the memory for that account once it has been displayed.
const int polyMax = Polygon::getMax();
void printSummary(Polygon ** polygon, int numPolys);
void deletePoly(Polygon ** polygon, int numPolys);

int main()
{

    int numPolys,printNum;
    Polygon** polygon; //pointer to a pointer to an object from the "Polygon" class
    polygon = new Polygon*[polyMax]; //allocates memory for an array of pointers of size "polyMax"
    for (int i = 0; i < polyMax; i++) //allocates memory for each pointer in the array of pointers
    {
        polygon[i] = new Polygon();
    }
    polygon[0]->getLandW(3,4);
    polygon[1]->getLandW(4,5);
    polygon[2]->getLandW(5,6);
    polygon[3]->getLandW(6,7);

    numPolys = polygon[0]->getNumPolygons();
    cout << "There have been "<< numPolys << " polygons created." << endl;
    cout << "Enter which polygon you would like to see drawn out: (1-" << numPolys << "): ";
    cin >> printNum;
    cout << endl << "Drawing Polygon " << printNum <<":"<< endl;
    polygon[printNum-1]->drawPolygon();

    printSummary(polygon,numPolys);
    deletePoly(polygon,numPolys);

    return 0;
}


void printSummary(Polygon**polygon, int numPolys)
{
    cout << endl << "============================================" << endl;
    cout << "Printing Summary of Polygons:" << endl;
    for (int i = 0; i < numPolys; i++)
    {
        cout << "Polygon " << i+1 << endl;
        polygon[i]->printPolygon();
        cout << "\tPerimeter:\t"<< polygon[i]->getPerimeter() << endl;
        cout << "\tArea:\t\t" << polygon[i]->getArea() << endl << endl;
    }
    cout << "============================================" << endl;
    cout << "Average Perimeter:\t" << fixed << showpoint << setprecision(2) << polygon[numPolys]->getAvgPerim() << endl;
    cout << "Average Area:\t\t" << fixed << showpoint << setprecision(2) << polygon[numPolys]->getAvgArea() << endl << endl << endl;
    cout << "============================================" << endl;
}

void deletePoly(Polygon ** polygon , int numPolys)
{
    char userInput;
    int deletePlygn;

    cout << "Would you like to delete all of the polygons? (Y/N: 'N' to delete one polygon): ";
    while (userInput != 'Y' && userInput != 'N')
    {
        cin >> userInput;
        if (userInput != 'Y' && userInput != 'N')
            cout << "Please enter a valid response (Y/N: 'N' to delete one polygon): ";
    }
    cout << "============================================" << endl;
    if (userInput == 'Y')
    {
        for (int i = 0; i < polyMax; i++)
            delete polygon [i];
        delete[] polygon;
        cout << "There are " << polygon[0]->getNumPolygons() << " polyons left." << endl;
        cout << "============================================" << endl;
    }

    else
    {
        //CHALLENGE: option to remove from the array a previously built polygon
        cout << "Enter which polygon you would like to delete: ";
        cin >> deletePlygn;
        delete polygon[deletePlygn-1];
        for (int i = 0; i < polyMax; i++)
        {
            if (i > deletePlygn-1)
            *polygon[i-1] = *polygon[i];
        }
        numPolys = polygon[0]->getNumPolygons();
        printSummary(polygon,numPolys);
        cout << "There are " << polygon[0]->getNumPolygons() << " polyons left." << endl;

    }
}
