#include <iostream>
#include <iomanip>
using namespace std;

// This program demonstrates how to use an array of structures

// CHRISTINE SHUE
//SEPTEMBER 20, 2016

// Fill in code to declare a structure called taxPayer that has three
// members:	taxRate, income, and taxes � each of type float
struct taxPayer
{
    float taxRate = 0.00;
    float income = 0.00;
    float taxes = 0.00;
};

int main()
{
	// Fill in code to define an array named citizen which holds
	// 5 taxPayers structures

	taxPayer citizen[5];

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";

		cin >> citizen[count].income; // Fill in code to read in the income to the appropriate place

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";

		cin >> citizen[count].taxRate; // Fill in code to read in the tax rate to the appropriate place

		citizen[count].taxes = citizen[count].income * citizen[count].taxRate; // Fill in code to compute the taxes for the citizen and store it
		// in the appropriate place

		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// Fill in code for the first line of a loop that will output the
	// tax information
	for (int index = 0; index < 5; index ++)
	{
		cout << "Tax Payer # " << (index + 1) << ": " << "$ "
		     << citizen[index].taxes << endl;
	}

	return 0;
}
