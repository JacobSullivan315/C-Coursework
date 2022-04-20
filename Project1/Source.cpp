/*
 * Calculator.cpp
 *
 *  Date: [May 13, 2021]
 *  Author: [Jacob Sullivan]
 */

#include <iostream>

using namespace std;

int main()
{
	int op1, op2;   //removed char statement variable because its not used at all and unnecessary
	char operation;
	char answer = 'y'; //added missing semicolon to end of this line and replaced double quotes with single quotes. Chars only need single quotes
						// also changed upper Y to lower y so while loop is entered
	while (answer == 'y')
	{
		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2;  // switched op1 and op2 in this line to prevent miscalculations
		if (operation == '+') { //changed double quotes to single quotes b/c only dealing with one char, also added brackets to if statement
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //fixed >> to << since it is a cout line and not a cin line
		}
		if (operation == '-') { //added brackets to properly format if statement
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //fixed >> to << sinces it is a cout line and not a cin line
		}
		if (operation == '*') {
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;  //added brackets to if statement to complete format, also added missing semicolon at end of line 27
		}
		if (operation == '/') {
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;   // added brackets to this if statement to complete its correct format
		}

		// swapped the / and * in the cout statements of the last two if blocks so they accurately print out the expression desired (/ with /, * with *)

		cout << "Do you wish to evaluate another expression? Enter \"y\" if so. " << endl; //added instruction to continue for clarity
		cin >> answer;
	}
}