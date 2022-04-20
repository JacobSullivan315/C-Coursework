#include "WelcomeMenus.h"

/*This is our constructor. It reads in the user input passed via our t_ parameters and assigns it to our private member variables:
  m_numYears - user defined number of years to analyze
  m_initialAmt - initial balance of the account
  m_monthlyDeposit - user defined monthly deposit
  m_interestRate - user defined interest rate */
WelcomeMenus::WelcomeMenus(double t_initAmt, int t_years, double t_monthDeposit, int t_interest)
{
	m_numYears = t_years;
	m_initialAmt = t_initAmt;
	m_monthlyDeposit = t_monthDeposit;
	m_interestRate = t_interest;
}

//this function simplay handles display of a menu via print statements
void WelcomeMenus::initWelcomeMenu() {
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount:" << endl;
	cout << "Monthly Deposit:" << endl;
	cout << "Annual Interest:" << endl;
	cout << "Number of Years:" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}

//this function does the same as the function above, but displays the info the user entered as well
void WelcomeMenus::dataWelcomeMenu() {
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: $" << m_initialAmt << endl;
	cout << "Monthly Deposit: $" << m_monthlyDeposit << endl;
	cout << "Annual Interest: %" << m_interestRate << endl;
	cout << "Number of Years: " << m_numYears << endl;
	cout << "**********************************" << endl;
	cout << endl;
	cout << endl;
}

void WelcomeMenus::displayWelcomeMessage() {
	cout << "Hello! Welcome to the Airgead Bank Financial Planner Tool!" << endl;
	cout << "Please follow the prompts to see how monthly deposits and interest" << endl;
	cout << "will affect your financial growth over time." << endl;
}
