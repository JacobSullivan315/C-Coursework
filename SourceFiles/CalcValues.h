#ifndef NossAirgeadBankingProject_SourceFiles_CalcValues_H_
#define NossAirgeadBankingProject_SourceFiles_CalcValues_H_
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//Header file for our calculation class. explanations of functions and parameters as used are in cpp file
class CalcValues {
private:
	double m_initialAmt;
	double m_monthlyDeposit;
	double m_interestRate;
	double m_interest;
	int m_numYears;
	int m_numMonths;
	double m_totalAmt;
	double m_closingBal;
	double m_roundedClosingBal;
	double m_roundedInterest;
	double m_totalInterest;

public:
	CalcValues(double t_initAmt, int t_years, double t_monthDeposit, double t_interest);
	void calcClosingBalDeposit();
	void calcClosingBalNoDeposit();
	double getClosingBal();



};

#endif NossAirgeadBankingProject_SourceFiles_CalcValues_H_