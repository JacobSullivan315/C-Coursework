#include "DataTableDisplay.h"

/* These two functions are only used for display purposes. They print the appropriate header for
   our two ouput charts, labeled appropriately and paired with our two calcClosingBal functions.*/
void DataTableDisplay::displayTableNoDeposit() {
	cout << "Yearly Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "===============================================================" << endl;
	cout << "  Year             Year End Balance           Year End Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;
}

void DataTableDisplay::displayTableDeposit() {
	cout << "  Yearly Balance and Interest With Additional Monthly Deposits " << endl;
	cout << "===============================================================" << endl;
	cout << "  Year             Year End Balance           Year End Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;
}