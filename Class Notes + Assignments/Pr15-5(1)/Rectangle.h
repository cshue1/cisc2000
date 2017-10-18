#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
private:
   double width;
   double length;
public:
   // Default constructor
   Rectangle()
      { cout << "Rectangle constructor called." << endl;
        width = 0.0;
        length = 0.0; }

   // Constructor #2
   Rectangle(double w, double len)
      { cout << "Rectangle constructor called." << endl;
        width = w;
        length = len; }

   double getWidth() const
      { return width; }

   double getLength() const
      { return length; }

   double getArea() const
      { return width * length; }
};
#endif
