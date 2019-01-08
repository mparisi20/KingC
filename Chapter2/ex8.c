#include <stdio.h>

// Exercise 2.8 from King
// By Max Parisi
// finished 1/7/2019

int main(void)
{
	float loan, annual_interest_r, monthly_payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &annual_interest_r);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	annual_interest_r = annual_interest_r / 100; // convert percentage to decimal
	
	loan = loan * (1 + annual_interest_r / 12);
	loan = loan - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", loan);
	
	loan = loan * (1 + annual_interest_r / 12);
	loan = loan - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", loan);
	
	loan = loan * (1 + annual_interest_r / 12);
	loan = loan - monthly_payment;
	printf("Balance remaining after third payment: %.2f\n", loan);
	
	return 0;
}
