#include <stdio.h>

// Exercise 5.5 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	float income, tax;
	printf("Enter taxable income: ");
	scanf("%f", &income);
	
	if (income < 750)
		tax = 0.01 * income;
	else if (income < 2250.0)
		tax = 7.5 + 0.02 * (income - 750.0);
	else if (income < 3750.0)
		tax = 37.5 + 0.03 * (income - 2250.0);
	else if (income < 5250.0)
		tax = 82.5 + 0.04 * (income - 3750.0);
	else if (income < 7000)
		tax = 142.5 + 0.05 * (income - 5250.0);
	else
		tax = 230.0 + 0.06 * (income - 7000.0);
	
	printf("Tax due: %.2f\n", tax);
	return 0;
}
