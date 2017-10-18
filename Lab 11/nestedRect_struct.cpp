#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// CHRISTINE SHUE
// SEPTEMBER 20, 2016

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
    float length = 0.00;
    float width = 0.00;
};

// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle
{
    float area = 0.00;
    float perimeter = 0.00;
    dimensions sizes;
};

float computeArea(float, float);
float computePerimeter(float, float);

int main()
{
	rectangle box;  // Fill in code to define a rectangle structure variable named box.

	cout << "Enter the length of a rectangle: ";

	cin >> box.sizes.length;  // Fill in code to read in the length to the appropriate location

	cout << "Enter the width of a rectangle: ";

	cin >> box.sizes.width;   // Fill in code to read in the width to the appropriate location

	cout << endl << endl;

	box.area = computeArea(box.sizes.length, box.sizes.width);  // Fill in code to compute the area and store it in the appropriate
	// location

	box.perimeter = computePerimeter(box.sizes.length, box.sizes.width);  // Fill in code to compute the perimeter and store it in the
	// appropriate location

	cout << fixed << showpoint << setprecision(2);

	cout << "The area of the rectangle is " << box.area << endl;

	cout << "The perimeter of the rectangle is " << box.perimeter
		 << endl;

	return 0;
}
float computeArea(float l, float w)
{
    return l * w;
}
float computePerimeter(float l, float w)
{
    return 2 * l + 2 * w;
}
