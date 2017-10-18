#include "Polygon.h"
#include <iostream>
using namespace std;

int Polygon::numPolygons = 0;
const int Polygon::MAX_POLYGONS = 25;
Polygon::Polygon()
{
    length = 0;
    width = 0;
}

Polygon::Polygon(int l,int w)
{
    numPolygons++;
    length = l;
    width = w;
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

void Polygon::printPolygon()const
{
    cout << "Length:\t\t" << length << endl;
    cout << "Width:\t\t" << width << endl;
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
    //dtor
}
