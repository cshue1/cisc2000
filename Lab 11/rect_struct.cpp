#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// CHRISTINE SHUE
// SEPTEMBER 20, 2016

struct rectangle // Fill in code to declare a structure named rectangle which has
{
    float length = 0.0;
    float width = 0.0;
    float area = 0.0;
    float perimeter = 0.0;
};  // members length, width, area, and perimeter all of which are floats

int main()
{
	rectangle box;// Fill in code to define a rectangle variable named box

	cout << "Enter the length of a rectangle: ";

	cin >> box.length; // Fill in code to read in the length member of box

	cout << "Enter the width of a rectangle: ";

	cin >> box.width; // Fill in code to read in the width member of box

	cout << endl << endl;

	box.area = box.length * box.width; // Fill in code to compute the area member of box

	box.perimeter = 2 * box.length + 2 * box.width; // Fill in code to compute the perimeter member of box

	cout << fixed << showpoint << setprecision(2);

	cout << "The area is: " << box.area << endl; // Fill in code to output the area with an appropriate message

	cout << "The perimeter is: " << box.perimeter << endl; // Fill in code to output the perimeter with an appropriate message

	if (box.length == box.width)
        cout << "The rectangle is a square" << endl;

	return 0;
}
