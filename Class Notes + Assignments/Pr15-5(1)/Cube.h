#ifndef CUBE_H
#define CUBE_H
#include "Rectangle.h"
#include <iostream>

using namespace std;

class Cube : public Rectangle
{
protected:
   double height;
   double volume;
public:
   // Default constructor
   Cube() : Rectangle()
      { height = 0.0; volume = 0.0;
        cout << "Cube constructor called." << endl; }

   // Constructor #2
   Cube(double w, double len, double h) : Rectangle(w, len)
      { height = h;
        volume = getArea() * h;
        cout << "Cube constructor called." << endl; }

   double getHeight() const
      { return height; }

   double getVolume() const
      { return volume; }
};
#endif
