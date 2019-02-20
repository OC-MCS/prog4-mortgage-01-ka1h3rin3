//==================================
// Name: Katherine Reed
// Course: Programming II 1123
// Programming Assignment #4
// Due Date: February 20, 2019
// Mortgage: Page 807, #15
//==================================
#include <iostream>
#include <iomanip>
using namespace std;
#include "Mortgage.h"

int main()
{
	// Local Variables:
	Mortgage mortgage;	// A new instance of Mortgage to handle the following variables:
	int years;			// The total number of years
	float iRate;		// The interest rate
	float loanAmt;		// The total loan amount
	
	/* This is for the end of the program... When it's done running eveything, it exits 
	without the "Press any key to continue." choice. I added the following line  of code 
	so that you can see what is being outputted*/
	int wait;			

	// Prompt the user for information...
	cout << "How many years will the loan continue? ";
	cin >> years;
	cout << "What is the interest rate? ";
	cin >> iRate;
	cout << "What is the loan amount? ";
	cin >> loanAmt;
	// If the user entered an negative number...
	if (loanAmt < 0)
	{
		cout << "Invalid loan amount. Please try again." << endl;
		cout << "What is the loan amount? ";
		cin >> loanAmt;
	}

	// Call the member functions in Mortgage...
	mortgage.setYears(years);
	mortgage.setInterestRt(iRate);
	mortgage.setLoanAmt(loanAmt);

	// Output the monthly and total payment...
	cout << "Your monthly payment amount: $" << fixed << setprecision(2) << mortgage.monthlyPayment() << endl;
	cout << "Your total amount to pay the bank: $" << fixed << setprecision(2) << mortgage.totalPayment(years) << endl;
	// The use for the following line of code can be found in the declaration above the variable definition
	cin >> wait;

	return 0;
}