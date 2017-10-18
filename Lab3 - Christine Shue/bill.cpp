// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Christine Shue

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string item;
	int quantity;		// contains the amount of items purchased
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(2) << fixed << showpoint;	// formatted output

	cout << "Please input the name of the item" <<endl;
	getline (cin, item);

	cout << "Please input the number of items bought" << endl;
   	cin >> quantity;

	cout << "What is the price of the item?" << endl;
	cin >> itemPrice;

	totalBill = quantity * itemPrice;

	cout << "The item that you bought is " << item << endl;
	cout << "The total bill is $" << totalBill <<endl;

	return 0;
}
