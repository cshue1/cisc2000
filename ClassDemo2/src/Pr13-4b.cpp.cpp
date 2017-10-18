#include "Rectangle2.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "This program will calculate the area of a\n";
    cout << "rectangle.  What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}
