/*
WRITTEN BY: Laura Kaplan
LAST MODIFIED: 3/8/2020 - 5pm EST
DESCRIPTION: This program is designed to test different output formatting. 
			 As a secondary goal, I hope it will reveal why my C++ book suggests using the showpoint and fixed manipulators in tandem.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double number = 4444.00000000;
	
//This section demonstrates the "setprecision()", showpoint, and fixed manipulators. 

	cout << "The number is 4444.00000000 \t\t\t\t DEFAULT PRECISION: 6" << endl << endl;

		//no modification
	cout << "No modifications: " << number << "\t\t\t\t\t NOTE: Decimals are missing even though natural precision is 6." << endl << endl;				

		//showpoint only
	cout << "showpoint: " << showpoint << number << "\t\t\t\t\t NOTE: we now see 6 precision, including decimals." << endl << endl;					
	cout.unsetf(ios::showpoint);		

		//fixed only
	cout << "fixed: " << fixed << number << "\t\t\t\t\t NOTE: precision is now 6 after decimal." << endl << endl;									
	cout.unsetf(ios::fixed);
	
		//showpoint + fixed
	cout << "showpoint + fixed: " << showpoint << fixed << number << "\t\t\t\t Q: what is the point of combining showpoint and fixed?" << endl << endl;
	cout.unsetf(ios::showpoint);
	cout.unsetf(ios::fixed);
	
		//setprecision(5) only
	cout << "setprecision(5):  " << setprecision(5) << number << "\t\t\t\t\t NOTE: 4 numbers shown even though precision is now 5." << endl << endl;
	
		//setprecision(5) + showpoint
	cout << "setprecision(5) + showpoint: " << setprecision(5) << showpoint << number << "\t\t\t NOTE: we see 5 precision, 4 number places and 1 decimal place" << endl << endl; 
	cout.unsetf(ios::showpoint);
	
		//setprecision(5) + fixed
	cout << "setprecision(5) + fixed: " << setprecision(5) << fixed << number << "\t\t\t NOTE: precision is now 5 after decimal." << endl << endl; //
	cout.unsetf(ios::fixed);

		//setprecision(5) + showpoint + fixed
	cout << "setprecision(5) + showpoint + fixed: " << setprecision(5) << fixed << showpoint << number << "\t\t Q: \"Tell me why!\"- NSYNC" << endl << endl;
	cout.unsetf(ios::showpoint);
	cout.unsetf(ios::fixed);

	cout << endl << "BE AWARE: Set-precision will continue as (5) on all lines until re-assigned." << endl << endl;

	system("pause");
	return 0;
}