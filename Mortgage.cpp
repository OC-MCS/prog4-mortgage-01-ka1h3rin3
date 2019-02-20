#include <iostream>
#include <cmath>
using namespace std;
#include "Mortgage.h"

//============
// Constructor
//============
Mortgage::Mortgage()
{
	loanAmt = 0.0;		// Initialize loanAmt to zero
	interestRt = 0.0;	// Initialize interestRt to zero
	years = 0;			// Initialize years to zero
}

//==========================================================
// The findTerm function to determine the length of the term
//==========================================================
double Mortgage::findTerm()
{
	return pow((1 + (interestRt / 12)), (12 * years));
}

//=========================================================================
// The setLoanAmt function to assign the user's unput to the private member
//=========================================================================
void Mortgage::setLoanAmt(float loanAmount)
{
	loanAmt = loanAmount;
}

//============================================================================
// The setInterestRt function to assign the user's unput to the private member
//============================================================================
void Mortgage::setInterestRt(float interestRate)
{
	interestRt = interestRate;
}

//=======================================================================
// The setYears function to assign the user's unput to the private member
//=======================================================================
void Mortgage::setYears(int numYears)
{
	years = numYears;
}

//===============================================================================
// The monthlyPayment function to determine the amount of money to pay each month
//===============================================================================
double Mortgage::monthlyPayment()
{
	return (loanAmt * (interestRt / 12.0) * findTerm()) / (findTerm() - 1);
}

//=================================================================================
// The totalPayment function to determine the total amount of money to pay the bank
//=================================================================================
double Mortgage::totalPayment(int numYears)
{
	return ((numYears * 0.12) * monthlyPayment()) * 100;
}
