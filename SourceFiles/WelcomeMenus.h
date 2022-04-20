#ifndef NossAirgeadBankingProject_SourceFiles_WelcomeMenus_H_
#define NossAirgeadBankingProject_SourceFiles_WelcomeMenus_H_
#include <iostream>
#include <string>
using namespace std;

//h file for welcome menus. functions explained in cpp file, along with parameters used.
class WelcomeMenus {
public:
	void displayWelcomeMessage();
	void initWelcomeMenu();
	void dataWelcomeMenu();
	WelcomeMenus(double t_initAmt, int t_years, double t_monthDeposit, int t_interest);
private:
	double m_initialAmt;
	int m_numYears;
	double m_monthlyDeposit;
	int m_interestRate;

};
#endif NossAirgeadBankingProject_SourceFiles_WelcomeMenus_H_