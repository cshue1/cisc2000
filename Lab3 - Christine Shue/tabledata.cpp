// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

//CHRISTINE SHUE

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float price1, price2;		// The price of 2 items
	int quantity1, quantity2;	// The quantity of 2 items

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item" << endl;

	cin >> price1;
	cin >> quantity1; // Fill in the input statement that reads in price1 and
	// quantity1 from the keyboard.

	cout << "Please input the price and quantity of the second item" << endl; // Fill in the prompt for the second price and quantity.

	cin >> price2;
	cin >> quantity2; // Fill in the input statement that reads in price2 and
	// quantity2 from the keyboard.

	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";

	cout << setw(15) << price1 << setw(6) << quantity1 << "\n"; // Fill in the output statement that prints the first price
	// and quantity. Be sure to use setw() statements.

	cout << setw(15) << price2 << setw(6) << quantity2 << "\n";// Fill in the output statement that prints the second price
	// and quantity.

	return 0;
}