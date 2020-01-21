// This program demonstrates a two-dimensional array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;           // Number of divisions
	const int NUM_QTRS = 4;           // Number of quarters
	double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows and 4 columns.
	double totalSales = 0;            // To hold the total sales.
	int div, qtr;                     // Loop counters.

	cout << "This program will calculate the total sales of\n";
	cout << "all the company's divisions.\n";
	cout << "Enter the following sales information:\n\n";

	// Nested loops to fill the array with quarterly
	// sales figures for each division.
	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}
		cout << endl; // Print blank line.
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The sales for the company is: $" << endl;
	cout << "Div" << "\t" << "Q1" << "\t" << "Q2" << "\t" << "Q3" << "\t" << "Q4" << endl;


	// Nested loops to display the quarterly sales figures for each division.
	for (div = 0; div < NUM_DIVS; div++)
	{
		cout << div + 1 << "\t";
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "$" << sales[div][qtr] << "\t";

			//begin keeping track of the total sales
			totalSales += sales[div][qtr];

			/*
			*	The main issue with this section of the code is that the user had been using NUM_DIV instead of the iteratable div
			*	which of course caused the wrong values. Then the user had swapped the iteratable variables. Thusly iterating the 
			*	wrong number of times which wouldn't allow for the final quater to be displayed.
			*/
		}
		cout << endl; // Print blank line.
	}

	cout << endl;
	cout << "The total sales for the company are: $";
	cout << totalSales << endl;
	return 0;
}