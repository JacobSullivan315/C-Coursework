#include "calcValues.h"
#include "WelcomeMenus.h"
#include "DataTableDisplay.h"
#include <iostream>
#include <string>
#include <exception>
using namespace std;


/* Programmer: Jacob Sullivan
   Date: 6/7/2021
   This program will take in user input and use that input to calculate earned interest and year end balances
   of a bank account in relation to a user defined amount of time and interest rate. It will then output
   two tables, one depicting account growth with user defined monthly deposits, and one with no monthly deposits.
   main() uses the following parameters:
   double t_initialAmt - user defined inital balance of the account
	int t_numYears - user defined number of years user wants to see balance activity
	double t_monthlyDeposit - user defined monthly deposit to account
	double t_interestRate - user defined interest rate on account
	char t_userContinue - variable to handle whether user wants to continue or quit
	string inputBuffer - used in try/catch statements to hold data and validate its data type before assigning it to
	appropriate variable */

int main() {
	double initialAmt = 0.0;
	int numYears;
	double monthlyDeposit;
	double interestRate;
	char userContinue;
	string inputBuffer;

	//defined a simple object to call welcome menu functions
	WelcomeMenus firstWelcome(0.0, 0, 0.0, 0.0);

	firstWelcome.displayWelcomeMessage();

	firstWelcome.initWelcomeMenu();

	cout << "Please press any key and then the enter key to continue. Press Q to quit." << endl;
	cin >> userContinue;

	/*set up 'q' to be our quite button. While user presses any other key, they can repeatedly input information into
	  the program and see the desired results*/

	while (userContinue != 'q' && userContinue != 'Q') {

		/* The following while loops all validate input. If our user enters anything but the
		   datae type of each variable, an error statement will print. The same will happen if the
		   user enters a negative value. cin.clear and cin.ignore are used to flush out our cin
		   so we can take new input and put it through the same while loop. If the input is valid,
		   it is loaded into the appropriate variables.*/

		cout << "Please enter the initial balance:" << endl;

		while (!(cin >> initialAmt) || initialAmt < 0)
		{
			cout << "Please enter a positive numerical amount only!" << endl;
			cout << "Please enter the initial balance:" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}

		cout << "Enter number of years: " << endl;


		while (!(cin >> numYears) || numYears < 0)
		{
			cout << "Please enter a positive numerical amount only!" << endl;
			cout << "Enter number of years: " << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}

		cout << "Enter monthly deposit: " << endl;

		while (!(cin >> monthlyDeposit) || monthlyDeposit < 0)
		{
			cout << "Please enter a positive numerical amount only!" << endl;
			cout << "Enter monthly deposit: " << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}

		cout << "Enter interest rate: " << endl;

		while (!(cin >> interestRate) || interestRate < 0)
		{
			cout << "Please enter a positive numerical amount only!" << endl;
			cout << "Enter interest rate: " << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}


		WelcomeMenus continueWelcome(initialAmt, numYears, monthlyDeposit, interestRate); //defines obect to pass parameters to welcome menu display for display in second menu, as desired
		CalcValues userData(initialAmt, numYears, monthlyDeposit, interestRate); // defines object to pass user inpput to calculation class to calculate numbers for final display

		//defined two objects to simply call appropriate display functions from dataTableDisplay class
		//each displays a header that our calculated info will be displayed under
		DataTableDisplay table1;
		DataTableDisplay table2;

		continueWelcome.dataWelcomeMenu();

		//function calls to print data in an organized table
		table1.displayTableNoDeposit();
		userData.calcClosingBalNoDeposit();
		cout << endl;
		table2.displayTableDeposit();
		userData.calcClosingBalDeposit();

		//take in input from the user, either to enter new information, or quit the program
		cout << "Would you like to try again? Please press Y to continue or N to quit..." << endl;
		cin >> userContinue;
	}
}