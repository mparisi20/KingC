#include <stdio.h>

// Exercise 6.9 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	float loan, annual_interest_r, monthly_payment;
	int i, npayments;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &annual_interest_r);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d", &npayments);
	
	annual_interest_r = annual_interest_r / 100; // convert percentage to decimal
	
	for (i = 1; i <= npayments; i++) {
		if (loan == 0.0) break;
		loan *= (1 + annual_interest_r / 12);
		loan -= monthly_payment;
		if (loan <= 0.0) loan = 0.0; // it's paid off already
		printf("Balance remaining after payment %d: %.2f\n", i, loan);
	}
	return 0;
}
