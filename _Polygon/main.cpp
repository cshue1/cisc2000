#include <iostream>
#include "Polygon.h"

using namespace std;

int main()
{
    char getPolygon;
    int maxPoly, polyCount = 0,length, width, area, perimeter;
    Polygon defaultPolygon();
    do
    {
        cout << "Enter 'Y' to add a polygon (ANY to QUIT): ";
        cin >> getPolygon;
        if (getPolygon == 'Y')
        {
            polyCount++;
            cout << "Please enter the length of the polygon: ";
            cin >> length;
            cout << "Please enter the width of the polygons: ";
            cin >> width;
            cout << endl;
            Polygon polygon(length, width);
            maxPoly = polygon.getMax();
            area = polygon.getArea();
            perimeter = polygon.getPerimeter();
            polygon.printPolygon();
            cout << "Perimeter:\t"<< perimeter << endl;
            cout << "Area:\t\t" << area << endl;
        }

    } while ((getPolygon == 'Y')&&(polyCount <= maxPoly));


    return 0;
}
