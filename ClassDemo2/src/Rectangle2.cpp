#include "Rectangle2.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// GENERALLY USE WITH A PROJECT FOLDER
void Rectangle::setWidth(double w)
{
    if (w>=0)
        width = w;
    else
    {
        cout << "Invalid width\n";
        exit (EXIT_FAILURE);
    }
}

void Rectangle::setLength(double len)
{
    if (len>=0)
        length = len;
    else
    {
        cout << "Invalid length\n";
        exit (EXIT_FAILURE);
    }
}

double Rectangle::getWidth()const
{
    return width;
}

double Rectangle::getLength()const
{
    return length;
}

double Rectangle::getArea()const
{
    return length * width;
}
