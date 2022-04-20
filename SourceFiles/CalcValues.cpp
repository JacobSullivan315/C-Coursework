#include "calcValues.h"
/* This is our constructor for calc value.
   Parameters:
   t_initAmt - initial balance as defined by user
   t_years - number of years user wants to see account activity
   t_monthDeposit - monthly deposit as defined by user
   t_interest - interest rate as defined by user
   This constructor takes in the user input and assigns them to our private member variables, all
   denoted by m_. m_numMonths is our user defined years * 12, which we will use to calculate
   compounded monthly interest */
CalcValues::CalcValues(double t_initAmt, int t_years, double t_monthDeposit, double t_interest) {
	m_numYears = t_years;
	m_initialAmt = t_initAmt;
	m_monthlyDeposit = t_monthDeposit;
	m_interestRate = t_interest;
	m_numMonths = m_numYears * 12;
}

//returns caluclated closing balance
double CalcValues::getClosingBal() {
	return m_closingBal;
}
/* this function handles calculation of year end balances via calculating compounded monthly interest
   via the given formula provided in Airgead banks documents. This particular function takes into account
   a monthly deposit, and also tracks year end interest accrued.
   Parameters:
   m_totalInterest - keeps track of total interest accrued over a 12 month period. Initialized at zero because no interest has been earned yet.
   m_i - integer variable used in iterating month by month*/
void CalcValues::calcClosingBalDeposit() {
	m_totalInterest = 0;
	/*this for loop iterates through total number of months. Each month it calculates interest for the month, then adds that
	  interest as well as a monhtly deposit to the initial balance, or m_initialAmt. These values added together are assigned to
	  m_closingBal. Then m_initialAmt is set to m_closingBal, as that is the new monetary amount in the acount after
	  that particular month. */
	for (unsigned int m_i = 1; m_i <= m_numMonths; ++m_i) {
		m_interest = (m_initialAmt + m_monthlyDeposit) * ((m_interestRate / 100) / 12);
		m_closingBal = m_initialAmt + m_monthlyDeposit + m_interest;
		m_totalInterest = m_totalInterest + m_interest;
		m_initialAmt = m_closingBal;

		/*This if statement executes every 12 month, or year end.
		  m_roundedClosingBal - rounds our closing balance of the account to 2 decimal places for neat output
		  m_rounded interest - does the same with total interest accrued for the year
		  Then m_totalInterest is reset to zero for the new month.
		  m_i / 12 ensures the year, not the month, is printed in the output.*/
		if (m_i % 12 == 0) {
			m_roundedClosingBal = ceil(m_initialAmt * 100.0) / 100.0;
			m_roundedInterest = ceil(m_totalInterest * 100.0) / 100.0;
			cout << "  " << m_i / 12 << "                         " << m_roundedClosingBal << "                    " << m_roundedInterest << endl;
			m_totalInterest = 0;
		}

	}
}
/*The following function behaves the exact same way as the above function. The only difference is that this
  function does not include a monthly deposit. This way, the user can see a side by side comparison of an account
  accruing interest with monthly deposits and without.*/
void CalcValues::calcClosingBalNoDeposit() {
	m_totalInterest = 0;
	for (unsigned int m_i = 1; m_i <= m_numMonths; ++m_i) {
		m_interest = m_initialAmt * ((m_interestRate / 100) / 12);
		m_closingBal = m_initialAmt + m_interest;
		m_initialAmt = m_closingBal;
		m_totalInterest = m_totalInterest + m_interest;

		if (m_i % 12 == 0) {
			m_roundedClosingBal = ceil(m_initialAmt * 100.0) / 100.0;
			m_roundedInterest = ceil(m_totalInterest * 100.0) / 100.0;
			cout << "  " << m_i / 12 << "                         " << m_roundedClosingBal << "                    " << m_roundedInterest << endl;
			m_totalInterest = 0;

		}


	}
}