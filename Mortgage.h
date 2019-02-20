#pragma once
//==========================================
// This is the ".h" file for Assignmnent #4
//==========================================

class Mortgage
{
private:
	float loanAmt;		// The dollar amount of the loan
	float interestRt;	// The annual interest rate
	int years;			// The number of years of the loan
	double findTerm();	// Function to find the term

public:
	Mortgage();					// Constructor
	void setLoanAmt(float);		// Function to set the loan amount
	void setInterestRt(float);	// Function to set the interest rate
	void setYears(int);			// Function to set the number of years
	double monthlyPayment();	// Function to calculate the monthly payment amount
	double totalPayment(int);	// Function to calculate the total amount to pay the bank
};
