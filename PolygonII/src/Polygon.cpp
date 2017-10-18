// CHRISTINE SHUE
// OCTOBER 28, 2016
// POLYGON ARRAY


#include "Polygon.h"
#include <iostream>
using namespace std;

int Polygon::numPolygons = 0;
int Polygon::totalA = 0;
int Polygon::totalP = 0;

const int Polygon::MAX_POLYGONS = 4;
Polygon::Polygon()
{
    numPolygons++;
    length = 0;
    width = 0;
}
int Polygon::getNumPolygons()
{
    return numPolygons;
}

void Polygon::getLandW(int l,int w)
{
    length = l;
    width = w;
    totalA += length * width;
    totalP += 2 * length + 2 * width;
}
int Polygon::getMax()
{
    return MAX_POLYGONS;
}

int Polygon::getArea()
{
    return (length * width);
}

int Polygon::getPerimeter()
{
    return (2 * length + 2 * width);
}

double Polygon::getAvgArea()        //NEW
{
    return (double(totalA) / numPolygons);
}
double Polygon::getAvgPerim()       //NEW
{
    return (double(totalP) / numPolygons);
}

void Polygon::printPolygon()const
{
    cout << "\tLength:\t\t" << length << endl;
    cout << "\tWidth:\t\t" << width << endl;
}

void Polygon::drawPolygon()const
{
    for (int i = 0; i < width; i++)
    {
        cout << "\t";
        if((i == 0) || (i == width - 1))
        {
            for (int j = 0; j < length; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < length; j++)
            {
                if ((j == 0) || (j == length - 1))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

Polygon::~Polygon()
{
    cout << "Object deleted." << endl;
    totalA -= length * width;
    totalP -= (2*length + 2*width);
    numPolygons--;
}
